#include <iostream>
using namespace std;

int main(void)
{
	int n;
	
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		if(i == 5)
			break;
		cout << i << "\n";	// can't debug while using endl instead of "\n"

	}
	return 0;
}
