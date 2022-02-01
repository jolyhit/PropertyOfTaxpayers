#include "Appartment.h"
#include "Car.h"
#include "CountryHouse.h"
#include <iostream>
using namespace std;

int main()
{
    cout << "Taxes:\n\n";
    Property** list = new Property * [7];
    list[0] = new Appartment(321423.525f);
    list[1] = new Appartment(235235.45673f);
    list[2] = new Appartment(562414.6345f);
    list[3] = new Car(8356.7534f);
    list[4] = new Car(6321.437f);
    list[5] = new CountryHouse(51273.13f);
    list[5] = new CountryHouse(83127.25f);
    for (size_t i = 0; i < sizeof list - 1; i++)
        list[i]->tax();

    for (size_t i = 0; i < sizeof list - 1; i++)
        delete list[i];
    delete[] list;
}
