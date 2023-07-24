#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <iterator>
using namespace std;
void print(map<string, int> &m);

int main(void)
{
    map<string, int> cnt;
    string s;
    int num;

    cin >> num;
    for(int i = 0; i < num; i++)
    {
        cin >> s;
        cnt[s]++;
    }
    print(cnt);
    cnt.insert(make_pair("Tsing Hua", 3));
    print(cnt);

    return 0;
}

void print(map<string, int> &m)
{
    map<string, int>::iterator it;

    for(it = m.begin(); it != m.end(); it++)
        cout << (*it).first << "\t" << (*it).second << endl;
}
