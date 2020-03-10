#include <iostream>
#include <stdio.h>
using namespace std;


int main(){
/* n個の数字を得て、その数だけforを回す*/
int n,a,max = -10000,min = 10000,i;
long long sum;
cin >> n;

for (i = 0; i <= n; i++){
    cin >> a;

    if(a > max){
        max = a;
    }
    if(a < min){
        min = a;
    }
    sum += a;
}

cout << min << " " << max << " " << sum << endl;

}