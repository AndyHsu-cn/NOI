#include <iostream>
using namespace std;

int main(void)
{
	int num;
	
	cin >> num;
	for(int i = 1; i <= num; i++)
	{
		if(i % 2 == 0)
			continue;
		cout << i << endl;
	}
	
	return 0;
}
