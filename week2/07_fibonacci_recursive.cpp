#include<iostream>
using namespace std;

/*
 * 题目：用递归求斐波那契数列，输出前 a 项以及第 a 项的值。
 * 数列：1, 1, 2, 3, 5, 8, 13 ...
 * 递归关系：f(n) = f(n-1) + f(n-2)，f(1) = f(2) = 1。
 */

int fiboonacci(int a) {
    if (a == 1 || a == 2) {
        return 1;
    }
    return fiboonacci(a - 1) + fiboonacci(a - 2);
}

int main() {
    cout << "enter the ordinal number:" << endl;
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++) {
        cout << " the " << i << "th number is " << fiboonacci(i) << endl;
    }
    cout << " the " << a << "th number is " << fiboonacci(a) << endl;
    return 0;
}
