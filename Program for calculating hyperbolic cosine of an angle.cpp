#include <iostream>  
#include <math.h>

#define PI 3.14159265;  

using namespace std; 

int main() 
{  
    float angle, ans;  
    cout << "Enter Value of Angle (in degrees): ";  
    cin >> angle;  
    ans = cosh(angle * PI / 180);  
    cout<<"\n"<<"cosh"<<angle<<" = "<<ans;  
    cout<<"\n Hyperbolic Cosine of "<<angle<<" degree is: "<<ans;
    return 0;  
}
