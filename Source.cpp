#include <iostream>
float AH = 0; //ahorro por mes
int M = 1; //mes
float CA = 0; //cantidad total
void AhorradoPorMes() 
{
    while (M < 13) {
        std::cout << "\nCuanto vas ahorrar este mes? " << M << "\n";
        std::cin >> AH;
        CA = CA + AH;
        std::cout << "El total ahorrado hasta ahorita es " << CA;
        M++;

    }
    system("CLS");
    std::cout << "Ahorrado total: " << CA;
    CA = CA + AH;
    system("Pause");
    system("CLS");
}


void CarrosPits() 
{
    int carroAmarillo = 150;//150 = km
    int carroRojo = 70; //70 = km
    while (carroRojo != carroAmarillo)
    {
        carroAmarillo--;
        carroRojo++;
        std::cout << "Carro Amarillo: " << carroAmarillo << "KM\n";
        std::cout << "Carro Rojo: " << carroRojo << "KM\n";
    }
    std::cout << "\n\nLos dos han pasado por un lado del otro!"; //done
}