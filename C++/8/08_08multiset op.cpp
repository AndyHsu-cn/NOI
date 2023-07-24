#include <iostream>
#include <set>
#include <iomanip>
using namespace std;
void print(multiset<int> &ms);

int main(void)
{
    multiset<int> ms;

    for(int i = 10; i > 0; i--)
        ms.insert(10 * i);
    ms.insert(80);
    print(ms);

    return 0;
}

void print(multiset<int> &ms)
{
    multiset<int>::iterator it;

    for(it = ms.begin(); it != ms.end(); it++)
        cout << setw(5) << *it;
    cout << endl;
}
