#include<iostream>
using namespace std;


class Rectangle{
	
	int length;
	int width;
	
	public:
		void setLength(int len){
			if(len > 0){
				length = len;
			}else{
				length = 0;
			}
		}
		
		void setWidth(int wid){
			if(wid > 0){
				width = wid;
			}else{
				width = 0;
			}
		}
		
		int getLength(){
			return length * 12;
		}
		
		int getWidth(){
			return width * 12;
		}
};


int main(){
	Rectangle rect1;
	rect1.setLength(10);
	rect1.setWidth(5);
	
	int area = 0;
	area = rect1.getLength() * rect1.getWidth();
	cout<<"Area of Rectangle: "<< area <<" square inches";
	
	
}
