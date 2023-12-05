#include <iostream>
using namespace std;

int main(){
    int list1[3][3] = {{50 , 90 , 18} , {12 , 56 , 20} , {9 , 8 , 6}};
   int  count = 0;
   
   for(int row = 0;row<=2;row++){
    for(int col = 0;col <=2 ; col++){
        count+=list1[row][col];
    }
   }
   cout<<count/9;
    return 0;
}