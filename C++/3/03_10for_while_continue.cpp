#include <iostream>
using namespace std;

int main(void)
{
	int n;
	int i = 1;
	
	cin >> n;
	for(; i <= n; i++)
	{
		if(i % 3 == 0)
			continue;
		cout << i << endl;
	}
	
#if 0 
	while(i <= n)
	{
		if(i % 3 == 0)
			continue;		// will cause infinite loop 
		cout << i << endl;
		i++;
	}
#endif	

	return 0;
}
