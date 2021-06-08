
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	char sym1, sym2;
	int count = 0;
	for (int i = 0; i < s1.length(); i++){
		sym1 = s1.at(i);
		sym2 = s2.at(i);
		if (sym1 != sym2) count++;
	}
	cout << count << endl;
}
