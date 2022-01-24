// In C++, by default, there are no operators for exponents and square roots. 
// Instead, functions such pow( , ) and sqrt() are used to calculate powers and square roots respectively.
// In order to use these functions, they must be imported by including #include <cmath> at top of the program header

#include <iostream>
#include <cmath>
using namespace std;

int main() {

	cout << pow(2, 2) << endl;
	cout << pow(25, (1 / 2)) << endl;
	cout << pow(25, (1.0 / 2.0)) << endl;
	cout << sqrt(25) << endl;
	

	int a{ 2 };
	int b{ 3 };
	int c{ 4 };
	double result = 3 * a - 2 / (b + 5) + c;
	printf("%f \n", result);




	

	system("pause>0");

}
