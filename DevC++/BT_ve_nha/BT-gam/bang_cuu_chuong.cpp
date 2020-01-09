#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float i, S, n;
	cin >> n;
	S = 0;
	for (i = 1; i <= n; i++) {
		S = S + 1 / (i*i*i);
	}
	
	
	float bien = 1.1234569809807;
	
	cout << bien << endl;

	
	
	//lay den chu so thap phan thu may
		cout << setiosflags(ios::fixed);
	cout << setprecision(3);

	cout << bien << endl;
	return 1;
}
