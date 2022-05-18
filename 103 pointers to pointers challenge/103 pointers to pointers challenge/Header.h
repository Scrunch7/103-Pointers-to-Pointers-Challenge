#pragma once
#include <iostream>

using namespace std;

void SumNum(float& a, float& b);
void SubNum(float& a, float& b);
void MulNum(float& a, float& b);
void DivNum(float& a, float& b);


void SumNum(float& a, float& b) {
    cout << "your equation is:" << a << " + " << b << " = ??" << endl;
    cout << "your answer is:" << a + b << endl;
}
void SubNum(float& a, float& b) {
    cout << "your equation is:" << a << " - " << b << " = ??" << endl;
    cout << "your answer is:" << a - b << endl;
}
void MulNum(float& a, float& b) {
    cout << "your equation is:" << a << " * " << b << " = ??" << endl;
    cout << "your answer is:" << a * b << endl;
}
void DivNum(float& a, float& b) {
    if (b == 0) {
        cout << "invalid. cannont divide by 0";
    }
    else cout << "your equation is:" << a << " / " << b << " = ??" << endl;
    cout << "your answer is:" << a / b << endl;
}