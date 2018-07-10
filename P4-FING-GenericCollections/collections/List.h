/* 
 * File:   List.h
 * Author: igui
 *
 * Created on 26 de mayo de 2012, 02:33 PM
 */

#ifndef LIST_H
#define	LIST_H

#include "ListNode.h"

/**
 *  Una lista común
 */
class List: public ICollection {
private:
    ListNode *head;
    int size;
public:
    List();
    
    /**
     * Agrega un elemento a la colección al final de la lista.
     * Si ya existía no hace nada
     */
    void add(ICollectible *);
    
    
    /**
     * Borra el elementvoid remove(ICollectible *);o de la colección.
     * Si no existe no hace nada
     */
    void remove(ICollectible *);
    
    
    /*
     * Devuelve true si hay un elemento en la colección cuya dirección de memoria
     * coincide con el argumente
     */ 
    bool member(ICollectible *) const;
    
    /*
     * Devuelve true si size() es 0
     */
    bool isEmpty() const;
    
    /**
     * Devuelve el tamaño de la colección
     */
    int getSize() const;
    
    /*
     * Devuelve una instancia de IIterator creada con el operador new,
     * El órden de la iteración respeta el orden de inserción de los elementos
     */
    IIterator *getIterator();

    /**
     * Destruye la lista (pero no sus elementos)
     */
    virtual ~List();
};

#endif	/* LIST_H */

