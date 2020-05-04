#include <iostream>
 
using namespace std;  
  
int main() 
{  
    int num, sum, rem, n, check;  
    cout << "Enter Any Number: ";  
    cin >> num;  
    check = num;  
    sum = 0;  
    while (num > 0) 
    {  
        rem = num % 10;  
        n = rem * rem * rem;  
        sum = sum + n;  
        num = num / 10;  
    }  
    if (sum == check) 
    {  
        cout << check << " is an Armstrong Number.";  
    } 
    else 
    {  
        cout << check << " is not an Armstrong Number.";  
    }  
    return 0;  
} 
