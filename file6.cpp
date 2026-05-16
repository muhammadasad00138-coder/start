#include <iostream>
using namespace std;
//struture
struct person {
	string name;
	int age;
	int cnic;
	string city;
	string address;
	string occupation;	  
	void showme() {    //function
		 cout << "Name:" << name << endl ;
		cout << "Age:" << age << endl;
		cout << "CNIC:" << cnic << endl;
		cout << "City:" << city << endl;
		cout << "Address:" << address << endl;
		cout << "Occupation:" << occupation << endl;
	}
};
int main() {
	person p[2];
	p[0].name = "M.Asad Mukhtar";
	p[0].age =19;
	p[0].cnic = 36502;
	p[0].city = "Sahiwal";
	p[0].address = "penda ally";
	p[0].occupation ="Student";
	
	p[1].name = "talha";	
	p[1].age = 19;	
	p[1].cnic = 36503;	
	p[1].city = "Vehari";
	p[1].address = "chak ala";
	p[1].occupation = "vella";

	for(int i=0; i<2; i++) {
		p[i].showme();
	}
	return 0;
}
