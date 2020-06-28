#include<iostream>

using namespace std;

void media(int alumnos[]){
    double promedio = 0;
    int arriba = 0, abajo = 0, media = 0;
    for (size_t i = 0; i < 25; i++){
        promedio += alumnos[i];
    }
    promedio = promedio/25;
    
    for (size_t i = 0; i < 25; i++){
        if(alumnos[i] > promedio){
            arriba++;
        }else if(alumnos[i] < promedio){
            abajo++;
        }else if(alumnos[i] == promedio){
            media++;
        }
    }

    cout << "Resultados: \n media: " << promedio << "\n Estudiantes sobre la media: " << arriba << "\n Estudiantes bajo la media: " <<
    abajo << "\n Estudiantes en la media: " << media << endl;

    system("PAUSE()");
}

int main(){
    int alumnos[24] ;
    

    cout << "Programa para obtener la media de altura de 25 alumnos" << endl;
    cout << "-------------------------------------------------------------\n" << endl;

    for (size_t i = 0; i < 25; i++)
    {   
        double altura;
        cout << "Ingrese la altura del estudiante #"<<(i+1)<< " en centimetros " <<endl;
        cin >> altura;
        alumnos[i] = altura;
    }
    
    media(alumnos);

}