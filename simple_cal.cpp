#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int a,b,c;
    string op;

    while(cin >> a >> op >> b){
        
      if(op == "?"){
          break;
      } else if(op == "+") {
          cout << a + b << endl;
      } else if(op =="-") {
          cout << a - b << endl;
      } else if(op == "*") {
          cout << a * b << endl;
      } else {
          cout << a / b << endl;
      }  
    }
}