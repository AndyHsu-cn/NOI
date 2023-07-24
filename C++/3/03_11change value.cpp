#include <iostream>
using namespace std;

int main(void)
{
	int n;
	int times = 0;
	
	cin >> n;
	while(n > 1)
	{
		if(n % 2 == 1)
			n = 3 * n + 1;
		else
			n /= 2;
		times++;
	}
	cout << "times = " << times << endl; 
	
	return 0;	
}
