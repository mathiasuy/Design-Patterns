/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Node.cpp
 * Author: user6
 * 
 * Created on 1 de junio de 2018, 0:59
 */

#include "Node.h"

Node::Node() {
}

Node::Node(ICollectible*,Node*) {
    
}

Node::~Node() {
    if (this->sig!= NULL){ //esto se repetirá porque el siguiente también es Node
        delete this->sig; //
    }
}

