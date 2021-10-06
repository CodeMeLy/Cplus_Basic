#include "stack.hpp"
#include <iostream>
#include <cmath>
// check if a character is a number (operand)
bool isOperand(char ch) {
    return (ch>='0' && ch<='9');
}
// evaluate postfix expression
double evalute(string postfix) {
    stack s;
    for(int i = 0; i<postfix.size(); i++){
        if(isOperand(postfix[i])){
            s.push(postfix[i]-'0');
        }else{
            double a = s.pop();
            double b = s.pop();
            switch (postfix[i])
            {
                case '+': // addition
                          s.push(b + a);
                          break;
                case '-': // subtraction
                          s.push(b - a);
                          break;
                case '*': // multiplication
                          s.push(b * a);
                          break;
                case '/': // division
                          s.push(b / a);
                          break;
                case '^': // exponent
                          s.push(pow(b,a));
                          break;
            }
        }
    }
    return s.pop();
}
// main function
int main() {
	string e1 = "82/7*";	//28
	string e2 = "623+-382/+*2^3+";	//52
	string e3 = "72*93/+";	//17
	string e4 = "2578*+*9-";	//113
	string e5 = "753-/9*2+";	//33.5
	
	cout << e1 << " = " << evalute(e1) << endl;
	cout << e2 << " = " << evalute(e2) << endl;
	cout << e3 << " = " << evalute(e3) << endl;
	cout << e4 << " = " << evalute(e4) << endl;
	cout << e5 << " = " << evalute(e5) << endl;
	
	return 0;
}