/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   List.h
 * Author: user6
 *
 * Created on 1 de junio de 2018, 0:58
 */

#ifndef LIST_H
#define LIST_H

#include "ICollection.h"
#include "Node.h"


class List : public ICollection{
private:
    Node* first;
public:
    List();
    ~List();
    void add(ICollectible *);
    void remove(ICollectible*);
    bool member(ICollectible*);
    IIterator getIterator();
};

#endif /* LIST_H */

