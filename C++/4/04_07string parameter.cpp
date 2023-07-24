#include <iostream>
#include <cstring>
using namespace std;
void convert(string &s);

int main(void)
{
	string s;
	
	cin >> s;
	convert(s);
	cout << s << endl;
	
	return 0;
}

void convert(string &s)
{
	for(int i = 0; i < s.length(); i++)
		if(islower(s[i]))
			s[i] = toupper(s[i]);
}
