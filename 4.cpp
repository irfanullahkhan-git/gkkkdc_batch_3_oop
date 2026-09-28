#include<iostream>
using namespace std;

class Student{
	int roll_no;
	string name;

	//setter and getter;
	public:
	 void setName(string n){
		 if(n.size() > 2){
		 	name = n;
		 }else{
		 	name="";
		 	cout<<"Invalid Name\n";
		 }
	 }
	 
	 void setRollNo(int rn){
	 	if(rn > 0 && rn < 1000){
	 		roll_no = rn;
		 }else{
		 	roll_no = 0;
		 	cout<<"Invalid Roll No\n";
		 }
	 }
	 
	 string getName(){
	 	return name;
	 }	
	 
	 int getRollNo(){
	 	return roll_no;
	 }
};

int main(){
	
	Student s1;
	s1.setName("Ali");
	s1.setRollNo(2000);
	
	cout<<"\n\n";
	cout<<"Name: "<< s1.getName()<<endl;
	cout<<"Roll No: "<<s1.getRollNo();
	
}
