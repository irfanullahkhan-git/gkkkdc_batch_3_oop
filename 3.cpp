#include<iostream>
using namespace std;

class Student{
	public:
		string name;
		int roll_no;
		int marks;
	
};

int main(){
	
	Student s1, s2;
	
	s1.name = "Ali";
	s1.roll_no = 10;
	s1.marks = 70;
	
	cout<<s1.name<<endl;
	cout<<s1.roll_no<<endl;
	cout<<s1.marks<<endl;
	
	s2.name = "Aslam";
	s2.roll_no = 11;
	s2.marks = 60;
	
	cout<<s2.name<<endl;
	cout<<s2.roll_no<<endl;
	cout<<s2.marks<<endl;
	
	int total_marks = s1.marks + s2.marks;
	cout<<"Total Marks: "<<total_marks;
	
	
}
