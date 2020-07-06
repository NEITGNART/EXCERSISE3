#pragma once
#ifndef Differ_h
#define Differ_h


#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <iomanip>
#include <fstream>

using namespace std;
void ReadTwoFile(ifstream& fin1, ifstream& fin2, vector<string>& str1, vector<string>& str2);
void CompareString(vector <string> str1, vector<string> str2);

#endif
