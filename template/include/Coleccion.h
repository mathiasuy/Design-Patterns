#ifndef COLECCION_H
#define COLECCION_H
#include <map>
#include "ObjetoB.h"
#include "ObjetoA.h"

using namespace std;

namespace Util{
    template <typename K, typename T>
    class Coleccion{
        private:
            map<K,T> _map;
            typename map<K,T>::iterator i;
        public:
            void add(T t);
            void start();
            bool end();
            T& getElement();
            T& operator[] (K x){
                return this->_map[x];
            };
            void next();
    };
}
/*  Otra forma de hacerlo:
    template class Util::Coleccion<string,ObjetoA>;
    template class Util::Coleccion<int,ObjetoB>;
*/

#endif // COLECCION_H


