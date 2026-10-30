#include<iostream>
using namespace std;


class Student{
	public:
		int roll_no;
		string name;
		
		Student(){
			cout<<"Constructor is being called\n";
		}
		
		~Student(){
			cout<<"Name: "<<name<<" - Destructor is being called\n";
		}
		
		void print(){
			cout<<"Name: "<<name<<" Roll No: "<<roll_no<<endl;
		}
	
};


void testFunction(){
	
	cout<<"test function start here\n";
	Student s;
	s.name = "Aslam";
	s.roll_no = 10;
	s.print();
	cout<<"test function ends here\n";

}

int main(){
	cout<<"main function starts here\n";
	testFunction();
	Student s;
	s.name = "Ali";
	s.roll_no = 11;
	s.print();
	
	cout<<"main function ends here\n";
}
