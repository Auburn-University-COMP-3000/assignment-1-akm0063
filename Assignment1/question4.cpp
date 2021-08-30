#include <iostream>
#include <math.h>


using namespace std;

int main()
{
    double weight;
    double radius;
    const double spWeight = 62.4;
    
    cout << "Input weight of the sphere in pounds. ";
    cin >> weight;

    cout << "Input radius of the sphere in feet. ";
    cin >> radius;
       
    double volume = (4/3)*(3.14)*pow(radius,3); 
    double bForce = volume * spWeight;

    if (bForce >= weight) {
        cout << "The sphere will float in water. ";
    } 
    else {
        cout << "The sphere will sink in water. ";
    }

    return 0;
}