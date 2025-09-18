// e. Write a program to enter two numbers. Make a comparison between them with the conditional operator. If the first number is greater than the second, perform division operation otherwise multiplication operation.

#include <iostream>
using namespace std;

int main(){
    int x,y;
    cout << "Enter 1st Number: ";
    cin >> x;
    cout << "Enter 2nd Number: ";
    cin >> y;

    int result;

    if (x > y) {
        if (y != 0) {  // avoid divide by zero
            result = x / y;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
            return 1; // exit with error
        }
    } else {
        result = x * y;
    }

    cout << "Result: " << result << endl;

    return 0;
}