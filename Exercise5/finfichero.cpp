#include "finfichero.h"
void finfichero(unsigned long long n, string nameFile) {
	ifstream fin(nameFile.c_str());
	if (fin.fail()) {
		cout << "Occured errow when open file!";
		return;
	}
	if (fin.is_open()) {
		char tmp;
		int i = -1;
		int cnt(0);
		if (n == 0) return;
		else if (n == 1) {
			string tmp;
			getline(fin, tmp);
			cout << tmp;
		}
		else {
			while (true) {
				fin.seekg((i), ios_base::end);
				i -= 1;
				fin.get(tmp);
				if (tmp == '\n') {
					++cnt;
				}
				if (cnt >= 2 * n) break;
			}
			for (int i = 0; i < n; ++i) {
				string getlast;
				getline(fin, getlast);
				cout << getlast << endl;
			}
		}
	}
}

