#pragma once
#ifndef Student_h
#define Student_h
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <iomanip>
#include <fstream>

using namespace std;

struct Student {
	string name;
	int age;
	string address;

};

void WriteFile(ofstream& fout, Student& a);
void ReadFile(ifstream& fin, Student& a);

#endif