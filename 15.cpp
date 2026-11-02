#include<iostream>
using namespace std;

class Engine{
	public:
		int power;
		
		Engine(int p){
			power = p;
			cout<<"Engine created\n";
		}
		
		~Engine(){
			cout<<"Engine destroyed\n";
		}
	
};
class Car{
	public:
		int mfg_year;
		Engine eng;
		
		Car(int mf_yr, int pow): eng(pow){
			mfg_year = mf_yr;
			cout<<"Car created\n";
		}
		
		~Car(){
			cout<<"Car destroyed\n";
		}
	
};

int main(){
	Car c1(2020, 1600);
	
}
