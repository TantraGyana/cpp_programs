#include <iostream>  
#include <math.h>

#define PI 3.14159265;  

using namespace std; 

int main() 
{  
    float angle, ans;  
    cout << "Enter Value of Angle (in degrees): ";  
    cin >> angle;  
    ans = cos(angle * PI / 180);  
    cout<<"\n"<<"cos "<<angle<<" = "<<ans;  
    cout<<"\n Cosine of "<<angle<<" degree is: "<<ans;
    return 0;  
}  
