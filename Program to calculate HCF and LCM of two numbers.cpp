#include <iostream> 

using namespace std;
  
int main() 
{  
    int a, b, c;  
    cout << "Enter First No. : ";  
    cin >> a;  
    cout << "Enter Second No. : ";  
    cin >> b;  
    int x = a;  
    int y = b;  
    c = a * b;  
    while (a != b) 
    {  
        if (a > b) 
            a = a - b;  
        else 
            b = b - a;  
    }  
    cout << "\n HCF of " << x << " and " << y << " = " << a; 
    cout << "\n LCM of " << x << " and " << y << " = " << c / a;
    return 0;  
}  
