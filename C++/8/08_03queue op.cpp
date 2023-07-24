#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
    queue<int> q;

    for(int i = 0; i < 5; i++)
        q.push(i);
    while(!q.empty())
    {
        cout << "queue size " << q.size() << "; current queue front: " << q.front() << endl;
        q.pop();
    }

    return 0;
}
