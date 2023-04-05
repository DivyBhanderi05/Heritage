#include<iostream>

using namespace std;

class A{
	public:
	int id, salary, exp, contact;
	char name[50], role[50], comp_name[50], email[50], address[50];
	
	void set1(){
		cout<<"Enter Id : ";
		cin>>id;
		cout<<"Enter Name : ";
		cin>>name;
		cout<<"Enter Role : ";
		cin>>role;
	}
};
class B : public A{
	public:
		void set2(){
		cout<<"Enter salary : ";
		cin>>salary;
		cout<<"Enter Expirience : ";
		cin>>exp;
		}
	
};
class C : public B{
	public:
		void set3(){
		cout<<"Enter Company Name : ";
		cin>>comp_name;
		cout<<"Enter Address : ";
		cin>>address;
		}
		
		void get1(){	
			cout<<"Name : "<<name<<endl;
			cout<<"Role : "<<role<<endl;
			cout<<"Salary : "<<salary<<endl;
		}
	
};
class D : public C{
	public:
	void set4(){
		cout<<"Enter Email : ";
		cin>>email;
		cout<<"Enter contact : ";
		cin>>contact;
		}
		void get2(){	
			cout<<"Name : "<<name<<endl;
			cout<<"Role : "<<role<<endl;
			cout<<"Salary : "<<salary<<endl;
			cout<<"ID : "<<id<<endl;
			cout<<"Expirience : "<<exp<<endl;
			cout<<"Company Name : "<<comp_name<<endl;
			cout<<"Address : "<<address<<endl;
			cout<<"Email : "<<email<<endl;
			cout<<"Contact : "<<contact<<endl;
		}
		
};
int main(){
	D obj;
	obj.set1();
	obj.set2();
	obj.set3();
	obj.get1();
	obj.set4();
	obj.get2();
	return 0;
}
