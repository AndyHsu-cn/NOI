#include <iostream>
using namespace std;

int main(void)
{
	int month;
	int season = 0;
	
	cin >> month;
	if(month>=3 && month <=5)
		season = 1;
	else if(month >= 6 && month <= 8)
		season = 2;
	else if(month >= 9 && month <= 11)
		season = 3;
	else if(month>=1 && month<=2 || month==12)
		season = 4;
	
	switch(season)
	{
		case 1: cout << "spring!" << endl; 
			break;
		case 2: cout << "summer!" << endl;
			break;
		case 3:	cout << "autumn!" << endl;
			break;
		case 4: cout << "winter!" << endl;
			break;
		default: cout << "month input error!" << endl;
			break;
	}
	
	return 0;
}
