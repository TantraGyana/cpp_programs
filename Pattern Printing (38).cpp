/*

*************
 *         *
  *       *
   *     *
    *   *
     * *
      *

*/

#include <iostream>  
  
using namespace std;  
  
int main()  
{  
    int i, j, n, space_pyramid;  
    cout << "Enter No. of Rows: ";  
    cin >> n;  
    for(i = n; i >= 1; i--)  
    {  
        for (space_pyramid = i; space_pyramid < n; space_pyramid++)  
        {  
            cout << " ";  
        }  
        for(j = 1; j <= (2 * i - 1); j++)  
        {  
            if(i == n || j == 1 || j == 2*i - 1)  
            {  
                cout << "*";  
            }  
            else  
            {  
                cout << " ";  
            }  
        }  
        cout << "\n";  
    }  
    return 0;  
}
