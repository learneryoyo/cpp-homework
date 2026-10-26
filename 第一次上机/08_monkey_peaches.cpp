#include<iostream>
using namespace std;

/*
 * 题目：猴子吃桃问题。
 * 猴子第 1 天摘下若干个桃子，当天吃掉一半又多一个；
 * 之后每天都吃前一天剩下的一半再多一个；
 * 到第 10 天早上想再吃时，只剩 1 个桃子了。求第 1 天摘了多少个。
 * 思路：从第 10 天的 1 个往前倒推 9 次，每次 (x + 1) * 2。
 */

int main()
{
    int a = 1;
    for (int i = 0; i < 9; i++) {
        a = (a + 1) * 2;
    }
    cout << "The number of peaches is " << a << endl;
    return 0;
}
