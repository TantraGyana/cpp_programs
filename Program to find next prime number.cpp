#include <iostream>   

using namespace std;  

int main() 
{  
    long i, j, n, flag;  
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
    i = n + 1;  
    for (; i >= n; i++) 
    {  
        flag = 0;  
        for (j = 2; j <= i; j++) 
        {  
            if (i % j == 0) 
            {  
                flag++;  
            }  
        }  
        if (flag == 1) 
            break;  
    }  
    cout << "\n" << i << " is the next Prime Number.";  
    return 0;  
} 
