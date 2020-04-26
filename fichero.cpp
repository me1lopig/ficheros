// fichero.cpp 
// ejemplo de archivo de texto
//
//

#include <iostream>
#include<fstream>
#include<string>

using namespace std;

// prototipado
void escribir();



int main()
{

    escribir(); // llamada a la funcion de creacion de archivos

    cout << "Pulsa una tecla " << endl;
    cin.get();

    return 0;

}

void escribir()
{
    ofstream archivo; // creamos el objeto archivo

    string nombreArchivo,textoArchivo;

    cout << "Nombre del archivo: ";
    getline(cin, nombreArchivo);
        
    archivo.open(nombreArchivo.c_str(), ios::out); // abrimos el achivo con la ubicacion de archivo se hace falta

    // si el archivo falla en alguna operacion
    if (archivo.fail())
    {
        cout << "No se pudo crear al archivo";
        exit(1); // salida del programa

    }

    // incluimos texto en el archivo de texto
    archivo << "Hello word" << endl;
    archivo << "Hola mundo"<<endl;

    // texto a colocar por el usuario
    cout << "Texto a introducir en el archivo ";
    getline(cin, textoArchivo);

    // incluimos texto en el archivo de texto definido por el usuario
    archivo << textoArchivo << endl;
    archivo << "Hola mundo otra vez";


    archivo.close(); // cerramos el archivo

}