#include <iostream>
#include <string>
using namespace std;

string min_str(string str1, string str2);

int main(void)
{
	string s1, s2, s3;
	
	getline(cin, s1);
	getline(cin, s2);
	getline(cin, s3);
	cout << "Min string: " << min_str(min_str(s1, s2),s3) << endl;
	
	return 0;
}

string min_str(string str1, string str2)
{
	if(str1 < str2)
		return str1;
	else
		return str2;
}
