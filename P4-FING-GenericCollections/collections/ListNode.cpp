/* 
 * File:   ListNode.cpp
 * Author: igui
 * 
 * Created on 26 de mayo de 2012, 02:36 PM
 */

#include "ListNode.h"
#include <stdexcept>

ListNode::ListNode(ICollectible* elem, ListNode* next):
        next(next) {
    if(elem == NULL)
        std::invalid_argument("elem is NULL");
    this->elem = elem;
}

ICollectible *ListNode::getElem() const
{
    return elem;
}

void ListNode::setElem(ICollectible* elem)
{
    if(elem == NULL)
        std::invalid_argument("elem is NULL");
    this->elem = elem;
}

ListNode *ListNode::getNext() const
{
    return next;
}

void ListNode::setNext(ListNode* next)
{
    this->next = next;
}