#include <iostream> // llamar a libreria

using namespace std;

int main (){

int num1, num2; //variables de numeros

cout << "Digite el primer numero: " <<endl; //se pide el primer numero
cin >> num1; //se imprime el primer numero

cout << "Digite el primer numero: " <<endl;//se pide el segundo numero
cin >> num2;//se imprime el segundo numero

if (num1 > num2){ //si el primer numero es mayor que el segundo
    cout << "El numero " << num1 << " es mayor que " << num2 << endl;//se imprime mensaje
}
else if ( num1 < num2){ //si el segundo numero es mayor que el primero
cout << "El numero " << num2 << " es mayor que " << num1 << endl;//se imprime mensaje
}
else { // si no los numeros son iguales
    cout << "Los numeros son iguales" << endl; //se imprime mensaje
}

return 0;
}


