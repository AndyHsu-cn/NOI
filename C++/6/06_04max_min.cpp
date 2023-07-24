#include <iostream>
#include <iomanip>
using namespace std;
void max_min(int arr[], int len, int &max, int &min); 
int main(void)
{
	int * arr;
	int len;
	int max, min;
	
	cin >> len;
	arr = new int[len];
	for(int i = 0; i < len; i++)
		cin >> arr[i];
	max_min(arr, len, max, min);
	cout << "max = " << max << " ; min = " << min << endl;
	
	return 0;
}

void max_min(int arr[], int len, int &max, int &min)
{
	max = min = arr[0];
	for(int i = 1; i < len; i++)
	{
		if(arr[i] > max)
			max = arr[i];
		if(arr[i] < min)
			min = arr[i];
	}
}
