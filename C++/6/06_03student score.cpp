#include <iostream>
#include <iomanip>
using namespace std;

int sum(int arr[], int len);
float average(int arr[], int len);
int main(void)
{
	int * arr;
	int len;
	float avg;
	
	cin >> len;
	arr = new int[len];
	for(int i = 0; i < len; i++)
		cin >> arr[i];
	cout << "sum = " << sum(arr, len) << endl;
	cout << "average = " << fixed <<setprecision(2) << average(arr, len) << endl;
	
	return 0;
}

int sum(int arr[], int len)
{
	int sum = 0;
	
	for(int i = 0; i < len; i++)
		sum += arr[i];
		
	return sum;
}

float average(int arr[], int len)
{
	return (float)sum(arr, len) / len;
}
