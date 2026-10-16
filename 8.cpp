#include<iostream>
using namespace std;

class Book{
	int ISBN;
	string title;
	int price;
	
	public:
		Book(int isb, int p){
			ISBN = isb;
			price = p;
		}
	
		
		void printBook(){
			cout<<"ISBN: "<<ISBN<<" - Title: "<<title<<"Price: "<<price<<endl;
		}
};

int main(){
	int temp_isb, temp_price;
	string temp_title;
	
	int isb, pr;
	
	
	
	cin>>temp_isb;
	cin>>temp_price;
	
	if(temp_isb > 1000){
		isb = temp_isb;
		pr = temp_price;
	}else{
		pr = temp_isb;
		isb = temp_price;
	}
	
	Book b1(isb, pr);
	b1.printBook();
	
	
	
}
