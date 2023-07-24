#include <iostream>
#include <string>
using namespace std;
int count(string str);

int main(void)
{
	string str;
	
	getline(cin, str);
	cout << "Word total: " << count(str) << "\n";
	
	return 0;
}

int count(string str)
{
	int num, index = 0;
	char space = ' ';
	
	int len = str.length();
	if(!len)
		num = 0;
	else
	{
		num = 1;
		while((index = str.find(space, index)) != string::npos)
		{
			while(str[++index] == space)
				;
			++num;
		}
	}
	
	return num;
}
