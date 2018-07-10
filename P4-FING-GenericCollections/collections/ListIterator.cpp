/* 
 * File:   ListIterator.cpp
 * Author: igui
 * 
 * Created on 26 de mayo de 2012, 04:30 PM
 */

#include "ListIterator.h"
#include <stdexcept>

ListIterator::ListIterator(ListNode* n, bool disposeHeadOnDelete):
        head(n), current(n), disposeHeadOnDelete(disposeHeadOnDelete) {
}

ICollectible *ListIterator::getCurrent()
{
    if(current == NULL)
        throw std::out_of_range("No hay elemento: se llegó al fin de la colección");
    return current->getElem();
}

bool ListIterator::hasCurrent()
{
    return current != NULL;
}

void ListIterator::next()
{
    if(current != NULL)
        current = current->getNext();
}

ListIterator::~ListIterator()
{
    if(disposeHeadOnDelete){
        ListNode *n = head;
        while(n != NULL){
            ListNode *deleteMe = n;
            n = n->getNext();
            delete deleteMe;
        }
    }
        
}