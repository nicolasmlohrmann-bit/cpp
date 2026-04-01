#include <iostream>

namespace matematicas {
    int suma(int a, int b) {
        return a + b;
    }
}

int main() {
    using namespace std;

    int a = 1;
    int b = 1;
    int suma = a + b; 
    int c = 3;
    int d = 2;
    int resta = c - d;

    int f = 3;
    int g = 2;
    int producto = f * g;

    int h = 15;
    int i = 3;
    int division = h / i;

    cout<<"La suma es: "<<suma<<std::endl;
    cout<<"La resta es: "<<resta<<std::endl;
    cout<<"El producto es: "<<producto<<std::endl;
    cout<<"La división es: "<<division<<std::endl;

    return 0;
}
