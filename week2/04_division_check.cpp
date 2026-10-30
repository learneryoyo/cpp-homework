#include<iostream>
using namespace std;

/*
 * 题目：写一个除法函数，除数为 0 时返回 -1 作为错误标志。
 * 注意：返回值类型是 unsigned short（无符号），而 -1 在无符号类型里会被解释成 65535，
 *       所以这里保持了原写法，实际工程中应改用 int 返回值或抛异常。
 */

unsigned short div(unsigned short a, unsigned short b) {
    if (b == 0) {
        return -1;
    }
    return a / b;
}

int main() {
    cout << "enter 2 numbers to do the division:" << endl;
    unsigned short a, b;
    cin >> a >> b;
    cout << "the result is:" << div(a, b) << endl;
    return 0;
}
