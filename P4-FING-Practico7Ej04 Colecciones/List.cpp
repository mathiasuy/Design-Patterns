/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   List.cpp
 * Author: user6
 * 
 * Created on 1 de junio de 2018, 0:58
 */

#include "List.h"

List::List() {
    this->first = new Node(nullptr, nullptr);
}

List::~List() {
    delete first;
}

void List::add(ICollectible* e){
    Node *nuevo = new Node(e,first->getNext());
    first->setNext(nuevo);// lo inserto en la segunda posición
}

void List::remove(ICollectible* e){
    Node *pos = first;
    bool encontre = false;
    while (pos->setNext() != nullptr && !encontre){
        if (pos->getNext()->getElement()==e)
            encontre = true;
        else
            pos = pos->getNext();
    }
    if (encontre){
        Node *aux = pos->getNext();
        pos->setNext(pos->getNext()->getNext());
        aux->setNext(nullptr);
        delete aux;
    }
}

IIterator* List::getIterator(){
    return new ListIterator(this->first);
}
