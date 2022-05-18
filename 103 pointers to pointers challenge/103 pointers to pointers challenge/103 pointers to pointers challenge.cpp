#include "Header.h"
#include <iostream>


int main()
{
    int choice;
    int agian = 1;
    float* num1 = new float;
    float* num2 = new float;

    while(agian == 1) {
        cout << "Welcome to my simple calculator!" << endl;
        cout << "********************************" << endl;
        cout << "1) Addition (x+y)" << endl;
        cout << "2) Subtraction (x-y)" << endl;
        cout << "3) Multiplication (x*y)" << endl;
        cout << "4) Division (x/y)" << endl;
        cout << "5) Exit the Calculator" << endl;
        cout << "*********************************" << endl;
        cout << "Please Enter the number of the operator you would like to compute:";
        cin >> choice;
        cout << "Enter the first number of the equation(x) :";
        cin >> *num1;
        cout << "Enter the second number of the equation(y) :";
        cin >> *num2;

        switch (choice) {
        case'1':
            SumNum(*num1, *num2);
            break;
        case'2':
            SubNum(*num1, *num2);
            break;
        case'3':
            MulNum(*num1, *num2);
            break;
        case'4':
            DivNum(*num1, *num2);
            break;
        case'5':
            agian = 0;
            break;
        }

    }

    if (agian == 0) {
        cout << "Bye!" << endl;
    }


    return 0;
}

