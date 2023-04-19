#include<iostream>
using namespace std;
class RBI{
    public:
    float rbi_rate = 0.02;
};
class SBI :public RBI{
    public:
    float sbi_rate = 0.03;
    float c;
    void getROI(float b){
        c = (b*rbi_rate) + (b*sbi_rate) + b;
        cout<<"Rate of interest from RBI is: "<<rbi_rate<<endl;
        cout<<"Rate of interest of SBI is: "<<sbi_rate<<endl;
        cout<<"Final amount to pay including RBI rate and SBI bank is: "<<c<<endl;
    }
};
class BOB :public RBI{
    public:
    float bob_rate = 0.05;
    float c;
    void getROI(float b){
        c = (b*rbi_rate) + (b*bob_rate) + b;
        cout<<"Rate of interest from RBI is: "<<rbi_rate<<endl;
        cout<<"Rate of interest of BOB is: "<<bob_rate<<endl;
        cout<<"Final amount to pay including RBI rate and BOB bank is: "<<c<<endl;
    }
};
class ICICI :public RBI{
    public:
    float icici_rate = 0.07;
    float c;
    void getROI(float b){
        c = (b*rbi_rate) + (b*icici_rate) + b;
        cout<<"Rate of interest from RBI is: "<<rbi_rate<<endl;
        cout<<"Rate of interest of ICICI is: "<<icici_rate<<endl;
        cout<<"Final amount to pay including RBI rate and ICICI bank is: "<<c<<endl;
    }
};

int main (){
    int a;
    cout<<"Enter amount:";
    cin>>a;
    SBI obj1;
    BOB obj2;
    ICICI obj3;
    obj1.getROI(a);
    obj2.getROI(a);
    obj3.getROI(a);
    return 0;
}