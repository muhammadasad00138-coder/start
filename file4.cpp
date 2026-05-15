#include <iostream>
using namespace std;
struct Ch {
	string name;
	int cnic;
	int regNo;
	string course;
	int phoneNo;
	string address;

	void myInfo() {
		cout << "Name:" << name << endl;
		cin >> name;
		cout << "CNIC:" << cnic << endl;
		cin >> cnic;
		cout << "Reg No:" << regNo << endl;
		cin >> regNo;
		cout << "Course:" << course << endl;
		cin >> course;
	 cout << "Phone No:" << phoneNo << endl;
	cin >> phoneNo;
	cout << "Address:" << address << endl;
	cin >> address;
}
	void display() {
		cout << "Name: " << name << endl;
		cout << "CNIC:"  << cnic << endl;
		cout << "Reg No:"  <<  regNo << endl;
		cout << "Course:" << course << endl; 
		cout << "Phone No:" << phoneNo <<   endl;
		cout << "Address:"<< address <<  endl;

	}
};
int main()
{
	  Ch c2;
	  c2.myInfo();
	 c2.display();
	   return 0;
}