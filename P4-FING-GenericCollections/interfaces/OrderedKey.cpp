/* 
 * File:   OrderedKey.cpp
 * Author: igui
 * 
 * Created on 26 de mayo de 2012, 10:26 AM
 */

#include <stdexcept>

#include "OrderedKey.h"

bool OrderedKey::equals(IKey* k) const
{
    OrderedKey *key = dynamic_cast<OrderedKey *>(k);
    if(key == NULL)
        throw std::invalid_argument("Se esperaba un OrderedKey");
    return compare(key) == EQUAL;
}

OrderedKey::~OrderedKey() {
}

