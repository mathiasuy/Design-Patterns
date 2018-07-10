#include "include/Context.h"
#include <iostream>
#include <string>
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


using namespace std;

int main(){
    Context* c = new Context();
    int opc;
    do{
        try{
            clr();
            cout << "Reloj: " << c->getTime().toString() << endl;
            cout << "1 - Cambiar estado (" << c->getNamberState() << ")" << endl;
            cout << "2 - Aumentar hora" << endl;
            cout << "3 - Aumentar minutos" << endl;
            cout << "4 - Reset" << endl;
            cout << "0 - Salir" << endl;
            cin >> opc;

            switch(opc){
                case 1 : c->changeState(); break;
                case 2 : c->incrementHours(); break;
                case 3 : c->incrementMinutes(); break;
                case 4 : c->reset(); break;
            }
        }catch(std::runtime_error &e){
            cout << e.what();
            readKey();
        }
    }while(opc!=0);


 return 1;
}
