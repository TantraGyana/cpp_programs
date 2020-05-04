/*

1
2  3
4  5  6
7  8  9  10
11  12  13  14  15
16  17  18  19  20  21

*/

#include <iostream>  
  
using namespace std;  
  
int main()  
{  
    int i, j, n;  
    int display = 1;  
    cout << "Enter number of rows: ";  
    cin >> n;  
    cout << "\n\n <----- Floyd's Triangle ----->\n\n";  
    for(i = 1; i <= n; i++)  
    {  
        for(j = 1; j <= i; j++)  
        {  
            cout << display << " ";  
            display++;  
        }  
        cout << "\n";  
    }  
    return 0;  
}
