/*

        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1

*/

#include <iostream>  
  
using namespace std;  
  
int main()  
{  
    int i, j, k, l, space;  
    space = 4;  
    for(i = 1; i <= 5; i++)  
    {  
        for(j = space; j > 0; j--)  
        {  
            cout << "  ";  
        }  
        for(k = i; k > 0; k--)  
        {  
            cout << k << " ";  
        }  
        cout << "\n";  
        space = space - 1;  
    }  
    return 0;  
}  
