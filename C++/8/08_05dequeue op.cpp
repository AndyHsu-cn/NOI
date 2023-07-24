#include <iostream>
#include <deque>
#include <iterator>
using namespace std;
void print(deque<int> dq);
int main(void)
{
    deque<int> dq;

    dq.push_front(1);
    dq.push_front(2);
    dq.push_front(3);
    dq.push_back(4);
    dq.push_back(5);
    dq.push_back(6);

    print(dq);

    return 0;
}

void print(deque<int> dq)
{
    deque<int>::iterator it;

    for(it = dq.begin(); it != dq.end(); it++)
        cout << *it << endl;
}


