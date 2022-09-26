#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class SFS
{
public:
  vector<string> strings;

  SFS(){}

  SFS(vector<string>input){
    for(int i=0;i<input.size();i++){
        strings.push_back(input[i]);
    }
  }

  // Pushes a string given as input to the stack;
  void push(string s)
  {
    strings.push_back(s);
  }

  // Pops the current top element of the stack;
  void pop()
  {
    if(strings.size()==0){
        return;
    }
    strings.pop_back();
  }

  // Returns the current top element of the stack;
  string top()
  {
    if(strings.size()==0){
        return "There are no strings in the stack" ;
    }
    return strings[strings.size() - 1];
  }

  // Returns the current size of the stack;
  int size()
  {
    return strings.size();
  }

  // Returns true if stack is empty, and false if it isn't;
  bool isEmpty()
  {
    return (strings.size() == 0);
  }
};

int main()
{

  SFS s;
  s.push("Rajkuvarjit");
  s.push("Singh");
  cout <<s.top() << endl;
  s.pop();
  cout <<s.top() << endl;
  s.pop();
  cout <<s.top() << endl;

  s.push("ECE");
  s.push("MinorInCSE");

  cout << s.size() << endl;

  cout << s.top() << endl;

  s.pop();
  cout << "Is the stack empty :" << s.isEmpty();
}
