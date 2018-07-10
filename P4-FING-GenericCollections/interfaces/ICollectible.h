/* 
 * File:   ICollectible.h
 * Author: igui
 *
 * Created on 28 de mayo de 2011, 07:04 PM
 */

#ifndef _ICOLLECTIBLE_H
#define	_ICOLLECTIBLE_H

/**
 *  Elemento de la colección
 */
class ICollectible
{
protected:
    /*
     * No se permite instanciar ICollectible directamente
     */
    ICollectible();
public:
    virtual ~ICollectible();
};

#endif	/* _ICOLLECTIBLE_H */

