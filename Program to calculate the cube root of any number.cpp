#include <iostream> 
#include <math.h> 

using namespace std;  

int main() 
{  
    double n;  
    cout <<"Enter the Number of which you want the Cube Root: "; 
    cin >> n;  
    double res;  
    res = pow(n, (1.0 / 3));  
    cout << "\n" << "Cube Root of " << n << " is: " << res;  
    return 0;  
}  
