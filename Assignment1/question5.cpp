#include <iostream>
#include <math.h>


using namespace std;

int main()
{
    int tempC = 100;
    int tempF;
    
    tempF = 32 + (9/5)*tempC;
    
    while (tempC != tempF){
        --tempC;
        tempF = 32 + (9/5)*tempC;
    }


    cout << "The temperature in Celcius is " << tempC << endl;
    cout << " The temperature in Fahrenheit is " << tempF << endl;

    return 0;
}