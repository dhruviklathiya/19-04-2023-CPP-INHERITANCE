#include<iostream>
using namespace std;
class RBI{
    public:
    float rbi_rate = 0.09;
};
class SBI :public RBI{
    public:
    float sbi_rate = 0.02; 
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
    float bob_rate = 0.01;
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
    float icici_rate = 0.03;
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
// Way 2
// #include<iostream>
// using namespace std;
// class RBI{
//     public:
//     float RBI_interest = 0.02;
// };


// class SBI :public RBI{
//     public:
//     float SBI_interest = 0.03;
//     float final_amt;
//     void getROI(float b_access){
//         final_amt = ( b_access * RBI_interest ) + ( b_access * SBI_interest) + b_access;
//         cout<<"RBI interest rate::: "<<RBI_interest<<endl;
//         cout<<"SBI interest rate::: "<<SBI_interest<<endl;
//         cout<<"Final amount [RBI + SBI]::: "<<final_amt<<endl;
//     }
// };


// class BOB :public RBI{
//     public:
//     float BOB_interest = 0.05;
//     float final_amt;
//     void getROI(float b_access){
//         final_amt = ( b_access * RBI_interest ) + ( b_access * BOB_interest ) + b_access;
//         cout<<"RBI interest rate::: "<<RBI_interest<<endl;
//         cout<<"BOB interest rate::: "<<BOB_interest<<endl;
//         cout<<"Final amount [RBI + BOB]:::"<<final_amt<<endl;
//     }
// };


// class ICICI :public RBI{
//     public:
//     float ICICI_interest = 0.07;
//     float final_amt;
//     void getROI(float b_access){
//         final_amt = ( b_access * RBI_interest ) + ( b_access * ICICI_interest ) + b_access;
//         cout<<"RBI interest rate::: "<<RBI_interest<<endl;
//         cout<<"ICICI interest rate::: "<<ICICI_interest<<endl;
//         cout<<"Final amount [RBI + ICICI]:::"<<final_amt<<endl;
//     }
// };


// int main (){
//     int inputamount;

//     cout<<"Enter amount for which you're willng to find ROI:";
//     cin>>inputamount;

//     SBI sbiobj;
//     BOB bobobj;
//     ICICI iciciobj;
    
//     sbiobj.getROI(inputamount);
//     bobobj.getROI(inputamount);
//     iciciobj.getROI(inputamount);
    
//     return 0;
// }
