#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
long long fib1(int n)
{
    if(n < 1)
        return -1;
    else if(n == 1 || n == 2)
        return 1;
    else
        return fib1(n - 1) + fib1(n - 2);
}

long long fib2(int n)
{
    if(n < 1)
        return -1;
    int * arr = new int[n+1];
    int temp;

    arr[1] = arr[2] = 1;
    for(int i = 3; i <= n; i++)
        arr[i] = arr[i-1] + arr[i-2];
    temp = arr[n];
    delete []arr;
    return temp;
}

int main(void)
{
    time_t s, e;
    int n;

    cin >> n;   // n = 10, 30, 50
    s = clock();
    cout << fixed << setprecision(0);
    //cout << "fib(" << n << ") = " << fib1(n) << endl;
    cout << "fib(" << n << ") = " << fib2(n) << endl;
    e = clock();
    cout << "fib1_time: " << e - s << endl;

    return 0;
}
