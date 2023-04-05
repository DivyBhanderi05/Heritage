#include<iostream>

using namespace std;

class number{
	public:
	int a;	
	void display1(){
		cout<<"Enter Number : ";
		cin>>a;
	}
}; 

class square : public number{
	public:
	void display2(){
		cout<<"Square  : "<<a*a<<endl;	
		
	}
};
class cube : public number{
	public:
	
	void display3(){
		cout<<"Cube : "<<a*a*a<<endl;
		
	}
};

main(){
	square obj1;
	obj1.display1();
	obj1.display2();
	
	cube obj2;
	obj2.display1();
	obj2.display3();
	

	
	return 0;
}
