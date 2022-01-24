// TypeCasting -AKA type conversion - is changing the data type of a variable

#include <iostream>
#include <string>
using namespace std;


int main()
{   

    // Explicit conversion, using cout for example

    short a{ 2000 };
    int b;
    b = (int)a; // c-like cast notation
    b = int(a); // functional notation
    
    cout << b << "\n";
    
    
    int numerator {40};
    int denominator{ 25 };
    int number{ 0 };
    cout << boolalpha << (bool)number << "\n"; // Convert the integer 0 to a bool and return in the console
    cout << (double)numerator / denominator << "\n"; // Convert the result of the multiplication of integers int a decimal number (double)

    // Explicit conversion, using printf and formatting
    

    int newnumerator{ 40 };
    int newdenominator{ 25 };
    int newnumber{ 5 };
    
    
    // If either or both numbers are double (decimal) then double division will occur
   

    cout << boolalpha << (bool)newnumber << "\n";
    cout << newnumerator / newdenominator << "\n";
    cout << (double)newnumber / newdenominator << "\n";
    printf("%d \n", newnumerator / newdenominator);
    printf("%f \n", (double)newnumerator / newdenominator);
    printf("%f \n", (double)(newnumerator / newdenominator)); /* Both numbers are int when division occurs
                                                              results in int of 1 converted to double is 1.000000*/
    cout << (double)(newnumerator / newdenominator) << "\n";  // cout removes the decimal point and trailing zeros


    // Type-conversion functions:
    // stod(string) - string to double
    // stoi(string) - string to integer
    // to_string(int, double, bool)

    int ab{ 5 };
    string abc{ "3" };
    string cba{ "3.14" };
    bool d{ true };
    cout << ab + stod(abc) << "\n";

        system("pause>0");
}

