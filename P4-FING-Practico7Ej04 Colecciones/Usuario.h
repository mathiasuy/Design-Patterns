/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Usuario.h
 * Author: user6
 *
 * Created on 1 de junio de 2018, 2:06
 */

#ifndef USUARIO_H
#define USUARIO_H
#include <string>
using namespace std;

class Usuario {
private:
    string nick;
public:
    Usuario();
    Usuario(string);
    Usuario(const Usuario& orig);
    virtual ~Usuario();
};

#endif /* USUARIO_H */

