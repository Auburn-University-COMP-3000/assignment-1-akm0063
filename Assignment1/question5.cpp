#include <iostream>


using namespace std;

int main()
{
    int tempC = 100;
    int tempF;

    tempF = (1.8*tempC) + 32;
    
    while (tempC != tempF){
        --tempC;
        tempF = 32 + (1.8*tempC);
        }
    
    cout << "The temperature in Celcius is " << tempC << endl;
    cout << "The temperature in Fahrenheit is " << tempF << endl;
    
    
    return 0;
}