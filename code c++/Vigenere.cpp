#include "Vigenere.h"

Vigenere::Vigenere(int len){ 
    srand(time(NULL));
    for(int i=0; i<len; i++){
        int numrand=modulo(rand(),alfabeto.size());
        clave+=alfabeto.at(numrand);
        
    }
    cout<<"La clave :"<<clave<<endl;
}

int Vigenere::modulo(int var, int modulo){
    int residuo;
    if(var<0){residuo=modulo*((-1*var/modulo)+1)+var;}
    else{residuo= var-((var/modulo)*modulo);}
    return residuo;
}

string Vigenere::Incriptado(string mensaje){
    int posicion; string cifrado;
    for(int i=0; i < clave.size() ;i++){
        posicion=alfabeto.find(mensaje.at(i));
        posicion+=alfabeto.find(clave.at(i));
        posicion=modulo(posicion,alfabeto.size());
        cifrado+=alfabeto.at(posicion);
    }
    return cifrado;
}

string Vigenere::Desincriptado(string cifrado,string clave_){
    string desinc; int posci;
    for(int i=0;i<cifrado.size();i++){
        
        posci=alfabeto.find(cifrado.at(i));
        posci-=alfabeto.find(clave_.at(i));
        posci=modulo(posci,alfabeto.size());
        desinc+=alfabeto.at(posci);
    }
    return desinc;
}
string Vigenere::Obtenerclave(){return clave;}