#include <iostream>
using namespace std;

class Car{
	
	public:
		string model;
		int make;
	
		void start(){
			cout<<"Model: "<< model <<" Make: "<< make <<endl;
			cout<<"Brooom Brooom\n";
		}
		
};

int main(){
	Car c1;
	c1.model = "Honda";
	c1.make = 2020;
	c1.start();
	
	Car c2;
	c2.model = "Toyota";
	c2.make = 2010;
	
	c2.start();
}
