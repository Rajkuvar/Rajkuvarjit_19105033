/* I will traverse the string and see for the closing parentheses and then I will see if I get the complementary opening
 one at the top to get a complete pair and hence that will be balancedotherwise I will keep on pushing, this will work on
 the logic that if the brackets inside two brackets are balanced only then will the overall expresseion be valid to be balanced,
 as all inside it will be popped and the when the closing bracket will be found, the immediate top will be the 
 complementary opening bracket.
*/
#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string input)
{
    stack<char> curr;
    for (int i = 0; i < input.length(); i++) {
        if (curr.empty()) {
            curr.push(input[i]);
        }
        else if ((curr.top() == '(' && input[i] == ')') || (curr.top() == '{' && input[i] == '}') || (curr.top() == '[' && input[i] == ']')) {
            curr.pop();
        }
        else
            curr.push(input[i]);
        
    }
    if (curr.empty())
        return true;
    return false;
}
 

int main()
{
    string input = "({}[])";
 
    if (isBalanced(input))
        cout <<"The given expression is balanced."<<endl;
    else
        cout <<"The given expression is not balanced."<<endl;


    input = "({}[]{)}";
    if (isBalanced(input))
        cout << "The given expression is Balanced"<<endl;
    else
        cout << "The given expression is not Balanced"<<endl;


    return 0;
}
