#include <iostream>

int main()
{
    float x; // Declaracion  
    x = 5.5; // Asignacion 
                    // int x = 5;
    float y;// <-- Recerva la variable para usarse, por ejemplo la "y"
    y = 4.5;// <-- le asigna un valor a esa variable    
    int z;
    z = x + y;// <-- se suman xd

    int f = 2;
    int g = 2;
    int n = f + g;

    int mda = 8;
    int mda2 = 8;
    int años = mda + mda2;



    // Float o double para los numero con decimal
    double precio = 2.3;
    double peso = 85.100;
    double temperatura = 32.2;
    float precio1 = 2.4;

    // Char, almacena un str, por ejemplo 'A'
    char nota = 'A';
    char Mala_Nota = 'C';

    // Booleanos (bool) true o false
    bool Estoy_Vivo = true;
    bool Estoy_Muerto = false;
    bool Luz_Encendida = true;

    // Strings (Texto)
    std::string Nombre = "Nicolas";
    std::string Apellido = "Lohrmann";

    std::cout<<"años: ";
    std::cout<<años<<std::endl;
    std::cout<<"peso: ";
    std::cout<<peso<<std::endl;
    std::cout<<"La luz esta encendida: ";
    std::cout<<Luz_Encendida<<std::endl;     // <------- Esas 5 lineas de stds estan al pedo 
    std::cout<<"Estas muerto: ";
    std::cout<<Estoy_Muerto<<std::endl;
    std::cout<<"Apellido: ";
    std::cout<<Apellido<<std::endl;

    // Formas correcta

    std::cout<<"Nombre: "<<Nombre<<std::endl;    // <----- Forma correcta


    return 0;   
}
