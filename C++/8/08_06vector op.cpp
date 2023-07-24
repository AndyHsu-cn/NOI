#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
void print(vector<int> &v);
int main(void)
{
    vector<int> v;
    vector<int> v2;
    int arr[5] = {10, 20, 30, 40, 50};

    for(int i = 0; i < 5; i++)
        v.push_back(i + 1);
    print(v);
    v.insert(v.begin()+2, 100);
    print(v);
    v2 = v;
    v2.insert(v2.begin()+2, arr+1, arr+3);
    v2.swap(v);
    print(v2);

    print(v);
    v.erase(v.begin() + 1, v.begin() + 4);
    print(v);

    return 0;
}

void print(vector<int> &v)
{
   vector<int>::iterator it;
   for(it = v.begin(); it != v.end(); it++)
        cout << setw(5) << *it;
    cout << endl;
}
