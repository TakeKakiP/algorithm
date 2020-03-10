#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    double r = 2561.234;

      /*cin >> r;*/

     double circle_menseki = r * r * 3.141592653589793238 ;
     double circle_ensyu = 2 * r * 3.141592653589793238 ;

    printf( "%.6lf %.6lf" , (double)circle_menseki, (double)circle_ensyu);
}