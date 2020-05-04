#include <iostream>    

using namespace std;  

int main() 
{  
    int n;  
    long fact = 1;  
    cout << "Enter the Number of which you want the Factorial: ";
    cin >> n;  
    for (int i = 1; i <= n; i++) 
    {  
        fact = fact * i;  
    }  
    cout << "\n" << n << "!" << " = " << fact;  
    cout << "\nFactorial of " << n << " is: " << fact;  
    return 0;  
}
