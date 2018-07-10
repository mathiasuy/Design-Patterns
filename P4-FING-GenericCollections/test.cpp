/* 
 * File:   test.cpp
 * Author: igui
 *
 * Created on 28 de mayo de 2011, 07:16 PM
 */

#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <assert.h>
#include <vector>

#include "Integer.h"
#include "String.h"
#include "collections/List.h"
#include "collections/OrderedDictionary.h"

using namespace std;

static void collectionTest1();
static void collectionTest2();
static void dictionaryTest1();
static void dictionaryTest2();
static void checkIterator(Integer **expectedValues, int size, IIterator *it,
        bool isOrderedIterator);
static String *getRandomString();

/*
 * 
 */
int main() {
    collectionTest1();
    collectionTest2();
    dictionaryTest1();
    dictionaryTest2();
    
    return (EXIT_SUCCESS);
}

static void collectionTest1()
{
    // tests de add/member/remove para una colección creada de forma estática
    
    cout << "Collection Test 1/2: 3 elementos" << endl;
            
    Integer *ints[] = { new Integer(6), new Integer(7), new Integer(8) };
    List col;
    
    assert(col.isEmpty());
    col.add(ints[0]);
    assert(col.member(ints[0]));
    assert(!col.member(ints[1]));
    assert(col.getSize() == 1);
    
    col.add(ints[1]);
    assert(col.member(ints[1]));
    assert(col.getSize() == 2);
    
    col.add(ints[2]);
    assert(col.member(ints[2]));
    assert(col.getSize() == 3);
    
    col.remove(ints[1]);
    assert(col.getSize() == 2);
    assert(!col.member(ints[1]));
    assert(!col.isEmpty());
    
    col.remove(ints[2]);
    col.remove(ints[0]);
    
    assert(col.isEmpty());
    
    for(int i = 0; i < 3; ++i)
        delete ints[i];
}

static void collectionTest2()
{
    // Test de carga con varios elementos aleatorios
        
    const int bigArraySize = 10000; 
    const int maxValue     = 6000; 
    
    cout << "Collection Test 2/2: " << bigArraySize << " elementos" << endl;
    
    List *bigCol = new List();
        
    Integer **bigArray = new Integer*[bigArraySize];
    for(int i = 0; i < bigArraySize; ++i)
        bigArray[i] = new Integer(rand() % maxValue);
    
    for(int i = 0; i < bigArraySize; ++i){
        bigCol->add(bigArray[i]);    
        assert(bigCol->getSize() == i+1);
    }
    
    for(int i = 0; i < bigArraySize; ++i)
        assert(bigCol->member(bigArray[i]));
    
    IIterator *it = bigCol->getIterator();
    checkIterator(bigArray, bigArraySize, it, false);
    delete it;
                
    for(int i = 0; i < bigArraySize; ++i){
        bigCol->remove(bigArray[i]);
        assert(!bigCol->member(bigArray[i]));
    }
            

    assert(bigCol->isEmpty());
    
    for(int i = 0; i < bigArraySize; ++i)
        delete bigArray[i];
    
    delete[] bigArray;
    delete bigCol;
}

// prueba la clase Dictionary
static void dictionaryTest1()
{
    // tests de add/member/remove para una colección creado con new
    cout << "Dictionary Test 1/2: 5 elementos" << endl;

    OrderedDictionary *smallDict = new OrderedDictionary();
    
    String *keys[] = {
                       new String("Julio"), new String("Cesar"),
                       new String("Gard"), new String("Y"),
                       new String("Facebook")
                      };
    Integer *vals[] = { 
                        new Integer(5), new Integer(5), new Integer(4),
                        new Integer(1), new Integer(8)
                        };
    
    assert(smallDict->isEmpty());
    
    
    for(int i = 0; i < 5; ++i){
        smallDict->add(keys[i], vals[i]);
        assert(smallDict->getSize() == i+1);
    }
    
    assert(smallDict->getMin() == vals[1]);
    assert(smallDict->getMax() == vals[3]);
    
    String *key = new String("Cesar");
    assert(smallDict->find(key) == vals[1]);
    delete key;
    
    
    // checkea iteradores
    Integer *minToMax[] = { vals[1], vals[4], vals[2], vals[0], vals[3] };
    IIterator *it = smallDict->getIterator();
    checkIterator(minToMax, 5, it, true);
    delete it;
    
    Integer *maxToMin[] = { vals[3], vals[0], vals[2], vals[4], vals[1] };
    it = smallDict->getInverseIterator();
    checkIterator(maxToMin, 5, it, true);
    delete it;
    
    key = new String("Facebook");
    smallDict->remove(key);
    assert(smallDict->member(key) == false);
    delete key;
    
    assert(!smallDict->isEmpty());
    assert(smallDict->getSize() == 4);
    
    key = new String("Julio");
    smallDict->remove(key);
    assert(smallDict->member(key) == false);
    delete key;
    key = new String("Cesar");
    smallDict->remove(key);
    assert(smallDict->member(key) == false);
    delete key;
    
    assert(smallDict->getSize() == 2);
    
    delete smallDict; // borra las claves de keys. No se pueden reusar
    
    for(int i = 0; i < 5; ++i)
        delete vals[i];
}

static void dictionaryTest2()
{
    // Test de carga con varios elementos aleatorios
        
    const int bigArraySize = 10000; 
    const int maxValue     = 3000; 
    
    cout << "Dictionary Test 2/2: " << bigArraySize << " elementos" << endl;
    
    OrderedDictionary *bigDict = new OrderedDictionary();
    
    String **keys = new String *[bigArraySize];
    String **keys2 = new String *[bigArraySize];
    Integer **vals = new Integer *[bigArraySize];
    for(int i = 0; i < bigArraySize; ++i){
        keys[i] = getRandomString();
        keys2[i] = new String(keys[i]->getValue());
        vals[i] = new Integer(rand() % maxValue);
    }
    
    assert(bigDict->isEmpty());
    
    for(int i = 0; i < bigArraySize; ++i){
        bigDict->add(keys[i], vals[i]);
        
        assert(((Integer *)bigDict->find(keys2[i]))->equals(vals[i]));
    }
    
    for(int i = 0; i < bigArraySize; ++i)
        assert(bigDict->member(keys2[i]));
   
    
    for(int i = 0; i < bigArraySize / 4; ++i)
        bigDict->remove(keys2[i]);
    
    for(int i = 0; i < bigArraySize / 4; ++i)
        assert(!bigDict->member(keys2[i]));
    
    for(int i = 0; i < bigArraySize; ++i)
        delete keys2[i];
    delete[] keys2;
    
    for(int i = 0; i < bigArraySize; ++i)
        delete vals[i];
    delete[] vals;
    
    delete bigDict;
    delete[] keys;
}

// da un string aleatorio 
static String *getRandomString()
{
    int resSize = 3 + rand() % 8;
    char *res = new char[resSize];
    for(int i = 0; i < resSize - 1; ++i){
        res[i] = rand() % ('z' - 'a') + 'a';
    }
    res[resSize-1] = '\0';
    String *resString = new String(res);
    delete[] res;
    return resString;
}

// compara dos punteros
static int compareIntegerPointers(const void *x, const void *y)
{
    return memcmp(x, y, sizeof(Integer *));
}

// chequea el contenido de un iterador contra un conjunto de valores esperados
static void checkIterator(Integer **expectedValues, int size, IIterator *it,
        bool isOrderedIterator)
{
    Integer **gotValues = new Integer*[size];
    
    int iteratedCount = 0;
    while(it->hasCurrent()){
        assert(iteratedCount <= size);
        gotValues[iteratedCount] = (Integer *) it->getCurrent();
       
        ++iteratedCount;
        it->next();
    }
    
    assert(iteratedCount == size);
    
    // ordena los elementos encontrados y compara que sean iguales
    if(!isOrderedIterator){
        qsort(expectedValues, size, sizeof(Integer *), compareIntegerPointers);
        qsort(gotValues, size, sizeof(Integer *), compareIntegerPointers);
    }
   
    for(int i = 0; i < size; ++i)
        assert(gotValues[i] == expectedValues[i]);
    
    delete[] gotValues;
}
