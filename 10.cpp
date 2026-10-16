#include<iostream>
using namespace std;

class Student{
	public:
		int roll;
		string name;
		string college;
		string college_address;
		string grade;
		
		Student(){
			roll = 0;
			name = "";
		}
		
		Student(int r, string n, string c, string ca, string g){
			roll = r;
			name = n;
			
			college = c;
			college_address = ca;
			grade = g;
		}
		
		Student(Student &st){
			roll = st.roll;
			name = st.name;
			college = st.college;
			college_address = st.college_address;
			grade = st.grade;
		}
		
		
		
		void print(){
			cout<<"Roll: "<<roll<<"\t Name: "<<name<<endl;
			cout<<"College"<<college<<" "<<college_address<<endl;
			cout<<"Class: "<<grade<<endl;
		}
};

int main(){
	Student s1;
	Student s2(10, "Ali", "Govt Khushal Khan Khattak Degree Colleg", "Akora Khattak, Nowshera", "CS-III");
	Student s3(11, "Umar", "Govt Khushal Khan Khattak Degree Colleg", "Akora Khattak, Nowshera", "CS-III");
	Student s4(12, "Hamza", "Govt Khushal Khan Khattak Degree Colleg", "Akora Khattak, Nowshera", "CS-III");

	
	Student s5 = s2;
	s5.roll = 13;
	s5.name = "Saqib";
	s5.print();	
	
	
	Student * sptr = &s2;
	sptr = &s3;
	sptr->print();
	
}
