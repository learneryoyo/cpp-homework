#include<iostream>
using namespace std;

/*
 * 题目：判断一个 100~999 的三位数是不是水仙花数
 *      （各位数字的立方和等于它本身，如 153 = 1^3 + 5^3 + 3^3）。
 * 要求：先判断输入的这一个数，再输出 100~999 之间所有的水仙花数。
 */

int main()
{
    cout << "Please enter a number between 100 and 999:" << endl;
    int num, a, s = 0, initial;
    cin >> num;

    initial = num;
    for (int i = 0; i < 3; i++) {
        a = num % 10;
        num /= 10;
        s += a * a * a;
    }

    if (initial == s) {
        cout << "The number is an Armstrong number." << endl;
    } else {
        cout << "The number is not an Armstrong number." << endl;
    }

    for (int i = 100; i < 1000; i++) {
        initial = i;
        num = i;
        s = 0;
        for (int j = 0; j < 3; j++) {
            a = num % 10;
            num /= 10;
            s += a * a * a;
        }
        if (initial == s) {
            cout << initial << " is an Armstrong number." << endl;
        }
    }
    return 0;
}
