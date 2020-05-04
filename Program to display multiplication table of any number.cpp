#include <iostream> 

using namespace std;  

int main() 
{  
    float n, m;  
    cout << "Enter the Number of which you want the Multiplication Table: ";  
    cin >> n;  
    cout << "Enter End Limit: ";  
    cin >> m;  
    for (int j = 1; j <= m; j++) 
    {  
        cout << n << " x " << j << " = " << n * j << endl;  
    }  
    return 0;  
}  
