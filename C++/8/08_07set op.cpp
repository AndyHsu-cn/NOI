#include <iostream>
#include <iomanip>
#include <set>
using namespace std;
void print(set<int> &s);

int main(void)
{
    set<int> s;

    for(int i = 10; i > 0; i--)
        s.insert(10 * i);
    s.insert(75);
    s.insert(30);   // set will do nothing
    print(s);

    return 0;
}

void print(set<int> &s)
{
   set<int>::iterator it;
   for(it = s.begin(); it != s.end(); it++)
        cout << setw(5) << *it;
    cout << endl;
}
