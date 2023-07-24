#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;

void print(list<int> T);
int main(void)
{
	list<int> list1;
	list<int> list2(5, 2);	// five 2
	int arr[5] = {1, 2, 3, 4, 5};
	
	list2.push_back(7);
	list2.push_front(5);
	print(list2);
	
	list1.insert(list1.begin(), arr, arr+3);
	print(list1);
	
//	list1.splice(list1.begin(), list2);
//	print(list1);
//	print(list2);
	
	list1.sort();
	list2.sort();
	list1.merge(list2);
	print(list1);
	print(list2);
	list1.unique();
	print(list1);
	
	return 0;
}

void print(list<int> T)
{
	list<int>::iterator it;

	for(it = T.begin(); it != T.end(); it++)
		cout << *it << endl;
	cout << endl;
}
