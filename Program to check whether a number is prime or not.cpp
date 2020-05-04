#include <iostream> 

using namespace std;  

int main() 
{  
    int i, n, flag;  
    flag = 0;  
    cout << "Enter Any Number: ";  
    cin >> n;  
    for (i = 2; i <= n; i++) 
    {  
        if (n % i == 0) 
        {  
            flag++;  
        }  
    }  
    if (flag == 1) 
    {  
        cout << "\n" << n << " is a Prime Number.";  
    } 
    else 
    {  
        cout << "\n" << n << " is not a Prime Number.";  
    }  
    return 0;  
}
