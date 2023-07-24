#include <iostream>
using namespace std;
long long sum(int arr[], int size);
int main(void)
{
	int size;
	int * arr;
	
	cin >> size;
	arr = new int[size];
	for(int i = 0; i < size; i++)
		cin >> arr[i];
	cout << "sum = " << sum(arr, size) << endl;
	
	return 0;
}

long long sum(int arr[], int size)
{
	long long sum = 0LL;
	for(int i = 0; i < size; i++)
		sum += arr[i];
		
	return sum;
}
