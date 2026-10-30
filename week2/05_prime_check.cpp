#include<iostream>
using namespace std;

/*
 * 题目：判断一个正整数是不是素数。
 * 素数定义：大于 1，且只能被 1 和它自身整除的数。
 */

int prime(int a) {
    // [AI 辅助修改] 原写法把 1 也当成素数返回了 1，已改为小于 2 一律不是素数。
    // 详见 PROMPT_LOG.md 记录 2
    if (a < 2) {
        return 0;
    }
    for (int i = 2; i < a; i++) {
        if (a % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    cout << "enter a number:" << endl;
    int a;
    cin >> a;
    if (prime(a) == 1) {
        cout << a << " is a prime number" << endl;
    } else {
        cout << a << " is not a prime number" << endl;
    }
    return 0;
}
