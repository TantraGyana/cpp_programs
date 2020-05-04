/*

* * * * * * * *
 * * * * * * *
  * * * * * *
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
    int i, j, k, space, n;  
    cout << "Enter No. of Rows: ";  
    cin >> n;  
    space = 0;  
    for(i = n; i>=1; i--)  
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
        space = space + 1;  
    }  
    return 0;  
}
