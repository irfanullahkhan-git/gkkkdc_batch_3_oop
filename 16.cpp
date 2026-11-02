#include<iostream>
using namespace std;

class Teacher{
	public:
		string name;
		int salary;
		
		Teacher(string n, int s){
			name = n;
			salary = s;
		}
	
};

class Department{
	public:
		string name;
		
		Department(string dep_name){
			name = dep_name;
		}
		
		void display(){
			cout<<"Departmenr Name: "<<name<<endl;
		}
};

int main(){
	Department * dptr;
	dptr = new Department("CS");
	
	Department * dptr2;
	dptr2 = new Department("Urdu");
	
	Teacher * t = new Teacher("Ali", 10000);
	
		
}
