#include <iostream>
#include <string>
#include "Skull_breaker_graphics.h"
#include "skull_breaker_kernel.h"

using namespace std;

int main() {
    cout<<"Este el el primer mensaje del SkullBreaker"<<endl;
    string command[] = {"salir","editar"};
    while (true) {
        string comando;
        cout<<"------------------------------------------"<<endl;
        cout<<"ingrese un comando:"<<endl;
        cin>>comando;
        if (comando == "salir") {
            return 0;
        }
        else if (comando == "editar") {
            cout<<"Bienvenido a SkullBreaker"<<endl;
        }
        else {
            cout<<"------------------------------------------------------------"<<endl;
            cout<<"el comando "<<comando<<" no existe o no ha sido implementado"<<endl;
            cout<<"------------------------------------------------------------"<<endl;
        }
    }
}