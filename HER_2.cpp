#include<iostream>

using namespace std;

class animal{
	public:
	char nameD[50] , nameZ[50];
	int ageD, ageZ;
	
}; 

class zebra : public animal{
	public:
	void set_value1(){
		cout<<endl<<endl<<"Enter animal name : ";
		cin>>nameZ;
		cout<<"Enter animal age  : ";
		cin>>ageZ;
		cout<<"Name : "<<nameZ<<endl<<"Age : "<<ageZ<<endl<<endl;
		cout<<"origin : savana"<<endl<<"Lfespan : 35";
	}
	
};
class dolphin : public animal{
	public:
	void set_value2(){
		cout<<endl<<"Enter animal name : ";
		cin>>nameD;
		cout<<"Enter animal age : ";
		cin>>ageD;
		cout<<"Name : "<<nameZ<<endl<<"Age : "<<ageZ<<endl<<endl;
		cout<<"origin : ocean"<<endl<<"Lfespan : 40"<<endl<<endl;
	}
	
};

main(){
	cout<<"Enter Zebra And Dolphin";
	zebra obj;
	obj.set_value1();
	
	dolphin obj2;
	obj2.set_value2();
	return 0;
}
