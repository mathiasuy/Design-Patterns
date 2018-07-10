#ifndef PUERTO_H
#define PUERTO_H


class Puerto
{
    private:
        int numero;
    public:
        int getNumero();
        void setNumero(int);

        Puerto(int numero);
        virtual ~Puerto();
};

#endif // PUERTO_H
