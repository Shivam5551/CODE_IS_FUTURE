#include <iostream>
// '#include <iostream>' directive allows access to input/output stream functions for C++.

using namespace std; 
// 'using namespace std;' statement allows direct access to items in the 'std' namespace,
// which includes standard C++ functionality like cout, cin, and others. 

int main(void) // 'main' fuction serves as the entry point of the program.
{
    string name; // Variable declaration for user's name

    cout << "What's your name? "; // Prompting the user to input their name
    cin >> name; // 'cin' object is used to take input for the user 

    // Displaying a greeting with the user's name
    cout << "Hello, " << name << "!" << endl;

    return 0;   // Indicating successful program execution

}