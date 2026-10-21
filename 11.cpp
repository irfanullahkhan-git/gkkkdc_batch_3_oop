#include<iostream>
using namespace std;

class Engine{
	public:
	int power;
	string transmission;
	
	Engine(){
		power = -1;
	}
	
	Engine(int p, string trans){
//		cout<<"\n** Engine Starts Here **";
		power = p;
		transmission = trans;
//		cout<<"\n** Engine Ends Here **";
	}
	
	void displayEngine(){
		cout<<"Enginer Power: "<<power<<" - Transmission: "<<transmission<<endl<<endl;
	}
	
};

class Car{
	public:
		
	string model;
	int mfg_year;
	Engine eng;
	 
	
//	Car(string m, int m_y, int pow, string tran): model(m), mfg_year(m_y), engine(pow, tran){
//		
//	}

	Car(string m, int m_y, int pow, string tran): eng(pow, tran){
//		cout<<"\n ** Car Starts Here **";
		model = m;
		mfg_year = m_y;
//		cout<<"\n ** Car Ends Here **";
	}
	
	Car(string m, int m_y){
//		cout<<"\n ** Car Starts Here **";
		model = m;
		mfg_year = m_y;
//		cout<<"\n ** Car Ends Here **";
	}
		
	void displayCar(){
		cout<<"Model: "<<model<<" - Mfg Year: "<<mfg_year<<endl;
		if(eng.power > 0){
			eng.displayEngine();	
		}
	}
	
};




int main(){
	Car c1("Toyota Yaris", 2020, 1000, "Manual");
	Car c2("Toyota Vitz", 2020, 1300, "Automatic");
	
	Car ec("Tesla", 2026);
	
	c1.displayCar();
	c2.displayCar();
	
	ec.displayCar();
	
}
