#include <iostream>

using namespace std;

// Factorial function: no return
// Parameter passed by value 
void factorialDisplay(int num)
{
    int fact = 1;
    for(int counter=1; counter<=num; counter++)
    {
        fact *= counter;
    }

    cout << fact << endl;
}

// Factorial function: with return
// Parameter passed by value
int factorial(int num)
{
    int fact = 1;
    for(int counter=1; counter<=num; counter++)
    {
        fact *= counter;
    }

    return fact;
}

// For illustration, a signature of a function
// declared below main()
void factorialRef(int num, int &result);


// Case 4, passing by pointer
void factorialPointer(int num, int *result)
{
    *result = 1;
    for(int counter=1; counter<=num; counter++)
    {
        *result *= counter;
    }
}


// Every program contains a function: main
// Parameters: number of command line arguments,
// list of command line arguments
int main(int argc, char const *argv[])
{
    int targetNum = 0;
    cout << "enter a number: " << endl;
    cin >> targetNum;

    // Calling the function (procedure)
    // Case 1
    factorialDisplay(targetNum);

    // That's a real function, it returns sthg
    // Case 2
    int result = factorial(targetNum);
    cout << result << endl;

    // Case 3
    int resultRecepient = 0;
    cout << resultRecepient << endl;
    factorialRef(targetNum, resultRecepient);
    cout << resultRecepient << endl;

    // Case 4 - just FYI - That's we did in C
    int resultAddress = 0;
    cout << "Address: " << &resultAddress << endl;
    cout << "Result: " << resultAddress << endl;
    factorialPointer(targetNum, &resultAddress);
    cout << "Address: " << &resultAddress << endl;
    cout << "Result: " << resultAddress << endl;

    return 0; // Return code int 
}

// Case 3: passing by reference
// "Modern" C++ approach
void factorialRef(int num, int &result)
{
    result = 1;
    for(int counter=1; counter<=num; counter++)
    {
        result *= counter;
    }
}