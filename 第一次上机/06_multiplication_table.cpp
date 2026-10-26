#include<iostream>
using namespace std;

/*
 * 题目：输出 9x9 乘法表（下三角形式）。
 */

int main()
{
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << "*" << i << "=" << i * j << "\t";
        }
        cout << endl;
    }
    return 0;
}
