#include<iostream>
using namespace std;

/*
 * 题目：用内联函数计算圆面积，半径从键盘输入。
 * 关键点：inline 建议编译器把函数体直接展开到调用处，省掉函数调用的开销，
 *         适合这种只有一两行的短函数。
 */

inline double Circle(double r) {
    return 3.1416 * r * r;
}

int main() {
    cout << "enter r" << endl;
    double r;
    cin >> r;
    cout << "the space is:" << Circle(r) << endl;
    return 0;
}
