/*

          0
        1 0 1
      2 1 0 1 2
    3 2 1 0 1 2 3
  4 3 2 1 0 1 2 3 4
5 4 3 2 1 0 1 2 3 4 5

*/

#include <iostream>  
  
using namespace std;  
  
int main()  
{  
    int i, j, k, l, space;  
    space = 4;  
    for(i = 0; i <= 5; i++)  
    {  
        for(j = space; j >= 0; j--)  
        {  
            cout << "  ";  
        }  
        for(k = i; k >= 0; k--)  
        {  
            cout << k << " ";  
        }  
        for(l = 1; l <= i ; l++)  
        {  
            cout << l << " ";  
        }  
        cout << "\n";  
        space = space - 1;  
    }  
    return 0;  
}  
