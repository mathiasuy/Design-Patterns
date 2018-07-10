/* 
 * File:   OrderedDictionaryEntry.cpp
 * Author: igui
 * 
 * Created on 26 de mayo de 2012, 05:12 PM
 */

#include "OrderedDictionaryEntry.h"
#include "OrderedDictionary.h"
#include <stdexcept>

OrderedDictionaryEntry::OrderedDictionaryEntry(
            OrderedKey *key,
            ICollectible *val,
            OrderedDictionaryEntry *l,
            OrderedDictionaryEntry *g
            )
        : lesser(l), greater(g)
{
    if(key == NULL)
        throw std::invalid_argument("key is NULL");
    this->key = key;
    
    if(val == NULL)
        throw std::invalid_argument("val is NULL");
    this->val = val;
}
    
OrderedKey *OrderedDictionaryEntry::getKey()
{
    return key;
}

ICollectible *OrderedDictionaryEntry::getVal()
{
    return val;
}

void OrderedDictionaryEntry::setVal(ICollectible *i)
{
    if(val == NULL)
        throw std::invalid_argument("val is NULL");
    this->val = i;
}

OrderedDictionaryEntry *OrderedDictionaryEntry::getLesser()
{
    return lesser;
}

void OrderedDictionaryEntry::setLesser(OrderedDictionaryEntry *e)
{
    this->lesser = e;
}

OrderedDictionaryEntry *OrderedDictionaryEntry::getGreater()
{
    return this->greater;
}

void OrderedDictionaryEntry::setGreater(OrderedDictionaryEntry *e)
{
    this->greater = e;
}

OrderedDictionaryEntry *OrderedDictionaryEntry::getLeastElement()
{
    OrderedDictionaryEntry *res = this;
    while(res->lesser != NULL)
        res = res->lesser;
    return res;
}

OrderedDictionaryEntry *OrderedDictionaryEntry::getGreatestElement()
{
    OrderedDictionaryEntry *res = this;
    while(res->greater != NULL)
        res = res->greater;
    return res;
}

void OrderedDictionaryEntry::deleteInDepth()
{
    if(lesser != NULL){
        lesser->deleteInDepth();
        delete lesser;
    }if(greater != NULL){
        greater->deleteInDepth();
        delete greater;
    }
}

OrderedDictionaryEntry::~OrderedDictionaryEntry() {
    delete key;
}

