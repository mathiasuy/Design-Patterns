/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ICollection.h
 * Author: user6
 *
 * Created on 1 de junio de 2018, 0:53
 */

#ifndef ICOLLECTION_H
#define ICOLLECTION_H
#include "ICollectible.h"
#include "IIterator.h"

class ICollection {
public:
    virtual void add(ICollectible as)=0;
    virtual void remove(ICollectible as)=0;
    virtual bool member(ICollectible as)=0;
    virtual IIterator setIterator()=0;
    
};

#endif /* ICOLLECTION_H */


