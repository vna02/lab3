//This is the library
#include <iostream>
using namespace std; 

//This is the main function
    int main() { 
    cout << "Hi, this is pretty cool!" << endl;
 
//Declaration of Data Types
int e,f,modulus,product;
e = 8;
f = 9;
float g,h,sum,difference,division;
g = 4.321;
h = 6.543;


//modulus of two ints
modulus = e%f;

//sum of two floats
sum = g+h; 

//product of two ints
product = e*f;

//difference of two floats
difference = g-h;

//division of two floats
division = g/h;

//Printing values of the integers and floats
cout << "int e is = " <<e <<endl; 
cout << "int f is = " <<f <<endl;
cout << "float g is = " <<g <<endl;
cout << "float h is  = " <<h <<endl;

//Printing result of arithmetic operations in the terminal
cout << "Modulus of e and f is " << modulus <<endl;
cout << "Sum of g and h is "<< sum <<endl;
cout << "Product of e and f is "<< product <<endl;
cout << "Difference of g and h is "<< difference <<endl;
cout << "Division of g and h is "<< division <<endl;


  return 0;
  }

 

