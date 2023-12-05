#include <iostream>
using namespace std;
class train1{
    public:
    int train_no = 1;
    char name[100] = "rajthani expresss";
    char source[100] = "ahmedabad";
    char destination[100] = "kathmandu";
    int time = 1030;
    void givin(){
        cout<<train_no<<endl<<name<<endl<<source<<endl<<destination<<endl<<time<<endl;
    };
};

    //data for train2
  class train2{
    public:
    int train_no2 = 2;
    char name2[100] = "nepal expresss";
    char source2[100] = "surat";
    char destination2[100] = "kathmandu";
    int time2 = 2100;
   
   void givin2(){
    cout<<"information about train no-2";
    cout<<train_no2<<endl<<name2<<endl<<source2<<endl<<destination2<<endl<<time2<<endl;
   };
    };

    class train3:public train1 , train2{
        public:
    int train_no3 = 3;
    char name3[100] = "kashmir expresss";
    char source3[100] = "srinagar";
    char destination3[100] = "kathmandu";
    int time3= 0600;

    void showin(){
        
        cout<<"this is all the information abput the train 3";
        cout<<train_no3<<endl<<name3<<endl<<source3<<endl<<destination3<<endl<<time3<<endl;
    };
    void givin3(){
        givin();
        givin2();
        showin();
    };
};
int main(){
    int k;
    class train3 t;
    t.givin3();
    cout<<"from the given information enter in which train you want to go";
    cin>>k;
    if(k = 1){
        class train1 tr;
        tr.givin();
    };
    if(k = 2){
        class train2 tr;
        tr.givin2();
    };
    if(k = 3){
        class train3 tr;
        tr.showin();
    };

    return 0;
}
