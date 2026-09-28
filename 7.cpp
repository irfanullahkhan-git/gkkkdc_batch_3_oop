#include<iostream>
using namespace std;


class Student{
	int roll_no;
	string name;
	string address;
	
	public:
		Student(){
			roll_no = 0;
			name = "";	
		}
		Student(int rn, string n){
			roll_no = rn;
			name = n;	
		}
		
		Student(string new_name, int rn){
			roll_no = rn;
			name = new_name;
		}
		
		Student(string new_name, int rn, string add){
			roll_no = rn;
			name = new_name;
			address = add;
		}
		
		void printDetails(){
			cout<<"Name: "<<name<<"\tRoll No: "<<roll_no<<"\t Address: "<<address<<endl;
		}
		
};

int main(){
	
	Student s1(10, "Ali");
	s1.printDetails();
	
	Student s2("Ahmad", 11);
	s2.printDetails();
	
	Student s3("Abdullah", 12, "Nowshera");
	s3.printDetails();
	
	Student s4;
	s4.printDetails();
	
	
}
