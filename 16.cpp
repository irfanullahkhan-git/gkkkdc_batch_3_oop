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
		
		void display(){
			cout<<"Teacher Name: "<< name<<" Salary: "<< salary<<" \n";
		}
		
		~Teacher(){
			cout<<"Teacher: "<<name<<" has been destroyed.\n";
		}
	
};

class Department{
	public:
		string name;
		Teacher * t;
		
		
		Department(string dep_name, Teacher * tptr){
			name = dep_name;
			t = tptr;
		}
		
		void display(){
			cout<<"Department Name: "<<name<<endl;
			cout<<"Teacher Name: "<< t->name<<" Salary: "<<t->salary<<" \n";
		}
		
		~Department(){
			cout<<"Department: "<<name<<" has been destroyed.\n";
		}
};

int main(){
//	Teacher tea("Ali", 20000);
//	Teacher * tp = &tea;
//	
//	Department d1("CS", tp);
//	d1.display();
//	
	
	Teacher * tea; // stack
	 
	tea = new Teacher("Ali", 20000); // heap
	
	Department * d1; // stack
	d1 = new Department("CS", tea); // heap
	
	d1->display();

	delete d1;	
	
	tea->display();
	
	cout<<"Main function ends here\n";
}
