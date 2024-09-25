//Q.No 1
//Student Database Management System
//File handling has been effectively used for each feature of this project
//Operation
//1. Add Records
//2. List Records
//3. Modify Records
//4. Delete Records
#include<iostream>
#include<fstream>
using namespace std;
void addRecords(){
 	string name;
 	ofstream out;
 	cout<<"\nEnter Name : ";
 	out.open("Student_Database_Management_System.txt");
 	cin>>name;
 	int rollNum;
 	cout<<"\nEnter the rollNum : ";
 	cin>>rollNum;
 	char devision;
 	cout<<"\nEnter the devision : ";
 	cin>>devision;
 	out<<"\n"<<name;
 	out<<"\n"<<rollNum;
 	out<<"\n"<<devision;
 	out.close();
}
void listRecords(){
 
 	ifstream in;
 	in.open("Student_Database_Management_System.txt");
 	string line;
 	if(in.is_open()){
 		while(getline(in, line))
 		{
 		cout<<line<<endl;
 		}
 		in.close();
 	}
 	else{
 		cout<<"\nFile is not open";
 	}
}
void modifyRecords(){
 	ofstream out;
 	ifstream in;
 	out.open("Student_Database_Management_System.txt", ios::app);
 	string line;
 	while(true){
 		getline(cin, line);
 		if(line == "quit"|| line == "Quit" ||line =="QUIT"){
 			break;
 		}
 		else{
 			out<<line;
 		}
 	}
 }

int main(){
int choice;
while(true){
 	cout<<"\n-----------------\n";
 	cout<<"\n Enter the option ";
 	cout<<"\n1. Add Records\n";
 	cout<<"\n2. List Records\n";
 	cout<<"\n3. Modify Records\n";
 	cout<<"\n4. Delete Records\n";
 	cin>>choice;
 	switch(choice){
 case 1:
 addRecords();
 break;
 case 2:
 listRecords();
 break;
 case 3:
 modifyRecords();
 break;
 default:
 cout<<"\entered wrong option";
 break;
 }
 
 } 
 return 0;
}
