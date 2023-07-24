#include <iostream>
#include <iomanip>
using namespace std;
bool arr[1001] = {false};
int main(void)
{
	int n, k;
	bool first = true;
	
	cin >> n >> k;
	for(int i = 1; i <= k; i++)
	{
		for(int j = i; j <= n; j = j + i)
			arr[j] = !arr[j];
	}
	
	for(int i = 1; i <= n; i++)
		if(arr[i])
		{
			if(first)
				first = false;
			else
				cout << " ";
			cout << i;
		}

	return 0;	
}
