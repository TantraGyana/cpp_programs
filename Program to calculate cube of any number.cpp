#include <iostream> 

using namespace std;  

int main() 
{  
    double n, ans;  
    cout << "Enter the Number of which you want the Cube: ";  
    cin >> n;  
    ans = n * n * n;  
    cout << "\n" << n << "^3" << " = " << ans;  
    cout << "\n" << "Cube of " << n << " is: " << ans;  
    return 0;  
}  
