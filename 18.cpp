#include<iostream>
using namespace std;

class Animal{
	public:
		void eat(){
			cout<<"eating...\n";
		}
};

class Dog : public Animal{
	public:
		void bark(){
			cout<<"barking...\n";
		}
};

int main(){
	Dog d;
	d.bark();
	d.eat();
}
