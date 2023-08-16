#include <iostream>
#include <cmath>
#include <ctime>
long sum1(long n);
long sum2(long n);
using namespace std;
int main(void)
{
    long n = 100000000;
    time_t s_time, e_time;

    s_time = clock();
    cout << "sum: " << sum1(n) << endl;
    e_time = clock();
    cout << "sum_time1: " << e_time - s_time << endl;

    s_time = clock();
    cout << "sum: " << sum2(n) << endl;
    e_time = clock();
    cout << "sum_time2: " << e_time - s_time << endl;

    return 0;
}

long sum1(long n)
{
    long sum = 0;

    for(long i = 1; i <= n; i++)
        sum += pow(-1, i);

    return sum;
}

long sum2(long n)
{
    if(n % 2 == 0)
        return 0;
    else
        return -1;
}
