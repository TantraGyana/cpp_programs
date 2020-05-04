#include <iostream> 
#include <math.h> 

using namespace std;  

int main() 
{  
    double n;  
    int root;  
    cout << "Enter the Number of which you want the nth Root: "; 
    cin >> n;  
    cout << "Enter the Value for nth root: ";  
    cin >> root;  
    double res;  
    res = pow(n, (1.0 / root));  
    cout << "\n" << root << "th Root of " << n << " is: " << res;
    return 0;  
}  
