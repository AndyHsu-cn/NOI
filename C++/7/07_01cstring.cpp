#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	char s1[100] = "hello world!";
	char s2[100];
	
	cin >> s2;
	cout << "strlen(s2) = " << strlen(s2) << ": " << s2 << endl;
	s1[7] = '\0';
	cout << "strlen(s1) = " << strlen(s1) << ": " << s1 << endl;
	
	return 0;
}
