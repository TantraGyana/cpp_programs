#include <iostream>  

using namespace std;   

int main() 
{      
    int A[3][3], B[3][3], C[3][3], i, j, k, sum;     
    
    //inserting values into matrix A
    cout << "Enter Values in Matrix A" << endl;      
    for (i = 0; i < 3; i++)     
    {          
        for (j = 0; j < 3; j++)         
        {              
            cout << "Enter Element: ";              
            cin >> A[i][j];          
        }      
    }      

//inserting values into matrix B            
    cout << endl << "Enter Values in Matrix B" << endl;      
    for (i = 0; i < 3; i++)     
    {          
        for (j = 0; j < 3; j++)         
        {              
            cout << "Enter Element: ";              
            cin >> B[i][j];          
        }      
    }      

//processing multiplication of matrix A and matrix B (A X B)
    for (i = 0; i < 3; i++)     
    {          
        for (j = 0; j < 3; j++)         
        {              
            sum = 0;              
            for (k = 0; k < 3; k++)             
            {                  
                sum += A[i][k] * B[k][j];              
            }              
            C[i][j] = sum;          
        }      
    }      

//displaying the result matrix C          
    cout << endl << "Result (C=AxB)" << endl;      
    for (i = 0; i < 3; i++)     
    {          
        for (j = 0; j < 3; j++)         
        {              
            cout << "\t" << C[i][j];          
        }          
        cout << "\n";      
    }      
    return 0;  
} 
