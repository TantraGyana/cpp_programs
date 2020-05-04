/*

            1
         1  2  1
      1  2  3  2  1
   1  2  3  4  3  2  1
1  2  3  4  5  4  3  2  1

*/

#include <iostream>  
  
using namespace std;  
  
int main()  
{  
    int i, j, k, l, space;  
    space = 4;  
    for(i = 1; i <= 5; i++)  
    {  
        for(k = 1; k <= space; k++)  
        {  
            cout << "  ";  
        }  
        for(j = 1; j <= i; j++)  
        {  
            cout << j << " ";  
        }  
        for(l = (i-1); l>= 1; l--)  
        {  
            cout << l << " ";  
        }  
        cout << "\n";  
        space = space - 1;  
    }  
    return 0;  
} 
