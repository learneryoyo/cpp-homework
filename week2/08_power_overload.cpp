#include<iostream>
#include<iomanip>
using namespace std;

/*
 * 题目：用递归求 x 的 y 次方。
 * 要求：
 *   1. 用函数重载同时支持 int 和 double 两种底数
 *   2. y 为负数时返回 1 / x^|y|
 *   3. 结果保留两位小数
 */

double getPower(int x, int y) {
    if (y == 0) {
        return 1;
    }
    if (y < 0) {
        return 1.0 / getPower(x, -y);
    }
    if (y == 1) {
        return x;
    }
    return getPower(x, y - 1) * x;
}

double getPower(double x, int y) {
    if (y == 0) {
        return 1;
    }
    if (y < 0) {
        return 1.0 / getPower(x, -y);
    }
    if (y == 1) {
        return x;
    }
    return getPower(x, y - 1) * x;
}

int main() {
    cout << "enter base1(integer):" << endl;
    int x;
    cin >> x;
    cout << "enter base2(decimal):" << endl;
    double y;
    cin >> y;
    cout << "enter the power:" << endl;
    int m;
    cin >> m;
    cout << fixed << setprecision(2);
    cout << "x^m is :" << getPower(x, m) << endl;
    cout << "y^m is :" << getPower(y, m) << endl;
    return 0;
}
