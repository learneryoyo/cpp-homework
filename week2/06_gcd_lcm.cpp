#include<iostream>
using namespace std;

/*
 * 题目：求两个正整数的最大公约数和最小公倍数。
 *   最大公约数：能同时整除 a 和 b 的最大数
 *   最小公倍数：能同时被 a 和 b 整除的最小数
 */

int gcd(int a, int b) {
    int m;
    if (a > b) {
        m = b;
    } else {
        m = a;
    }
    // [AI 辅助修改] 原来从 2 开始往大找，返回的是「最小」公约数（如 12、18 得 2）。
    // 改为从大到小找，才是最大公约数。详见 PROMPT_LOG.md 记录 3
    for (int i = m; i >= 2; i--) {
        if (a % i == 0 && b % i == 0) {
            return i;
        }
    }
    return 1;
}

int my_lcm(int a, int b) {
    int m;
    if (a > b) {
        m = a;
    } else {
        m = b;
    }
    for (int i = m; ; i++) {
        if (i % a == 0 && i % b == 0) {
            return i;
        }
    }
}

int main() {
    cout << "please enter 2 numbers:" << endl;
    int a, b;
    cin >> a >> b;
    cout << "the greatest commom divisor is:" << gcd(a, b) << endl;
    cout << "the least commom multiple is:" << my_lcm(a, b) << endl;
    return 0;
}
