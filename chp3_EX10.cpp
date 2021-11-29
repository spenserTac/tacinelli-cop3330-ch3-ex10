#include <iostream>
#include <stdio.h>
#include "chp3_EX10.h"

using namespace std;

int calculator2(string operation, double operand1, double operand2){
    double result;

    if(operation == "+"){
        result = operand1 + operand2;
        cout << result << endl;
    }
    else if(operation == "-"){
        result = operand1 - operand2;
        cout << result << endl;
    }
    else if(operation == "*"){
        result = operand1 * operand2;
        cout << result << endl;
    }
    else if(operation == "/"){
        result = operand1 / operand2;
        cout << result << endl;
    }

    return 0;
}