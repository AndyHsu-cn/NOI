#include <iostream>
#include <cstring>
using namespace std;
void half(float &a);
string half(string s);

int main(void)
{
	float f;
	string s, str;
	
	cin >> f >> s;
	cout << "Before half(): f = " << f << " s = " << s << "\n";
	half(f);
	str = half(s);
	cout << "After half(): f = " << f << " s = " << str << "\n";
	
	return 0;
}

void half(float &a)
{
	a /= 2;
}

string half(string s)
{
	char *str = new char[s.length()/2];
	
	for(int i = 0; i < s.length() / 2; i++)
		str[i] = s[i];
		
	return str;
}
