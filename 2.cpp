#include<iostream>
using namespace std;
class V1{
	public:
	int a;
	 V1(){
	 	cout<<"Enter value 1 : ";
	 	cin>>a;
	}
};
class V2 : public V1{
	public:
		int b;
	 V2(){
	 	cout<<"Enter value 2 : ";
	 	cin>>b;
	}
};
class V3  {
	public:
		int c;
	 V3(){
	 	cout<<"Enter value 3 : ";
	 	cin>>c;
	}
};
class V4:public V2 , public V3{
	public:
		int d,e;
	 V4(){
	 	cout<<"Enter value 4 : ";
	 	cin>>d;
        e = a+b+c+d;
		cout<<endl<<"Addition of all 4 value is = "<<e;
	}
};
int main(){
      V4 obj;	
	return 0;
}