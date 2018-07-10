/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListIterator.cpp
 * Author: user6
 * 
 * Created on 1 de junio de 2018, 2:15
 */

#include "ListIterator.h"
#include "List.h"

ListIterator::ListIterator(Node* n) {
    this->current=n;
}

ListIterator::~ListIterator() {
    // queda vacío
}

bool ListIterator::hasCurrent(){
    return (current->getNext()!= nullptr);
}

ICollectible *ListIterator::getCurrent(){
    return (current->getNext()->getElement());
}

void ListIterator::next(){
    this->current->setNext(this->current->setNext());
}