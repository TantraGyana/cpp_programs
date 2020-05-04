/*

5  4  3  2  1
4  3  2  1
3  2  1
2  1
1

*/

#include <iostream>  
  
using namespace std;  
  
int main()  
{  
    int i, j;  
    for(i = 5; i > 0; i--)  
    {  
        for(j = i; j > 0 ; j--)  
        {  
            cout << j << " ";  
        }  
        cout << "\n";  
    }  
    return 0;  
}
