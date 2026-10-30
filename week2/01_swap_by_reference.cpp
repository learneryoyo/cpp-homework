#include<iostream>
using namespace std;

/*
 * 题目：用「引用传递」写一个 swap 函数，交换两个整数。
 * 关键点：参数写成 int&（引用），函数里操作的就是 main 里那两个变量本身；
 *         如果写成 int（值传递），交换的只是副本，main 里的值不会变。
 */

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    cout << "enter 2 numbers,a and b:" << endl;
    int a, b;
    cin >> a;
    cin >> b;
    swap(a, b);
    cout << "now a is:" << a << endl;
    cout << "now b is:" << b << endl;
    return 0;
}
