#include <iostream>
#include <string>
using namespace std;
void codifica(string); 

void codifica(string arr){
 int  tam = 0; 
 //tam=sizeof (arr)/ sizeof ( arr [ 0 ]);  
tam = arr.length();
char m='m', u='u', r='r', c='c', i='i', e='e', l='l', a='a', g='g', o='o';
//cout << tam;
for(int i = 0; i < tam; i++){

if (arr[i] == m){
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
    cout <<arr[i];
}
}
} 

    











int main (void){
string palabra;
int tam;
cout << "CODIFICADOR DE PALABRAS"<< endl;
 
cout << "Ingrese el texto que desea codificar en clave murcielago"<< endl;
char arr[1000];
cin.getline(arr, 1000);
codifica(arr);
//cout<< arr;
}
