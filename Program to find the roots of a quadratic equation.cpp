#include <iostream> 
#include <math.h> 

using namespace std;  

int main() 
{  
    float a, b, c, x1, x2, determinant, realPart, imaginaryPart; 
    cout << "Enter coefficients of x^2 (a): ";  
    cin >> a;  
    cout << "Enter coefficients of x (b): ";  
    cin >> b;  
    cout << "Enter coefficients (c): ";  
    cin >> c;  
    determinant = (b * b) – (4 * a * c);  
    if (determinant > 0) 
    {  
        x1 = (-b + sqrt(determinant)) / (2 * a);  
        x2 = (-b - sqrt(determinant)) / (2 * a);  
        cout << "\n Roots are real and different.";  
        cout << "\n First Root, x1 = " << x1;  
        cout << "\n Second Root, x2 = " << x2;  
    } 
    else if (determinant == 0) 
    {  
        cout << "\n Roots are real and same.";  
        x1 = (-b + sqrt(determinant)) / (2 * a);  
        cout << "\n Roots are: x1 = x2 = " << x1;  
    } 
    else 
    {  
        realPart = -b / (2 * a);  
        imaginaryPart = sqrt(-determinant) / (2 * a);  
        cout << "\n Roots are complex and different.";  
        cout << "\n First Root, x1 = " << realPart << "+" << imaginaryPart << "i";  
        cout << "\n Second Root, x2 = " << realPart << "-" << imaginaryPart << "i";  
    }  
    return 0;  
}  
