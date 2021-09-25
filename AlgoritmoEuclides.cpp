
/*1) Dados dos números enteros llamados mayor y menor, obtener el máximo común divisor
(mcd) de ambos por el método de Euclides. Para resolver este problema se procede así:
a) se realiza la división entera del mayor entre el menor, b) si el residuo es cero, el mcd
está en la variable llamada menor, despliega el resultado y termina el programa, c) pero
si el residuo no es cero, el valor de menor pasa a mayor y el valor de residuo pasa a
menor, d) repetir el paso a.
*/
#include<iostream>

using namespace std;
int mcd(int, int);

int main(void){
    int mayor, menor;
    cout<<"Maximo comun divisor(mcd): Metodo de Euclides"<<endl;
    cout<<"Ingrese el numero menor: ";
    cin>>menor;
    cout<<"Ingrese el numero mayor: ";
    cin>>mayor;
    
    cout<<"El mcd de "<<menor<<" y "<<mayor<<" es: "<<mcd(menor, mayor)<<endl;
    return 0;
}

int mcd(int menor, int mayor){
    int residuo = mayor%menor;
    if(residuo == 0){
        return menor;
    }
    else{
        mayor = menor;
        menor = residuo;
        return mcd(menor, mayor);
    }
}