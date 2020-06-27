    #include <iostream>
    #include <string>
    using namespace std;

    double media (int a[]){ //funcion para obtener la media de la clase
    double suma;
    double  media;
    suma = 0;
    for(int i = 0; i < 25; i++)
    suma = suma + a[i];
    media= suma/25;

    return media;
    }


    void comparacion(int a[], double media ) { // funcion para comparar las estaturas 
                                                // con la media de la clase 
        int menores=0, mayores=0;

        for (int i=0; i<25; i++){          //contador para que recorra el arreglo   
            if (a[i] < media){             // condiciion al encontrar mayores y menores a la media

                menores ++;

            }
            else if (a[i] > media ){
                mayores ++;
            }  
        }
    cout << "Hay "<< menores<< " abajo de la media."<< endl;// impresion de cantidad de menores y
    cout << "Hay "<< mayores<< " arriba de la media."<< endl;// mayores a la media
    
        
    }


    int main (void) { // funcion main
    int cm,  i, a[25];
    cout << "CALCULO DE PROMEDIO DE UNA CLASE"<< endl;// titulo de el programa
    cout << "Ingrese la estatura de los alumnos en centimetros"<< endl;
    for(int i = 0; i < 25; i++){
    cout<< i+1<< " = ";
    cin >> a[i]; // se ingresan las 25 edades.
    }
    cout << "La media es: "<< media(a)<< endl;// se llama a la funcion para encontrar la media

    comparacion(a, media(a)); // se llama a la funcion que compara los tamaños

        return 0; 
    }


