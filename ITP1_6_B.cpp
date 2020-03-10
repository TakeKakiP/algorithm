#include <iostream>
using namespace std;

int main(){
   int n, b;
   bool cards[3][13];
   char a;
   
   for(int i = 0; i <= 3; i++){
       for(int j = 0; j <= 13; j++){
           cards[i][j] = false;
       }
   }
   
   cin >> n;
    for(int i = 0; i < n; ++){
       cin >> a >> b;
       if (a == 'S') cards[0][b] = true;
       if (a == 'H') cards[1][b] = true;
       if (a == 'C') cards[2][b] = true;
       if (a == 'D') cards[3][b] = true;
    }
    
    for(int i = 0; i < 4; i++){
       for(int j = 1; j<= 13; j++){
            if(cards[i][j] == false){
                if( i == 0)   a = 'S';
                if( i == 1)   a = 'H';
                if( i == 2)   a = 'C';
                if( i == 3)   a = 'D';
            cout << a << " " << j << endl;
            }
            else continue;
       }
       
   }
   
   return 0;
}