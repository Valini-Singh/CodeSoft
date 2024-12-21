#include <iostream>
using namespace std;

int main(){
    int op1, op2;
    char op;
    int answer;
    cout<<"Enter the first operand: ";
    cin>>op1;
    cout<<"Enter the second operand: ";
    cin>>op2;
    cout<<"Enter the operator:";
    cin>>op;

    switch(op){
        case '+':
            answer = op1+op2;
            break;
        case '-':
            answer = op1-op2;
            break;
        case '*':
            answer = op1*op2;
            break;
        case '/':
            if (op2 != 0)
                answer = op1/op2;
            else{
                cout<<"Division operands are invalid";
                return 1;
            }
            break;
        default:
            cout<<"The given operand is not valid";
            return 1;
    }

    cout<<"The answer of the operation is: "<<answer;
    return 0;
}