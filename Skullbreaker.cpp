#include <iostream>
#include <string>

using namespace std;

int main() {
    string command[] = {"salir"};
    while (true) {
        string comando;
        cout<<"Este el el primer mensaje del SkullBreaker"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"ingrese un comando:"<<endl;
        cin>>comando;
        if (comando == "salir") {
            return 0;
        }
    }
}