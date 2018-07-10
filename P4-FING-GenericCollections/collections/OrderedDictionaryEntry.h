/* 
 * File:   OrderedDictionaryEntry.h
 * Author: igui
 *
 * Created on 26 de mayo de 2012, 05:12 PM
 */

#ifndef ORDEREDDICTIONARYENTRY_H
#define	ORDEREDDICTIONARYENTRY_H

#include "../interfaces/OrderedKey.h"
#include "../interfaces/ICollectible.h"
#include <cstddef>

/**
 * Entrada de OrderedDictionary, es un nodo de un arbol binario de búsqueda
 * que se busca por la clave. Almacena un ICollectible
 * @param key la clave almacenada. No cambia
 * @param val el valor almacenado
 * @param l los elementos menores
 * @param g los elementos mayores
 */
class OrderedDictionaryEntry {
public:
    OrderedDictionaryEntry(
            OrderedKey *key,
            ICollectible *val,
            OrderedDictionaryEntry *l = NULL,
            OrderedDictionaryEntry *g = NULL
            );
    
    // métodos de acceso para miembros
    OrderedKey *getKey();
    ICollectible *getVal();
    void setVal(ICollectible *i);
    OrderedDictionaryEntry *getLesser();
    void setLesser(OrderedDictionaryEntry *e);
    OrderedDictionaryEntry *getGreater();
    void setGreater(OrderedDictionaryEntry *e);
    
    
    /**
     * Da el elemento menor dentro del árbol
     * @return 
     */
    OrderedDictionaryEntry *getLeastElement();
    
    /**
     * Da el elemento mayor dentro del árbol
     * @return 
     */
    OrderedDictionaryEntry *getGreatestElement();
    
    /**
     * Borra el elemento y los que tiene enlazados
     */
    void deleteInDepth();
    
    /**
     * Borra el objeto 
     */
    virtual ~OrderedDictionaryEntry();
private:
    OrderedKey *key;
    ICollectible *val;
    OrderedDictionaryEntry *lesser;
    OrderedDictionaryEntry *greater;
};

#endif	/* ORDEREDDICTIONARYENTRY_H */

