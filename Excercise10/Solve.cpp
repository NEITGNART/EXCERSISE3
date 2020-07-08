 #include "Solve.h"

void ReadFile(ifstream& fin, string& str) {
	str = "";
	while (fin.good()) {
		string tmp;
		getline(fin, tmp);
		str += tmp;
	}
}

int* Solve(string str) {
	int* res = new int[26];
	for (int i = 0; i < 26; ++i) res[i] = 0;

	for (size_t i = 0; i < str.size(); ++i) {
		if (isalpha(str[i])) {
			str[i] = tolower(str[i]);
		}
		res[str[i] - 'a']++;
	}
	return res;
}
void print(int *res) {
	for (int i = 0; i < 26; ++i) {
		if (res[i]) {
			cout << char(i + 97) << ":["; for (int j = 0; j < res[i]; ++j) cout << "#"; cout << "]" << endl;
		}
	}
}