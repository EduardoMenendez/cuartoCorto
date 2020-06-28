#include<iostream>
#include<vector>

using namespace std;

vector<vector<double>> llenarMatriz(){
    int cantidadEstudiantes;
    vector<vector<double>> estudiantes;
    cout << "Ingrese cuantos estudiantes seran evaluados" << endl;
    cin >> cantidadEstudiantes;
    for (size_t i = 0; i < cantidadEstudiantes; i++)
    {
        vector<double> notas;
       for (size_t n = 0; n < 5; n++)
       {
           double nota;
           cout << "Ingrese la nota de la materia "<< (n+1) <<" de el estudiante #" << (i+1) << endl;
           do{
                cin >> nota;
                if(nota > 10 || nota < 0){
                    cout << "La nota  ingresada es invalida, ingrese una nota entre el 0 y el 10" << endl;
                }
           }while(nota > 10 || nota < 0);
           notas.push_back(nota);
       }
       cout << endl << endl;
       estudiantes.push_back(notas);
    }

    return estudiantes;
    
}

void mostrarResultados(vector<vector<double>> estudiantes){
    for (size_t i = 0; i < estudiantes.size(); i++)
    {
        double notaFinal = estudiantes[i][0]+estudiantes[i][1]+estudiantes[i][2]+estudiantes[i][3]+estudiantes[i][4];
        notaFinal /= 5;
        if(notaFinal < 6){
            cout << "El estudiante #"<<(i+1)<<" reprobo con "<< notaFinal << endl;
        }else{
            cout << "El estudiante #"<<(i+1)<<" aprobo con "<< notaFinal << endl;
        }
    }
    
}

int main(){
    cout << "Programa para obtener promedios de n alumnos" << endl;
    cout << "----------------------------------------------------------------\n" << endl;

    vector<vector<double>> estudiantes = llenarMatriz();
    mostrarResultados(estudiantes);
}