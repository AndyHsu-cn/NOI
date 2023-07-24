#include <iostream>
#define SIZE 5
using namespace std;
void print_reverse(int index);
void print(int index);
int ar[SIZE] = {1, 2, 3, 4, 5};

int main(void)
{
	cout << "reverse:" << endl;
	print_reverse(SIZE - 1);
	cout << "original:" << endl;
	print(SIZE-1);
	
	return 0;
}

void print_reverse(int index)
{
	cout << ar[index] << endl;
	if(index > 0)
		print_reverse(index-1);	
}

void print(int index)
{
	if(index > 0)
		print(index-1);	
	cout << ar[index] << endl;
}
