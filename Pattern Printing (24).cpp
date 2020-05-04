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
    space = 4;  
    for(i = 1; i <= 5 ; i++)  
    {  
        for(k = space; k >= 1 ; k--)  
        {  
            cout << "  ";  
        }  
        for(j = 1; j <=i; j++)  
        {  
            cout << " *";  
        }  
        cout << "\n";  
        space = space -1;  
    }  
    space = 1;  
    for(i = 4; i >= 0 ; i--)  
    {  
        for(k = space; k > 0 ; k--)  
        {  
            cout << "  ";  
        }  
        for(j = i; j >= 1; j--)  
        {  
            cout << " *";  
        }  
        cout << "\n";  
        space = space + 1;  
    }  
    return 0;  
}
