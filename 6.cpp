#include<iostream>
using namespace std;

class Student{
	
	public:
	int roll_no;
	string name;
	
	Student(){
		cout<<"Object Created\n";
		roll_no = 0;
		name = "NotSetYet";
	}
};

int main(){
	Student s1, s2, s3, s4;
	cout<<s1.name;
}
