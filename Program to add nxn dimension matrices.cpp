#include <iostream> 
using namespace std;  
int main() 
{  
    int r, c;  
    cout << "Enter Number of Rows in Matrix: ";  
    cin >> r;  
    cout << "Enter Number of Columns in Matrix: ";  
    cin >> c;      
    int A[r][c], B[r][c], C[r][c], i, j; 
    
    //inserting values into matrix A  
    cout << "\nEnter Values in Matrix A" << endl;  
    for (i = 0; i < r; i++) 
    {  
        for (j = 0; j < c; j++) 
        {  
            cout << "Enter Element: ";  
            cin >> A[i][j];  
        }  
    } 
    
    //inserting values into matrix B  
    cout << endl << "Enter Values in Matrix B" << endl;  
    for (i = 0; i < r; i++) 
    {  
        for (j = 0; j < c; j++) 
        {  
            cout << "Enter Element: ";  
            cin >> B[i][j];  
        }  
    } 
  
    //processing addition of matrix A and matrix B (A + B)  
    for (i = 0; i < r; i++) 
    {  
        for (j = 0; j < c; j++) 
        {  
            C[i][j] = A[i][j] + B[i][j];  
        }  
    } 

    //displaying the result matrix C  
    cout << endl << "Result (C=A+B)" << endl;  
    for (i = 0; i < r; i++) 
    {  
        for (j = 0; j < c; j++) 
        {  
            cout << "\t" << C[i][j];  
        }  
        cout << "\n";  
    }  
    return 0;  
} 
