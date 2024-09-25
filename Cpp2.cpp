//Q.No. 2
//Write a program to print the area of two rectangles having sides (4,5) and (5,8)
//respectively by creating a class named 'Rectangle' with a function named 'Area' 
//which returns the area. Length
#include<iostream>
using namespace std;
class Rectangle{
	int a, b;
 	public:
 	int Area(int x, int y){
 		a = x;
 		b = y;
 		return a*b; 
 	}
};
int main(){
 	Rectangle obj1, obj2;
 	cout<<"\nArea of first reactangle :";
 	cout<<obj1.Area(4,5);
 	cout<<"\nArea of first reactangle :";
 	cout<<obj2.Area(5,8);
 return 0;
}


