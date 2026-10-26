#include<iostream>
using namespace std;

/*
 * 题目：古典问题——兔子繁殖。
 * 第 1 个月 1 对，第 2 个月 1 对，从第 3 个月起每个月是前两个月之和。
 * 输入月数 n，输出每个月的兔子对数以及最终总数。
 */

int main()
{
    int a = 1, b = 1;
    cout << "Please enter the number of months:" << endl;
    int n, temp;
    cin >> n;

    cout << "month 1: 1" << endl;
    cout << "month 2: 1" << endl;

    for (int i = 0; i < n; i++) {
        temp = b;
        b = a + b;
        a = temp;
        cout << "month " << i + 3 << ": " << b << endl;
    }
    cout << "The number of rabbits is " << b << endl;
    return 0;
}
