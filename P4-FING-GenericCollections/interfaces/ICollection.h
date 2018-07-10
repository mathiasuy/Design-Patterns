/* 
 * File:   ICollection.h
 * Author: igui
 *
 * Created on 28 de mayo de 2011, 07:38 PM
 */

#include "IIterator.h"
#ifndef _ICOLLECTION_H
#define	_ICOLLECTION_H

/**
 * Interfaz de colecciones
 */
class ICollection
{
public:
    /**
     * Agrega un elemento a la colección. Si ya existía no hace nada
     */
    virtual void add(ICollectible *) = 0;
    
    /**
     * Borra el elemento de la colección. Si no existe no hace nada
     */
    virtual void remove(ICollectible *) = 0;
    
    
    /*
     * Devuelve true si hay un elemento en la colección cuya dirección de memoria
     * coincide con el argumente
     */ 
    virtual bool member(ICollectible *) const = 0;
    
    /*
     * Devuelve true si size() es 0
     */
    virtual bool isEmpty() const = 0;
    
    /**
     * Devuelve el tamaño de la colección
     */
    virtual int getSize() const = 0;
    
    /*
     * Devuelve una instancia de IIterator creada con el operador new
     */
    virtual IIterator *getIterator() = 0;
    
    virtual ~ICollection();
};

#endif	/* _ICOLLECTION_H */

