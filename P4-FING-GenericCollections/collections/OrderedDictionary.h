/* 
 * File:   OrderedDictionary.h
 * Author: igui
 *
 * Created on 26 de mayo de 2012, 04:57 PM
 */

#ifndef ORDEREDDICTIONARY_H
#define	ORDEREDDICTIONARY_H

#include "OrderedDictionaryEntry.h"
#include "ListNode.h"
#include "../interfaces/IDictionary.h"

/**
 * Implementa un diccionario ordenado, para implementar la ordenación es
 * necesario que las claves sean instancias de OrderedKey
 * 
 */
class OrderedDictionary: public IDictionary {
public:
    OrderedDictionary();
    
    /**
     * Agrega un valor al diccionario, si ya existe el valor para la clave 
     * se reemplaza
     * @param k la clave, debe ser una instancia de OrderedKey creado con new 
     *          Se borra al destruir el diccionario
     * @param val el valor a almacenar. No se borra 
     */    
    void add(IKey *k, ICollectible *val);
    
    /**
     * Devuelve true si hay un miembro con cierta clave OrderedKey
     * @param k la clave
     */
    bool member(IKey *k)  const;
    
    /**
     * Saca el miembro del diccionario
     * @param k la clave a buscar. Debe ser una instancia de OrderedKey
     */
    void remove(IKey *k);
    
    /**
     * Busca un elemento en el diccionario
     * @param k la clave a buscar. Debe ser una instancia de OrderedKey
     * @return el ICollectible que se agregó con add o NULL si no hay tal objeto
     */
    ICollectible *find(IKey *k) const;
    
    /**
     * 
     * @return true si el tamaño es 0
     */
    bool isEmpty() const;
    
    /**
     * Devuelve el tamaño del diccionario
     * @return 
     */
    int getSize() const;
    
    /**
     * Obtiene un iterador en los elementos del diccionario, de menor a mayor
     * @return un iterador creado con new
     */
    IIterator *getIterator();
    
    /**
     * Obtiene un iterador en los elementos, de mayor a menor
     * @return un iterador creado con new
     */
    IIterator *getInverseIterator();
    
    /**
     * Obtiene el valor que corresponde a la clave más grande del diccionario.
     * Tira una excepción de tipo std::out_of_range si el diccionario está vacío
     * @return 
     */
    ICollectible *getMax();
    
    /**
     * Obtiene el valor que corresponde a la clave más pequeña del diccionario.
     * Tira una excepción de tipo std::out_of_range si el diccionario está vacío
     * @return 
     */
    ICollectible *getMin();
    
    virtual ~OrderedDictionary();

private:
    // funciones para armar las listas de los iteradores
    static void makeListOrder(OrderedDictionaryEntry *entry, ListNode *&head,
            ListNode *&last);
    static void makeListReverseOrder(OrderedDictionaryEntry *entry,
            ListNode *&head);
    
    int size;
    OrderedDictionaryEntry *root;
};

#endif	/* ORDEREDDICTIONARY_H */

