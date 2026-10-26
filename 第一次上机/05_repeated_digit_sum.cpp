#include<iostream>
using namespace std;

/*
 * 题目：求 s = a + aa + aaa + ... 的值，其中 a 是一位数字，n 是项数。
 *   例如 a = 2、n = 3 时，s = 2 + 22 + 222 = 246。
 * 输入：先输入项数 n，再输入数字 a。
 */

int main()
{
    cout << "Please enter two numbers:" << endl;
    int n, a, s = 1;
    cin >> n >> a;

    int b = 0, total = 0;
    for (int i = 0; i < n; i++) {
        b += a * s;      // 第 i 项，如 2、22、222
        s *= 10;
        total += b;
        cout << b << ",";
    }
    cout << "The sum is " << total << endl;
    return 0;
}
