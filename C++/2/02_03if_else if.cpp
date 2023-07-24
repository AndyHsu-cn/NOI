#include <iostream>
using namespace std;

int main(void)
{
	int score;
	
	cin >> score;
	if(score >= 60)
		if(score < 70)
			cout << "fair" << endl;
		else
			if(score < 80)
				cout << "average" << endl;
			else
				if(score < 90)
					cout << "good" << endl;
				else
					cout << "excellent" << endl;
	else
		cout << "failed!" << endl;
		
	return 0;
}
