#include <iostream>
using namespace std;
void print_very_good(void);

int main(void)
{
	int n;
	
	cin >> n;
	if(n % 10 == 0)
		print_very_good();
	
	return 0;
}

void print_very_good(void)
{
	for(int i = 0; i < 3; i++)
		cout << "very good!" << endl;
}
