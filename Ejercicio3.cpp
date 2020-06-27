#include <iostream>
#include <string>

using namespace std;

void llenarfuncion(int notas);// se declaran las funciones
void notafinal(int notas, int estudiantes);
    
void llenarfuncion(int notas[][5], int estudiantes){ //funcion para llenar la matriz 

  for (int i=0; i<estudiantes;i++){//se recorren columnas
      for (int j=0; j< 5;j++){//se recorre las 5 filas para 5 notas
          cout << "Digite las 5 notas por estudiante del 1 al 100. Estudiante "<< i+1 <<" Nota "<< j+1 << " : "<< endl;
          cin >> notas[i][j];//se ingresan 5 notas por estudiante

      }
  }

}// el numero de estudiante es la fila, y las columnas son las notas

void notafinal (int notas[][5], int estudiantes){// funcion para calcular el promedio por estudiante
    float promedio;                              //y mostrar si aprobó o no
    
  for (int i=0; i<estudiantes;i++){  
      promedio =0;
      for (int j=0; j< 5;j++){
promedio += (notas[i][j])*0.20;// se suma por fila y se multiplica por 0.20

      }
      if(promedio >= 60)// condicion para moestrar que aprobo
  cout << "El promedio del estudiante "<<i+1<< " es:" <<promedio<< " Por lo que queda aprobado" << endl;
      else //se muestra que el estudiante reprobo
  cout << "El promedio del estudiante "<<i+1<< " es:" <<promedio<< " Por lo que queda reprobado" << endl;
    
  }


}

int main (void){//funcion main
  int estudiantes;
  cout << "CALCULO DE NOTA FINAL POR ESTUDIANTE"<< endl;// titulo del programa
  cout << "Ingrese el numero de estudiantes"<< endl;
  cin >> estudiantes; // se ingresa el numero de estudiantes a evaluar
  int notas[estudiantes][5], promedio, pasar, i;// se declara la matriz
  llenarfuncion(notas, estudiantes);// se llama a la funcion para ingresar notas
  notafinal(notas, estudiantes); //se llama a la funcion para mostrar promedios y si aprobo o no
  return 0;
}