#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	stack<int> s;

	for(int i = 0; i < 5; i++)
		s.push(i);
	cout << "stack size = " << s.size() << endl;
	while(!s.empty())
	{
		cout << "current top value = " << s.top() << endl;
		s.pop();
	}

	return 0;
}
