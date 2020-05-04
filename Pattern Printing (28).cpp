/*

        1
      1 2 3
    1 2 3 4 5
  1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9

*/

#include <iostream>  
  
using namespace std;  
  
int main()  
{  
    int i, j, k;  
    for (i = 1; i <= 5; i++)  
    {  
        for (j = 1; j <= 5-i; j++)  
        {  
            cout << "  ";  
        }  
        for(k=1; k<=(2*i)-1; k++)  
        {  
            cout << k << " ";  
        }  
        cout << "\n";  
    }  
    return 0;  
}
