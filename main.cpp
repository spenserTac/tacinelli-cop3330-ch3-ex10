#include <iostream>
#include <stdio.h>
#include "chp3_EX10.h"

using namespace std;

int main(){
    string operation;
    double operand1, operand2, result;

    cin >> operation;
    cin >> operand1;
    cin >> operand2;

    calculator2(operation, operand1, operand2);

    return 0;
}