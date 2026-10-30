#include<iostream>
using namespace std;

/*
 * 题目：用函数重载实现 my_abs，分别支持 int、double、long 三种参数。
 * 关键点：三个函数同名、参数类型不同，编译器根据实参类型自动挑选对应版本。
 */

int my_abs(int x) {
    return x > 0 ? x : -x;
}

double my_abs(double x) {
    return x > 0 ? x : -x;
}

long my_abs(long x) {
    return x > 0 ? x : -x;
}

int main() {
    int a = -7;
    double b = -3.4;
    long c = 6L;
    cout << my_abs(a) << endl << my_abs(b) << endl << my_abs(c);
    return 0;
}
