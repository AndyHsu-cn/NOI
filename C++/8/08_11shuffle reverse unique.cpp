#include <iostream>
#include <iomanip>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;
void print(vector<int> &vec);
void my_unique(vector<int> &vec);

int main(void)
{
    vector<int> vec;
    int arr[5] = {4, 8, 12, 16, 20};

    for(int i = 0; i < 10; i++)
        vec.push_back(i + 1);
    cout << setw(20) << "Original: ";
    print(vec);
    reverse(vec.begin(), vec.end());
    cout << setw(20) << "After reverse: ";
    print(vec);
    random_shuffle(vec.begin(), vec.end());
    cout << setw(20) << "After shuffle: ";
    print(vec);
    vec.insert(vec.begin()+ 2, arr, arr + 5);
    cout << setw(20) << "After insert: ";
    print(vec);
    sort(vec.begin(), vec.end());
    cout << setw(20) << "After sort: ";
    print(vec);
    //unique(vec.begin(), vec.end());
    //cout << setw(20) << "After unique: ";
    //print(vec);
    cout << setw(20) << "After real unique: ";
    my_unique(vec);
    print(vec);

    return 0;
}

void print(vector<int> &vec)
{
    vector<int>::iterator it;
    for(it = vec.begin(); it != vec.end(); it++)
        cout << setw(5) << *it;
    cout << endl;
}
void my_unique(vector<int> &vec)
{
    vector<int>::iterator it_1 = vec.begin();
    vector<int>::iterator it_2 = vec.end();
    vector<int>::iterator new_it_2 = unique(it_1, it_2);
    vec.erase(new_it_2, it_2);
}
