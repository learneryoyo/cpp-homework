#include<iostream>
using namespace std;

/*
 * 题目：判断一个整数是不是回文数（正着读和倒着读一样，如 12321）。
 * 思路：把数字逐位取出来，重新拼成一个"倒过来"的数，和原数比较。
 */

int main()
{
    cout << "Please enter a number:" << endl;
    int num;
    cin >> num;

    int initial = num;
    int temp = 0;

    while (num > 0) {
        // 每取出一位个位，就把它"推"到已翻转结果的末尾
        temp = temp * 10 + num % 10;
        num /= 10;
    }

    if (initial == temp) {
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }
    return 0;
}
