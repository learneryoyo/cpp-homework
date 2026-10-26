#include<iostream>
using namespace std;

/*
 * 题目：给出一个 1~10 的分数，用 switch 输出对应等级。
 *   10、9 → classic
 *   8、7  → excellent
 *   6、5  → so-so
 *   其余  → bad
 */

int main()
{
    cout << "Please enter the score(1-10):" << endl;
    int score;
    cin >> score;

    switch (score) {
        case 10:
        case 9:
            cout << "classic" << endl;
            break;
        case 8:
        case 7:
            cout << "excellent" << endl;
            break;
        case 6:
        case 5:
            cout << "so-so" << endl;
            break;
        default:
            cout << "bad" << endl;
    }
    return 0;
}
