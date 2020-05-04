/*

77777777777777
            7
           7
          7
         7
        7
       7
      7
     7
    7
   7
  7
 7
7


*/

#include <iostream>  
  
using namespace std;  
  
int main()  
{  
    int i, j;  
    int len;  
    cout << "Enter the Size: ";  
    cin >> len;  
    for(i = len; i >= 1; i--)  
    {  
        for(j = 1; j <= len; j++)  
        {  
            if(i==len || j == i)  
            {  
                    cout << "7";  
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
