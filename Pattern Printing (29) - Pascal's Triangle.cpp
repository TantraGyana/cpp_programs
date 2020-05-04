/*

    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1

*/

#include <iostream>  
  
using namespace std;  
  
int main()  
{  
    int rows;  
    int i, j, k, val;  
    cout<<"Enter The Limit (n. of rows): ";  
    cin>>rows;  
    cout << "\n\n<----- Pascal's Triangle ----->\n\n";  
    for(i=0; i<rows; i++)  
    {  
        val = 1;  
        for (j = 1; j < (rows - i); j++)  
        {  
            cout << "   "; // 3 spaces  
        }  
        for (k=0; k <= i; k++)  
        {  
            cout << "     " << val; // 5 spaces  
            val = val * (i - k)/(k+1);  
        }  
        cout << "\n\n";  
    }  
    return 0;  
} 
