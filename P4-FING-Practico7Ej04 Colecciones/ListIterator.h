/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListIterator.h
 * Author: user6
 *
 * Created on 1 de junio de 2018, 2:15
 */

#ifndef LISTITERATOR_H
#define LISTITERATOR_H

class ListIterator {
    private:
        Node *current;
    public:
        ListIterator(Node*);
        ~ListIterator();
        bool hasCurrent();
        ICollectible *getCurrent();
        void next();
};

#endif /* LISTITERATOR_H */

