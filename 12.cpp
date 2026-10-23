#include<iostream>
using namespace std;

class Processor{
	public:
		int speed;
		
		Processor(int sp){
			speed = sp;
		}
		
		void displayProcessor(){
			cout<<"Processor Speed: "<<speed<<" GHz\n";
		}
};

class RAM{
	public:
		int memory;
		
		RAM(int mem){
			memory = mem;
		}
		
		void displayMemory(){
			cout<<"Memory: "<<memory<<" GB\n";
		}
};

class HardDrive{
	public:
		int storage;
		
		HardDrive(int st){
			storage = st;
		}
		
		void displayHardDrive(){
			cout<<"Storage: "<<storage<<" GB\n";
		}
};

class Computer{
	public:
		string model;
		
		Processor pro;
		RAM ra;
		HardDrive hdd;
		
		Computer(string mo, int sp, int mem, int st): pro(sp), ra(mem), hdd(st){
			model = mo;
		}
		
		void displayComputer(){
			cout<<"Model: "<<model<<"\n";
			
			pro.displayProcessor();
			ra.displayMemory();
			hdd.displayHardDrive(); 
		}
};


int main(){
	Computer c1("HP", 5, 16, 128);
	c1.displayComputer();	
}
