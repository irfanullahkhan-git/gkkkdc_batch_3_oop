#include <iostream>
using namespace std;

class Student{
	public:
		// properties or attributes
		string name;
		int roll_no;
		
		
};


int main(){
	int i;
	Student s;
	s.name = "ali";
	s.roll_no = 10;
	
	cout<<s.name;
	cout<<s.roll_no;
	
}
