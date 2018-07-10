/* 
 * File:   IDictionary.h
 * Author: igui
 *
 * Created on 29 de mayo de 2011, 03:11 PM
 */

#ifndef IDICTIONARY_H
#define	IDICTIONARY_H

#include "IKey.h"
#include "ICollectible.h"
#include "IIterator.h"

class IDictionary {
public:
    /**
     * Agrega un valor al diccionario
     * @param k la clave, debe ser un objeto creado con new y no se puede reusar.
     *          Se borra al destruir el diccionario
     * @param val el valor a almacenar. No se borra 
     */    
    virtual void add(IKey *k, ICollectible *val) = 0;
    
    /**
     * Devuelve true si hay un miembro con cierta clave
     * @param k la clave
     */
    virtual bool member(IKey *k)  const= 0;
    
    /**
     * Saca el miembro del diccionario
     * @param k la clave a buscar
     */
    virtual void remove(IKey *k) = 0;
    
    /**
     * Busca un elemento en el diccionario
     * @param k la clave a buscar
     * @return el ICollectible que se agregó con add o NULL si no hay tal objeto
     */
    virtual ICollectible *find(IKey *k) const = 0;
    
    /**
     * 
     * @return true si el tamaño es 0
     */
    virtual bool isEmpty() const = 0;
    
    /**
     * Devuelve el tamaño del diccionario
     * @return 
     */
    virtual int getSize() const = 0;
    
    /**
     * Obtiene un iterador en los elementos del diccionario
     * @return un iterador creado con new
     */
    virtual IIterator *getIterator() = 0;
    
    
    virtual ~IDictionary();
};

#endif	/* IDICTIONARY_H */

