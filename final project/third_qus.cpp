#include <iostream>
using namespace std;
class mess{
    public:
    int feet;
    int feet2;
    int inches;
    int inches2;

    int ask;
    void taking(){
        cout<<"enter the value in feet1";
        cin>>feet;
        cout<<"enter the value in feet2";
        cin>>feet2;
        feet+=feet2;
        cout<<"enter the value of inches";
        cin>>inches;
        cout<<"enter another value of inches";
        cin>>inches2;
        inches+=inches2;
    };
    void calcin(){
        if(inches >=12){
            feet+=inches/12;
           int  inches2 = inches%12;
           inches = inches2;
        };
        cout<<feet<<" feet"<<inches<<" inches";

    };
};
int main(){
    class mess M;
    M.taking();
    M.calcin();
    return 0;
}
