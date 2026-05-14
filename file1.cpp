#include <iostream>
using namespace std;
struct person {
	string name;
	string fatherName;
	int age;
	int cnic;
     string regNo;
	string universty;
	string department;
	int session;
	string degree;
};
int main() {
	person p1;
	p1.name = "M Asad Mukhtar";
	p1.fatherName = "Mukhtar Ahmad";
	p1.age = 19;
	p1.cnic = 36502;
	p1.regNo = "2025-cs-583";
	p1.universty = "UET KSK";
	p1.department = "CS";
	p1.session = 2025;
	p1.degree = "BSCS";

	cout << "Name:" << p1.name << endl;
	cout << "Father Name:" << p1.fatherName << endl;
	cout << "Age:" << p1.age << endl;
	cout << "CNIC:" << p1.cnic << endl;
	cout << "Reg no:" << p1.regNo << endl;
	cout << "Universty:" << p1.universty << endl;
	cout << "Department:" << p1.department << endl;
	cout << "Session:" << p1.session << endl;
	cout << "Degree:" << p1.degree << endl;
	return 0;
}