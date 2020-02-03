#include "Vigenere.h"
#include <iostream>
#include <string.h>
using namespace std;


int main(){
    bool pause=true;
    while(pause){
        string mensaje;
        cout<<endl;
        cout<<"I para Incriptar"<<endl;
        cout<<"D para Desincriptar"<<endl;
        cout<<"S para Salir"<<endl;
        cout<<endl;
        getline(cin,mensaje);
        if(mensaje=="I" || mensaje == "i"){
            cout<<"Escriba el mensaje para Incriptar"<<endl;
            getline(cin,mensaje);
            //int len=mensaje.size();
            Vigenere men(mensaje.size());
            string cifrado=men.Incriptado(mensaje);
            cout<<"El Incriptado :"<<cifrado<<endl;

        }
        if(mensaje=="D" || mensaje == "d"){
            cout<<"Escribe la clave"<<endl;
            string clave;
            getline(cin,clave);
            cout<<"Escribe el cifrado"<<endl;
            getline(cin,mensaje);
            Vigenere men;
            cout<<men.Desincriptado(mensaje,clave);

        }
        if(mensaje=="S"|| mensaje == "s"){break;}
    }
    return 0;
}
