#include <iostream>
using namespace std;

int main(){
int a;
cout<<"enter the value of a";
cin>>a;
try{
    if(a<=0){
        cout<<a;
    }
    else{
        throw 1;
    };
}
catch(int b){
    cout<<"the value should be smaller than 0";
};

    return 0;
}