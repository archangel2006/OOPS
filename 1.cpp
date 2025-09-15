// 1. Using conditional operator shown as follows, determine:

// Expression 1 ? Expression 2 : Expression 3


// a. If the ages of Ram and Shyam are input through the keyboard, write a program to determine the younger of the two.
// b. Write a program to check whether a number is even or odd.
// c. Write a program to check largest of three numbers.
// d. Write a program to check whether a number is positive or negative.
// e. Write a program to enter two numbers. Make a comparison between them with the conditional operator. If the first number is greater than the second, perform division operation otherwise multiplication operation.



#include <iostream>
using namespace std;

// condition ? expression_if_true : expresion_if_false;

int main(){
    int ram, shyam;
    cout << "Enter Age Of Ram: ";
    cin >> ram;
    cout << "Enter Age Of Shyam: ";
    cin >> shyam;

    int younger = (ram <shyam) ? ram : shyam;
    cout << "Younger Age is: " << younger << endl;

    // if (ram < shyam)
    //     younger = ram;
    // else
    //     younger = shyam;

        return 0;

}