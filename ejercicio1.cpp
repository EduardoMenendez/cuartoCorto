#include<iostream>
#include <string> 

using namespace std;

char* convertirStringAChar(int* size, string palabra){
    *size = palabra.size();
    char * array = new char[*size];

    for(size_t i = 0; i < *size; i++){
        array[i] = palabra[i];
    }
    return array;
}

char* encriptarPalabra(int size, char* palabra){
    for (size_t i = 0; i < size; i++)
    {
        char letra = palabra[i];
        if('m' == letra || 'M' == letra ){
            palabra[i] = '0';
        }else if('u' == letra || 'U' == letra){
            palabra[i] = '1';
        }else if('r' == letra || 'R' == letra){
            palabra[i] = '2';
        }else if('c' == letra || 'C' == letra){
            palabra[i] = '3';
        }else if('i' == letra || 'I' == letra){
            palabra[i] = '4';
        }else if('e' == letra || 'E' == letra){
            palabra[i] = '5';
        }else if('l' == letra || 'L' == letra){
            palabra[i] = '6';
        }else if('a' == letra || 'A' == letra){
            palabra[i] = '7';
        }else if('g' == letra || 'G' == letra){
            palabra[i] = '8';
        }else if('o' == letra || 'O' == letra){
            palabra[i] = '9';
        }
    }

    return palabra;
    
}

int main(){
    //declaraion de variables
    string palabra;
    int size;
    char* array;
    //Mensaje de bienvenida
    cout << "Programa para encriptar una palabra con la clave murcielago" << endl;
    cout << "----------------------------------------------------------------------\n" << endl;

    //Recopilacion de datos 
    cout << "Ingrese su palabra" << endl;
    getline(cin, palabra);

    //Llamada a funcion para convertir string a arreglo de char 
    array = convertirStringAChar(&size, palabra);
    //Llamada a funcion para encriptar la palabra
    array = encriptarPalabra(size, array);
    //Impresion de resultados
    for (size_t i = 0; i < size; i++)
    {
        cout << array[i];
    }
    

}