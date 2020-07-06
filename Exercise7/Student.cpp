#include "Student.h"

void WriteFile(ofstream& fout, Student& a) {
	cout << "Enter your full name: ";
	getline(cin, a.name);
	cout << "How old are you?: ";
	cin >> a.age;
	cin.ignore(1);
	cout << "Enter your address :";
	getline(cin, a.address);
	fout.write(a.name.c_str(), a.name.size());
	fout.write((char*)(&a.age), sizeof(a.age));
	fout.write(a.address.c_str(), a.address.size());
}

void ReadFile(ifstream& fin, Student& a) {
	if (fin.good()) {
		fin.read((char*)a.name.c_str(), a.name.size());
		fin.read((char*)(&a.age), sizeof(a.age));
		fin.read((char*)a.address.c_str(), a.address.size());
	}
	cout << a.name << endl;
	cout << a.age << endl;
	cout << a.address << endl;
}