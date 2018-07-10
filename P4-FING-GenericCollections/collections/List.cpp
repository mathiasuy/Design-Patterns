/* 
 * File:   List.cpp
 * Author: igui
 * 
 * Created on 26 de mayo de 2012, 02:33 PM
 */

#include "List.h"
#include "ListIterator.h"

List::List():
   head(NULL), size(0){
}

void List::add(ICollectible* c)
{
    if(head == NULL){ // list vacía; tamaño = 1
        head = new ListNode(c);
        size = 1;
        return;
    }
    
    ListNode *current = head;
    ListNode *previous;
    while(current != NULL && current->getElem() != c){
        previous = current;
        current = current->getNext();
    }
    
    if(current == NULL){ // final de la lista, se agrega
        previous->setNext(new ListNode(c));
        ++size;
    }
}

void List::remove(ICollectible *c)
{
    ListNode *current = head;
    ListNode *previous = NULL;
    while(current != NULL && current->getElem() != c){
        previous = current;
        current = current->getNext();
    }

    if(current == NULL){ // final de la lista, no estaba
        return;
    } else if(current->getElem() == c){ // ya está, se borra
        --size;
        if(previous == NULL) // se borra el primer elemento
            head = current->getNext();
        else
            previous->setNext(current->getNext());
        delete current;
    }
}

bool List::member(ICollectible *c) const{
    for(ListNode *current = head; current != NULL; current = current->getNext())
        if(current->getElem() == c)
            return true;
    return false;
        
}

int List::getSize() const
{
    return size;
}

bool List::isEmpty() const
{
    return size == 0;
}

IIterator *List::getIterator()
{
    return new ListIterator(head);
}

List::~List() {
    ListNode *current = head;
    ListNode *next;
    while (current != NULL) {
        next = current->getNext();
        delete current;
        current = next;
    }
}

