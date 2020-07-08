#pragma once
#include <iostream>
#include <cstring>
#include <string>
#include <ctype.h>
#include <fstream>

using namespace std;

void ReadFile(ifstream& fin, string& str);
int* Solve(string str);
void print(int* res);