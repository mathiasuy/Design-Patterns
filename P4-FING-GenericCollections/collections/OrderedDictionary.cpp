/*
 * File:   OrderedDictionary.cpp
 * Author: igui
 *
 * Created on 26 de mayo de 2012, 04:57 PM
 */

#include <stdexcept>

#include "OrderedDictionary.h"
#include "ListIterator.h"

OrderedDictionary::OrderedDictionary(): size(0), root(NULL) {
}

void OrderedDictionary::add(IKey *k, ICollectible *val)
{
    OrderedKey *key = dynamic_cast<OrderedKey *>(k);
    if(key == NULL)
        throw std::invalid_argument("Se esperaba un OrderedKey");

    OrderedDictionaryEntry *parent = NULL;
    ComparisonRes parentComparison;
    ComparisonRes comparision;

    for(OrderedDictionaryEntry *current = root; current != NULL;)
    {

        comparision = key->compare(current->getKey());
        if(comparision == EQUAL){  // la clave ya está, se reemplaza
            current->setVal(val);
            delete k; // la clave no se va a usar, se borra
            return;
        }

        parent = current;
        parentComparison = comparision;
        if(parentComparison == LESSER)
            current = current->getLesser();
        else
            current = current->getGreater();
    }

    ++size;
    OrderedDictionaryEntry *newEntry = new OrderedDictionaryEntry(key, val);
    if(parent == NULL)
        root = newEntry;
    else if(parentComparison == GREATER)
        parent->setGreater(newEntry);
    else
        parent->setLesser(newEntry);
}

bool OrderedDictionary::member(IKey *k)  const
{
    return find(k) != NULL;
}

void OrderedDictionary::remove(IKey *k)
{
    OrderedKey *key = dynamic_cast<OrderedKey *>(k);
    if(key == NULL)
        throw std::invalid_argument("Se esperaba un OrderedKey");

    OrderedDictionaryEntry *parent = NULL;
    OrderedDictionaryEntry *current = root;
    ComparisonRes parentComparison;
    ComparisonRes comparision;

    // busca el elemento a borrar y lo pone en current
    while(current != NULL)
    {
        comparision = key->compare(current->getKey());
        if(comparision == EQUAL)  // la clave ya está, se puede borrar
            break;

        parent = current;
        parentComparison = comparision;
        if(parentComparison == LESSER)
            current = current->getLesser();
        else
            current = current->getGreater();
    }

    if(current == NULL) // no se encontró la clave, no se borra
        return;

    --size;

    // acomoda el parent si es necesario
    OrderedDictionaryEntry *G = current->getGreater();
    OrderedDictionaryEntry *L = current->getLesser();

    if(parent == NULL){ // se borra la raíz
        if(G == NULL) // no hay sub arbol derecho
            root = L;
        else {
            root = G;
            G->getLeastElement()->setLesser(L);
        }
    } else if(parentComparison == GREATER){
        if(G != NULL){
            parent->setGreater(G);
            G->getLeastElement()->setLesser(L);
        } else
            parent->setGreater(L);
    } else {
        if(G != NULL){
            parent->setLesser(G);
            G->getLeastElement()->setLesser(L);
        } else
            parent->setLesser(L);
    }

    delete current;
}

ICollectible *OrderedDictionary::find(IKey *k) const
{
    OrderedKey *key = dynamic_cast<OrderedKey *>(k);
    if(key == NULL)
        throw std::invalid_argument("Se esperaba un OrderedKey");

    for(OrderedDictionaryEntry *current = root; current != NULL;)
    {
        ComparisonRes comp = key->compare(current->getKey());
        if(comp == EQUAL)
           return current->getVal();
        else if(comp == LESSER)
            current = current->getLesser();
        else
            current = current->getGreater();
    }

    return NULL;
}

bool OrderedDictionary::isEmpty() const
{
    return size == 0;
}

int OrderedDictionary::getSize() const
{
    return size;
}



IIterator *OrderedDictionary::getIterator()
{
    ListNode *head = NULL;
    ListNode *last = NULL;
    makeListOrder(root, head, last);
    return new ListIterator(head, true);
}

IIterator *OrderedDictionary::getInverseIterator()
{
    ListNode *head = NULL;
    makeListReverseOrder(root, head);
    return new ListIterator(head, true);
}

ICollectible *OrderedDictionary::getMax()
{
    if(size == 0)
        throw std::out_of_range("El diccionario está vacío");

    return root->getGreatestElement()->getVal();
}

ICollectible *OrderedDictionary::getMin()
{
    if(size == 0)
        throw std::out_of_range("El diccionario está vacío");

    return root->getLeastElement()->getVal();
}

OrderedDictionary::~OrderedDictionary() {
  if(root != NULL){
    root->deleteInDepth();
    delete root;
  }
}

void OrderedDictionary::makeListOrder(OrderedDictionaryEntry *entry,
        ListNode *&head, ListNode *&last){
    if(entry == NULL)
        return; // árbol vacío, no hay nada que hacer

    makeListOrder(entry->getLesser(), head, last);

    // pone el elemento actual al final y crea la lista si estaba en NULL
    if(head == NULL){
        head = new ListNode(entry->getVal());
        last = head;
    } else {
        ListNode *entryNode = new ListNode(entry->getVal());
        last->setNext(entryNode);
        last = entryNode;
    }

    makeListOrder(entry->getGreater(), head, last);
}

void OrderedDictionary::makeListReverseOrder(OrderedDictionaryEntry *entry,
        ListNode *&head)
{
    if(entry == NULL)
        return; // árbol vacío, no hay nada que hacer

    makeListReverseOrder(entry->getLesser(), head);

    // pone el elemento actual al final y crea la lista si estaba en NULL
    if(head == NULL){
        head = new ListNode(entry->getVal());
    } else {
        ListNode *entryNode = new ListNode(entry->getVal());
        entryNode->setNext(head);
        head = entryNode;
    }

    makeListReverseOrder(entry->getGreater(), head);
}
