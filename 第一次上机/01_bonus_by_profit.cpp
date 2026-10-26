#include<iostream>
using namespace std;

/*
 * 题目：企业发放的奖金根据利润提成。
 *   利润 <= 10 万         → 奖金提 10%
 *   10 万 < 利润 <= 20 万 → 10 万以内按 10%，超出部分按 7.5%
 *   20 万 < 利润 <= 40 万 → 20 万以内同上，超出部分按 5%
 *   40 万 < 利润 <= 60 万 → 40 万以内同上，超出部分按 3%
 *   60 万 < 利润 <= 100万 → 60 万以内同上，超出部分按 1.5%
 *   利润 > 100 万         → 100 万以内同上，超出部分按 1%
 * 输入当月利润，求应发放奖金总数。
 */

int main()
{
    cout << "Please enter the profit:" << endl;
    int profit;
    float bonus;
    cin >> profit;

    // [AI 辅助修改] 原写法 0 < profit <= 100000 恒为真，已改为下方条件。
    // 详见 PROMPT_LOG.md 记录 3
    if (profit > 0 && profit <= 100000) {
        cout << "The bonus is" << profit * 0.1 << endl;
    } else if (profit > 100000 && profit <= 200000) {
        bonus = 100000 * 0.1 + (profit - 100000) * 0.075;
        cout << "The bonus is" << bonus << endl;
    } else if (profit > 200000 && profit <= 400000) {
        bonus = 100000 * 0.1 + 100000 * 0.075 + (profit - 200000) * 0.05;
        cout << "The bonus is" << bonus << endl;
    } else if (profit > 400000 && profit <= 600000) {
        bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (profit - 400000) * 0.03;
        cout << "The bonus is" << bonus << endl;
    } else if (profit > 600000 && profit <= 1000000) {
        bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 400000 * 0.03 + (profit - 600000) * 0.015;
        cout << "The bonus is" << bonus << endl;
    } else if (profit > 1000000) {
        bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 400000 * 0.03 + 400000 * 0.015 + (profit - 1000000) * 0.01;
        cout << "The bonus is" << bonus << endl;
    }
    return 0;
}
