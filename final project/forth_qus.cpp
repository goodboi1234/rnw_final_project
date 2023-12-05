#include <iostream>
#include <string.h>
using namespace std;
class emp{
    public:
    int id;
    char name[100];
    char role[100];
    void takin(){
        cout<<"enter the emp's id";
        cin>>id;
        cout<<"enter the name of the emp's name";
        cin>>name;
        cout<<name<<endl;
        cout<<"enter the role of the person";
        cin>>role;
    };
};
class emp2:public emp{
    public:
    int salary;
    int experience;
    void taking1(){
        cout<<"enter the person's salary";
        cin>>salary;
        cout<<"enter the person's experience";
        cin>>experience; 
    };
};
class emp3:public emp2{
    public:
    char email[100];
    int contact;
    void taking3(){
        takin();
        taking1();
        cout<<"enter the user's email";
        cin>>email;
        cout<<"ernter the contaact details";
        cin>>contact;


        
    };
    void givin(){
        cout<<id<<endl<<role<<endl<<name<<endl<<salary<<endl<<experience<<endl<<email<<endl<<contact;
    };
};
int main(){
  class emp3 e;
  e.taking3();
  e.givin();
    return 0;
}