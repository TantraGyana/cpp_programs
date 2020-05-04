#include <iostream> 

using namespace std;  

int main() 
{  
    float m, ans = 1;  
    int n;  
    cout << "Enter Value for m (base): ";  
    cin >> m;  
    cout << "Enter Value for n (power): ";  
    cin >> n;  
    for (int k = 1; k <= n; k++) 
    {  
        ans = ans * m;  
    }  
    cout << "\n" << m << "^" << n << " = " << ans;  
    cout << "\n" << m << " to the power " << n << " is: " << ans;
    return 0;  
}
