#include <iostream>
#include <string.h>
#include <time.h>
#include <math.h>

using namespace std;

class Vigenere
{
    private:
        
        string clave;

    public:
        string alfabeto = "abcdefghijklmnopqrstuvwxyz0123456789 ";
        Vigenere(){}
        Vigenere(int);
        string Incriptado(string);
        string Desincriptado(string,string);
        string Obtenerclave();
        
        int modulo(int , int);
};


