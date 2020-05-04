/*

A  B  C  D  E
A  B  C  D
A  B  C
A  B
A

*/

#include <iostream>  
  
using namespace std;  
  
int main()  
{  
    int i, j;  
    for(i = 69; i >= 65; i--)  
    {  
        for(j = 65; j <= i ; j++)  
        {  
            cout << char(j) << " ";  
        }  
        cout << "\n";  
    }  
    return 0;  
}
