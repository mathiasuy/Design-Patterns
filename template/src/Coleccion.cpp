#include "Coleccion.h"

    template <typename K, typename T>
    void Util::Coleccion<K,T>::add(T t){
        this->_map[t.getID()] = t;
    }

    template <typename K, typename T>
    void Util::Coleccion<K,T>::start(){
        this->i = this->_map.begin();
    };

    template <typename K, typename T>
    bool Util::Coleccion<K,T>::end(){
        return this->i != this->_map.end();
    };

    template <typename K, typename T>
    T& Util::Coleccion<K,T>::getElement(){
        return this->i->second;
    };

    template <typename K, typename T>
    void Util::Coleccion<K,T>::next(){
        this->i++;
    };

    template <typename K, typename T>
    ostream& operator<<(ostream& os, Util::Coleccion<K,T>& dt)
    {
        dt.start();
        string st = "";
        while (dt.end()){
            st += dt.getElement().toString();
            dt.next();
        }
        os << st;
        return os;
    }


