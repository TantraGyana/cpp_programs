/*

    *
   * *
  * * *
 * * * *
* * * * *

*/

#include <iostream>  
  
using namespace std;  
  
int main()  
{  
    int i, j, k, space;  
    space = 4; //value should be 1 less than no of lines  
    for(i = 1; i<=5 ; i++)  
    {  
        for(k = 1; k <= space ; k++)  
        {  
            cout << " ";  
        }  
        for(j = 1; j <= i; j++)  
        {  
            cout << "* ";  
        }  
        cout << "\n";  
        space = space - 1;  
    }  
    return 0;  
}
