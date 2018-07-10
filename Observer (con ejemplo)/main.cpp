#include "Vista1.h"
#include "Vista2.h"
#include "Subject.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdexcept>
#include <stddef.h>

#ifdef _WIN32
#include <conio.h>
void clr()
{
    system("cls");
}
void readKey()
{
    cout << "\n";
    system("pause");
}
int readInt()
{
    int i;
    cin >> i;
    return i;
}
#else
void clr()
{
    system("clear men");
}
void readKey()
{
    system("read");
}
int readInt()
{
    int i;
    cin >> i;
    return i;
}
#endif



int main(){

    ///Creo el subject
    Subject* subject = new Subject();

    ///Creo las vistas
    Vista1* v1 = new Vista1("primero de Vista1");
    Vista2* v2 = new Vista2("primero de Vista2");

    ///Agrego el Subject a las listas para que tomen la informacion
    v1->setSubject(subject);
    v2->setSubject(subject);

    ///Agrego las vistas a la lista de observadores del Subject
    subject->addObserver(v1);    subject->addObserver(v2);


    cout << "Ejemplo de Patron de diseno Observer." << endl;
    cout << "Vista1 y Vista2 actualizaran su mensaje automaticamente cuando el mensaje en Subject cambie" << endl;
    cout << "Actualmente en Vista1: " << v1->toString() << endl;
    cout << "Actualmente en Vista2: " << v2->toString() << endl;
    string mensaje;
    do {
        cout << "Ingrese el mensaje que se establecera en Subject: " << endl;
        std::cin.ignore();
        std::getline(cin,mensaje);
        cout << "Estableciendo Subject con " << mensaje << "..." << endl;
        subject->setMensaje(mensaje);
        subject->notifyObservers();
        cout << "Actualmente en Subject: " << subject->toString() << endl;
        cout << "Actualmente en Vista1: " << v1->toString() << endl;
        cout << "Actualmente en Vista2: " << v2->toString() << endl;
        readKey();
        //clr();
    }while(mensaje != "");
    return 1;
}
