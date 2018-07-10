/* 
 * File:   OrderedKey.h
 * Author: igui
 *
 * Created on 26 de mayo de 2012, 10:26 AM
 */

#ifndef ORDEREDKEY_H
#define	ORDEREDKEY_H

#include "IKey.h"

// Resultado de la comparación entre objetos de la clase OrderedKey
enum ComparisonRes { LESSER, EQUAL, GREATER };

/**
 * Subclase abstracta de IKey para claves con ordenación total
 */
class OrderedKey: public IKey {
public:
    /**
     * Compara objetos de la clase ordered key
     * @param k el objeto a comparar
     * @return MENOR si k es menor que this
     *         IGUAL si k es igual a this
     *         MAYOR si k es mayor a this
     */
    virtual ComparisonRes compare(OrderedKey *k) const = 0 ;
    
    /**
     * Equivalente a compare(k) == EQUAL
     * @param k
     * @return 
     */
    bool equals(IKey *k) const;
    
    virtual ~OrderedKey();
};

#endif	/* ORDEREDKEY_H */

