/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Node.h
 * Author: user6
 *
 * Created on 1 de junio de 2018, 0:59
 */

#ifndef NODE_H
#define NODE_H

#include "ICollectible.h"


class Node {
private:
    ICollectible *elem;
    Node *sig;
public:
    ICollectible *getElement();
    void setElement(ICollectible*);
    Node *getNext();
    void setNext(Node*);
    
    Node(ICollectible*, Node*);
    virtual ~Node();
};

#endif /* NODE_H */

