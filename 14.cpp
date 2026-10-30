#include<iostream>
using namespace std;

class Student{
	public:
		int roll_no;
		string name;
		
		Student(){
			roll_no = 0;
			name = "N/A";
			cout<<"Default Constructor called\n";
		}
		
		Student(int rn, string n){
			roll_no = rn;
			name = n;
			
			cout<<"Argumented Constructor called\n";
		}
		
		~Student(){
			cout<<"Name: "<<name<<" - Destructor Called\n";
		}
};

int main(){
	Student s1;
	s1.name = "Ali";
	
	Student * sptr;
	sptr = new Student(); 
	sptr->name = "Aslam";
	
	delete sptr;
	
	sptr = new Student();
	sptr->name = "Inam";
	delete sptr;

	cout<<"Main function ends here\n"; 
}
