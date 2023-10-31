#include <iostream>
// '#include <iostream>' directive allows access to input/output stream functions for C++.

using namespace std; 
// 'using namespace std;' statement allows direct access to items in the 'std' namespace,
// which includes standard C++ functionality like cout, cin, and others. 

int main(void)     // 'main' fuction serves as the entry point of the program.
{
    int num1 = 0, num2 = 0, result = 0; 
    // Declaring integer variables and initializing them with initial values of 0.

    cout << "Enter First Number : "; // Prompting the user to input the first number
    cin >> num1; // 'cin' object is used to take input for the first number

    cout << "Enter Second Number : "; // Prompting the user to input the second number
    cin >> num2; // 'cin' object is used to take input for the second number

    result = num1 + num2; // Calculating the addition of num1 and num2
    cout << "Addition of num1 and num2 : " << result << endl; // Displaying the addition result

    result = num1 - num2; // Calculating the subtraction of num1 and num2
    cout << "Subtraction : " << result << endl; // Displaying the subtraction result

    return 0; // Indicating successful program execution
}
