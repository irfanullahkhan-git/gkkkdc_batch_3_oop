#include<iostream>
using namespace std;


int main(){
	int num = 10;
	int * ptr;
	ptr = &num;
	
	cout<<*ptr<<endl;
	
	int &ref = num;
	cout<<ref << endl;	
	
	ref++;
	cout<<num<< endl;
	
	cout<<*ptr<<endl;
	
	int num2 = 20;
	ptr = &num2;
	cout<<*ptr<<endl;
	
}
