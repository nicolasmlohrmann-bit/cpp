#include <iostream>


int main() {
    using namespace std;
    
    int nume1 = 1, denomi1 = 2;
    int nume2 = 2, denomi2 = 3;

    int resu_N =  (nume1 * denomi2) + (nume2 * denomi1);
    int resu_D = denomi1 * denomi2;

    int nume3 = 2, denomi3 = 2;
    int nume4 = 2, denomi4 = 3;

    int resu_N1 =  (nume3 * denomi4) - (nume4 * denomi3);
    int resu_D1 = denomi3 * denomi4;

    cout<<"El resultado de la suma de las fracciones es: "<<resu_N<<"/"<<resu_D<<std::endl;
    cout<<"El resultado de la resta de las fracciones es: "<<resu_N1<<"/"<<resu_D1<<std::endl;


    return 0;
}
