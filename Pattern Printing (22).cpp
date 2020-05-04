/*
   
    *
   * *
  * * *
 * * * * 
* * * * *
 * * * *
  * * *
   * *
    *

*/

#include <iostream>  
  
using namespace std;  
  
int main()  
{  
    int i, j, k, space;  
    space = 0;  
    for(i = 1; i <= 5; i++)  
    {  
        for(k = space; k < 4; k++)  
        {  
            cout << " ";  
        }  
        for(j = 1; j <= i; j++)  
        {  
            cout << " *";  
        }  
        cout << "\n";  
        space = space + 1;  
    }  
    space = 0;  
    for(i = 4; i >= 1; i--)  
    {  
        for(k = space; k >= 0; k--)  
        {  
            cout << " ";  
        }  
        for(j = i; j >= 1; j--)  
        {  
            cout << " *";  
        }  
        space = space + 1;  
        cout << "\n";  
    }  
    return 0;  
}
