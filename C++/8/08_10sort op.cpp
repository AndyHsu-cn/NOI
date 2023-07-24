#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;
struct student
{
    string id;
    int height;
};

void print(struct student & stu);
//bool operator < (struct student & stu1, struct student & stu2)
//{
//    if(stu1.height < stu2.height)
//        return true;
//    else
//        return false;
//}

bool cmp(struct student & stu1, struct student & stu2)
{
    if(stu1.height < stu2.height)
        return true;
    else
        return false;
}
int main(void)
{
    student class3[5];

    for(int i = 0; i < 5; i++)
    {
        cin >> class3[i].id;
        cin >> class3[i].height;
    }

    sort(class3, class3 + 5, cmp);
    for(int i = 0; i < 5; i++)
    {
        print(class3[i]);
    }

    return 0;
}

void print(struct student & stu)
{
    cout << stu.id << ": " << stu.height << endl;
}
