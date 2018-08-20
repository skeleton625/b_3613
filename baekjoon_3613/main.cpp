#include <iostream>
#include <string.h>
using namespace std;

char i1[110],r[300];
int a,b,c, i;
int main() {
	cin >> i1;
	if (i1[0] == '_' || i1[strlen(i1)-1] == '_' || (i1[0] >= 65 && i1[0] <= 90)) cout << "Error!";
	else {
		for (i = 0; i < strlen(i1); i++) {
			if (i1[i] == '_') {
				r[c++] = i1[++i] - 32;
				if (i1[i] == '_' || (i1[i] >= 65 && i1[i] <= 90)) b++;
				a++;
			} else if (i1[i] >= 65 && i1[i] <= 90) {
				r[c++] = '_';
				r[c++] = i1[i] + 32;
				b++;
			} else if (i1[i] > 96 && i1[i] < 123) r[c++] = i1[i];
			else {
				a++;
				b++;
			}
		}
		if (a*b == 0) cout << r;
		else cout << "Error!";
	}
	return 0;
}