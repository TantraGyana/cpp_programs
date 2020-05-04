/*

*  *  *  *  *
   *  *  *  *
      *  *  *
         *  *
            *

*/

#include <iostream>  
  
using namespace std;  
  
int main()  
{  
    int i, j, k, space;  
    space = 1;  
    for(i = 5; i >= 1 ; i--)  
    {  
        for(k = space; k > 1 ; k--)  
        {  
            cout << "  ";  
        }  
        for(j = i; j >= 1; j--)  
        {  
            cout << "* ";  
        }  
        cout << "\n";  
        space = space + 1;  
    }  
    return 0;  
}
