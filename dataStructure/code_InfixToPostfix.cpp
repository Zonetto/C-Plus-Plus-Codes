#include <iostream>
#include <stack>
#include <string>
using namespace std;

int Priority(char c){
	if (c == '-' || c == '+')
		return 1;
	else if (c == '*' || c == '/')
		return 2;
	else if (c == '^')
		return 3;
	else
		return 0;
}
string infix_to_postfix(string exp){
	stack<char> stk;
	string output = "";
	//---------------------------
	for (int i = 0; i < exp.length(); i++){
		if (exp[i] == ' ') continue;

		if (isdigit(exp[i]) || isalpha(exp[i]))
			output += exp[i];
		else if (exp[i] == '(')
			stk.push('(');
		else if (exp[i] == ')'){
			while (stk.top() != '('){
				output += stk.top();
				stk.pop();
			}
			stk.pop();
		}
		else{
			while (!stk.empty() && Priority(exp[i]) <= Priority(stk.top())){
				output += stk.top();
				stk.pop();
			}
			stk.push(exp[i]);
		}
	}

	while (!stk.empty()){
		output += stk.top();
		stk.pop();
	}

	return output;

}

int main()
{
	//string infixExpression = ("(3+2)+7/2*((7+3)*2)");
        string infixExpression = ("(x/6+(a-2*(b/3)^5+f)^2)");

        cout << infix_to_postfix(infixExpression) << endl;
	system("pause");
	return 0;
}
//postfix
float math(float o1, float o2, char opr){
if (opr=='+')
return o1+o2;
else if (opr=='*')
return o1*o2;
else if (opr=='-')
return o1-o2;
else if (opr=='/')
return o1/o2;
else return 0;
}
float pp(string exp){
stack<float> stk;
for (int i=0;i<exp.size(); i++){
if (isdigit(exp[i]))
stk.push(exp[i]-'0');
else{
float o2=stk.top();
stk.pop();
float o1=stk.top();
stk.pop();
float res = math(o1,o2,exp[i]);
stk.push(res);
}
}
return stk.top();
}