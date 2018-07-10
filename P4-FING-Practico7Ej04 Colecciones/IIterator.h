/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IIterator.h
 * Author: user6
 *
 * Created on 1 de junio de 2018, 0:56
 */

#ifndef IITERATOR_H
#define IITERATOR_H

#include "ICollectible.h"


class IIterator {
    virtual bool hasCurrent()=0;
    virtual ICollectible getCurrent()=0;
    virtual void next()=0;
};

#endif /* IITERATOR_H */

