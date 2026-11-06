/*
A car company wants to build a simple Car system in C++ 
using object-oriented programming.
Create three classes: Engine, Driver, and Car. 
The Engine and Driver classes should each print a message when an object is created
and when it is destroyed,
and Driver should also store a name. 
The Car class should contain an Engine as a member object,
so the engine is created and destroyed together with the car (composition),
and it should hold a pointer to a Driver that is created outside the car, 
so the driver stays alive even after the car is destroyed (aggregation).
In main(), create a driver first, then create a car inside a separate block 
and pass it the driver’s address.
When the block ends, show that the car and its engine are destroyed
while the driver still exists until the program finishes.
*/

#include<iostream>
using namespace std;

class Driver{
	public:
	string name;
	
	Driver(string s){
		name = s;
		cout<<"Driver created\n";
	}
	
	~Driver(){
		cout<<"Driver destoryed\n";
	}
};

class Engine{
	public:
		Engine(){
			cout<<"Engine created\n";
		}
		~Engine(){
			cout<<"Engine destroyed\n";
		}
};

class Car{
	public:
		Engine eng;
		Driver * dptr;
		
		Car(Driver *dpttr): eng(){
			dptr = dpttr;
			cout<<"Car created\n";
		}
		
		~Car(){
			cout<<"Car destroyed\n";
		}
};

int main(){
	
	Driver * d = new Driver("Ali");
	Car * c = new Car(d);
	
	delete c;
}













