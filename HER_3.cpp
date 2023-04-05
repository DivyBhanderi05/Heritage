#include<iostream>

using namespace std;

class name{
	public:
	void out1(){
		cout<<"NAME : Amit"<<endl;
		
	}
}; 

class age{
	public:
	void out2(){
		cout<<"AGE : 23"<<endl;
	}
	
};
class role{
	public:
	void out3(){
		cout<<"ROLE :Manager"<<endl;
	}
	
};
class sex{
	public:
	void out4(){
		cout<<"SEX : Male"<<endl;
	}
	
};
class print : public name,public age,public role,public sex{
	public:
	
	
};

main(){
	print obj;
	obj.out1();
	obj.out2();
	obj.out3();
	obj.out4();
	
	
	return 0;
}
