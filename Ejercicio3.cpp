#include <iostream>
#include <string>

using namespace std;

void llenarfuncion(int notas);
void notafinal(int notas, int estudiantes);
    
void llenarfuncion(int notas[][5], int estudiantes){

  for (int i=0; i<estudiantes;i++){
      for (int j=0; j< 5;j++){
          cout << "Digite las 5 notas por estudiante sin decimales. Estudiante "<< i+1 <<" Nota "<< j+1 << " : "<< endl;
          cin >> notas[i][j];

      }
  }

}
void notafinal (int notas[][5], int estudiantes){
    float promedio;
    
  for (int i=0; i<estudiantes;i++){
      promedio =0;
      for (int j=0; j< 5;j++){
promedio += (notas[i][j])*0.20;

      }
      if(promedio >= 60)
  cout << "El promedio del estudiante "<<i+1<< " es:" <<promedio<< " Por lo que queda aprobado" << endl;
      else 
  cout << "El promedio del estudiante "<<i+1<< " es:" <<promedio<< " Por lo que queda reprobado" << endl;
      
  }


}

int main (void){
  int estudiantes;
  cout << "CALCULO DE NOTA FINAL POR ESTUDIANTE"<< endl;
  cout << "Ingrese el numero de estudiantes"<< endl;
  cin >> estudiantes;
  int notas[estudiantes][5], promedio, pasar, i;
  llenarfuncion(notas, estudiantes);
  notafinal(notas, estudiantes);
  return 0;
}