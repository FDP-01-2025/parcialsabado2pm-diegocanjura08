#include <iostream> //llamar a biblioteca

using namespace std;

int main (){

int i, num[15], mayor, menor; //variables a usar y arreglo de 15 espacios

cout << "Numero mayor y menor" << endl << endl;//se imprime mensaje
for (i=0; i <15; i++){ //ciclo for que pida los 15 numeros
cout << "Digite el numero " << i+1 << endl;
cin >> num [i]; //se digitan los 15 numeros en el arreglo
}

mayor= num[0];
menor= num[0];

for (i=0; i <15; i++){
if (num[i] > mayor){
mayor= num [i];
}
else if (num[i] < menor){
menor= num [i];
}
}
cout << "El numero mayor es: " << mayor <<endl;
cout << "El numero menor es: " << menor <<endl;
return 0;
}


