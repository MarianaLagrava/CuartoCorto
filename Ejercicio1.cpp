#include <iostream>
#include <string>
using namespace std;
void codifica(string); //declaracion de funcion

void codifica(string arr){ //funcion para codificar a numeros la clave murcielago
 int  tam = 0; 
  
tam = arr.length();
char m='m', u='u', r='r', c='c', i='i', e='e', l='l', a='a', g='g', o='o';

for(int i = 0; i < tam; i++){// se recorre el array donde se guardo la palabra 

if (arr[i] == m){// condicion para que al aparecer la letra se muestre el numero correspondiente
    cout << "0"; 
} 
else if (arr[i] == u){
    cout << "1";
}
else if (arr[i] == r){
    cout << "2";
}
else if(arr[i] == c){
    cout << "3";
}
else if (arr[i] == i){
    cout << "4";
}
else if (arr[i] == e){
    cout << "5";
}
else if (arr[i] == l){
    cout << "6";
}
else if (arr[i] == a){
    cout << "7";
}
else if (arr[i] == g){
    cout << "8";
}
else if (arr[i] == o){
    cout << "9";
}
else{
    cout <<arr[i];// si ninguna letra esta en clave murcielago se mostrara como estaba en el arr
}
}
} 

int main (void){//funcion main
int tam;
cout << "CODIFICADOR DE PALABRAS"<< endl;//titulo del programa
 
cout << "Ingrese el texto que desea codificar en clave murcielago"<< endl;
char arr[1000];// declaracion del array donde se guardara el texto
cin.getline(arr, 1000);// funcion para recibir por teclado texto e introducirlo en el array
codifica(arr);//se llama a la funcion codificacion

}
