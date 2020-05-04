#include <iostream>

using namespace std;   

int main() 
{      
    float tF, tC;      
    cout<<"Enter the temperature in degree Fahrenheit : "; 
    cin >> tF;      
    tC = (tF - 32) * (5.0 / 9.0);      
    cout<<"Temperature in degree Celsius is: "<<tC<<endl;
    return 0;  
}  
