#include <iostream>
#include <iomanip>
#define MAX 100
using namespace std;
int a[MAX+1][MAX+1] = {1};

int main(void)
{
	int n;
	int line = 0, row = 0;
	int current = 1;
	
	cin >> n;
	while(current < n * n)
	{
		// right
		while(row + 1 < n && !a[line][row+1])
			a[line][++row] = ++current;
		
		// down
		while(line + 1 < n && !a[line+1][row])
			a[++line][row] = ++current;
		
		// left
		while(row - 1 >= 0 && !a[line][row-1])
			a[line][--row] = ++current;
		
		// up
		while(line - 1 >= 0 && !a[line-1][row])
			a[--line][row] = ++current;
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
			cout << setw(5) << a[i][j];
		cout << endl;
	}
		
	
	return 0;
}
