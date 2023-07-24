#include <iostream>
#define PASS_LINE 60
using namespace std;
int count(int arr[], int size);

int main(void)
{
	int n;
	int * arr;
	
	cin >> n;
	arr = new int[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	cout << "Failed total: " << count(arr, n) << endl;
	delete[] arr;
	
	return 0;
}

int count(int arr[], int size)
{
	int times = 0;
	for(int i = 0; i < size; i++)
		if(arr[i] < PASS_LINE)
			times++;
	return times;
}
