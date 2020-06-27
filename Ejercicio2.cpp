    #include <iostream>
    #include <string>
    using namespace std;

    // int media (int a[]);
    // void comparacion (int a, double media);

    double media (int a[]){
    double suma;
    double  media;
    suma = 0;
    for(int i = 0; i < 25; i++)
    suma = suma + a[i];
    media= suma/25;

    return media;
    }


    void comparacion(int a[], double media ) {
        int menores=0, mayores=0;

        for (int i=0; i<25; i++){
            if (a[i] < media){

                menores ++;

            }
            else if (a[i] > media ){
                mayores ++;
            }  
        }
    cout << "Hay "<< menores<< " abajo de la media."<< endl;
    cout << "Hay "<< mayores<< " arriba de la media."<< endl;
    
        
    }


    int main (void) {
    int cm,  i, a[25];
    cout << "CALCULO DE PROMEDIO DE UNA CLASE"<< endl;
    cout << "Ingrese la estatura de los alumnos en centimetros"<< endl;
    for(int i = 0; i < 25; i++)
    cin >> a[i]; 
    cout << "La media es: "<< media(a)<< endl;

    comparacion(a, media(a)); 

        return 0; 
    }


