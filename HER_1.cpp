#include<iostream>

using namespace std;

class mother{
	public:
	void display1(){
		
		cout<<"Hii"<<endl;
	}
}; 

class daughter : public mother{
	public:
	
	void display2(){
		
		cout<<"Bye"<<endl;
	}
};

main(){
	
	daughter obj;
	obj.display1();
	obj.display2();
	
	return 0;
}
