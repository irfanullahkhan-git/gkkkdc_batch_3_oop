#include<iostream>
using namespace std;

class Animal{
	public:
		virtual void speak(){
			cout<<"Some Sound!\n";
		}
};

class Dog : public Animal{
	public:
		void speak(){
			cout<<"Woof Woof\n";
		}
};

class Cat : public Animal{
	public:
		void speak(){
			cout<<"Mewoo Mewoo\n";
		}
};

class Ant: public Animal{
	
};


int main(){
	
	Animal * a1;
	a1 = new Animal();
	a1->speak();	
	delete a1;
	
	a1 = new Dog();
	a1->speak();
	
	a1 = new Cat();
	a1->speak();
	
	a1 = new Ant();
	a1->speak();
}
