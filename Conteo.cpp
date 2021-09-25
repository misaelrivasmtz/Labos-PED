/* 8) Elabore una función que, dado un número entero que se obtiene desde teclado, realice
un conteo como el siguiente:
Suponiendo que el valor ingresado es 3:
1
2
3
2
1
*/

#include<iostream>
void conteo(int);
void conteoInvAux(int);

using namespace std;

int main(void){ 
    int numero;
    cout<<"Ingrese un numero para realizar el conteo: ";
    cin>>numero;
    conteo(numero);
    conteoInvAux(numero-1);
    return 0;
}

void conteo(int numero){
    if(numero == 1){
        cout<<numero<<endl;
    }
    else{
        conteo(numero-1);
        cout<<numero<<endl;
    }
}

void conteoInvAux(int numero){
    if(numero == 1){
        cout<<numero<<endl;
    }
    else{
        cout<<numero<<endl;
        conteoInvAux(numero-1);
    }
}