#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

    int n,a[100];
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int k = n - 1; k >= 0; k--){
        cout << a[k];
        if (k != 0){
            cout << " ";
        }

    }

    cout << endl;
}