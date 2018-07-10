#ifndef MAIN_CPP
#define MAIN_CPP
#include <string>
#include "Operacion.h"
#include "Numero.h"
#include "stdio.h"
#include "stdlib.h"
#include <vector>
#include <iostream>
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


using namespace std;

int ultimo = 0;

void imprimirVector(vector<Componente*> v){
    vector<Componente*>::iterator it = v.begin();
    int i = 0;
    while (it!=v.end()){
        cout << "Guardado en " << std::distance(v.begin(), it) << ": " << (*it)->toString() << " Resultado: " << (*it)->realizar() << endl;
        i++;
        it++;
    }
}

int main(){
    int opc = 0;
    Componente* c = new Operacion(su);
    vector<Componente*> v;
    do{
            clr();
            imprimirVector(v);
            cout << "Formula final: " << c->toString() << endl;
            cout << "Resultado: " << c->realizar() << endl;
            int opc;
            cout << "1 - Guardar una suboperacion." << endl;
            cout << "2 - Unir suboperaciones." << endl;
            cout << "3 - Ingresar guardado a formula." << endl;
            cin >> opc;
            switch (opc){
                case 1: {
                        cout << "Ingrese el operador (+, -, /, *):" << endl;
                        string operador;
                        std::cin.ignore();
                        std::getline(cin,operador);
                        Componente* nuevo = new Operacion(Utils::deString(operador));
                        cout << "Ingrese la cantidad de operandos" << endl;
                        int cant;
                        cin >> cant;
                        float numero;
                        for (int i = 0; i < cant; i++){
                            cout << "Ingrese un numero: " << endl;
                            cin >> numero;
                            nuevo->add(new Numero(numero));
                        }
                        v.push_back(nuevo);
                    }break;
                case 2: {
                        cout << "Ingrese el operador (+, -, /, *):" << endl;
                        string operador;
                        std::cin.ignore();
                        std::getline(cin,operador);
                        Componente* nuevo = new Operacion(Utils::deString(operador));
                        cout << "Ingrese la cantidad de subformulas a unir" << endl;
                        int cant;
                        cin >> cant;
                        int numero;
                        for (int i = 0; i < cant; i++){
                            cout << "Ingrese el numero " << i << " de subformula a anexar: " << endl;
                            cin >> numero;
                            nuevo->add(v[numero]);
                        }
                        v.push_back(nuevo);
                    }break;
                case 3: {
                        cout << "Ingrese el guardado que desea calcular:" << endl;
                        int numero;
                        cin >> numero;
                        c = v[numero];
                    }break;
            }
            cout << "Se ingreso " << c->toString() << endl;
            cout << "Resultado " << c->realizar();
    }while (opc == 0);


    return 1;
}

#endif // MAIN_CPP
