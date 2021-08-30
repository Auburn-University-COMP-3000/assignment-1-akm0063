#include <iostream>
#include <math.h>


using namespace std;

int main()
{
    int time;
    const int acc = 32;
    
    cout << "Enter a time in seconds ";
    cin >> time;
   
    int distance = (acc/2)*(time*time); 

    cout << "An object in freefall for " << time << " seconds will fall " << distance << " feet. ";

    return 0;
}