#include <iostream>
#include <string>
#include <queue>
#define MAX_SIZE 20
using namespace std;
struct book
{
    string name;
    double val;
};
bool operator < (const book &book1, const book &book2);
int main(void)
{
    priority_queue<book> pq;
    struct book books[MAX_SIZE];

    for(int i = 0; i < 3; i++)
    {
        getline(cin, books[i].name);
        cin >> books[i].val;
        cin.get();
        pq.push(books[i]);
    }
    while(!pq.empty())
    {
        cout << "current priority queue top value: " << pq.top().val << endl;
        pq.pop();
    }

    return 0;
}

bool operator < (const book &book1, const book &book2)
{
    if(book1.val < book2.val)
        return true;
    else
        return false;
}
