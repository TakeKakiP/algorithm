#include <iostream>
using namespace std;

int main(){
    int w;

    cin >> w;

    cout << w / 60 / 60 << ":" << w/ 60 % 60 << ":" <<  w % 60 <<endl;
}