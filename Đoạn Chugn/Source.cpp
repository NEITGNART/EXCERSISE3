#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vector<int> > vii;
typedef long long ll;
const int INF = 0x3f3f3f3f;
#define PB push_back
#define F first
#define S second
#define MP make_pair
#define REP(i, a, b) for (int i = a; i < b; ++i)

int F[1000][1000];

int main(void) {
	string str1, str2;
	cin >> str1 >> str2;
	memset(F, 0, sizeof(F));
	int kmax = 0;
	F[0][0] = (str1[0] == str2[0]) ? 1 : 0;
	REP(i, 1, str1.size()) {
		REP(j, 1, str2.size()) {
			if (str1[i] == str2[j]) F[i][j] = F[i - 1][j - 1] + 1;
			else F[i][j] = 0;
			kmax = max(kmax, F[i][j]);
		}
	}
	cout << kmax;
	return 0;
}