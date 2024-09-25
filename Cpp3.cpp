//Q3.Write a C++ program to create a class Student with data members Roll_No,
//Student_Name, Class. Write
//member functions to accept and display Student information also display count of students. (Use Static
//data member and Static member function)
#include<iostream>
using namespace std;
class Student{
 private:
 int Roll_No;
 char Class;
 string Student_Name;
 static int studentCount;
 public:
 void set(int rollNum, string name, char clas){
 Roll_No = rollNum;
 Student_Name = name;
 Class = clas;
 ++studentCount;
 }
 void display(){
 cout<<"\nStudent name : "<<Student_Name;
 cout<<"\nRoll Number : "<<Roll_No;
 cout<<"\nClass : "<< Class;
 }
 static void totalNum(){
 cout<<"\nTotal Students :"<<studentCount;
 }
};
int Student::studentCount = 0;
int main(){
 Student obj1, obj2, obj3;
 obj1.set(21, "Rohit Kshirsagar", 'A');
 obj2.set(22, "Rohan Dalal", 'B');
 obj3.set(23, "Jack", 'C');
 obj1.display();
 obj2.display();
 obj3.display();
 Student::totalNum();
 return 0;
}
