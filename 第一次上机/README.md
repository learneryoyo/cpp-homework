# 第一次上机

8 道题，一题一个文件，全部可独立编译运行。

> 📄 **AI 使用记录**：本次作业使用 AI 的完整过程见 **[PROMPT_LOG.md](./PROMPT_LOG.md)**（课程「边界守则」要求提交）。

| 序号 | 文件 | 题目 |
| :--: | :-- | :-- |
| 01 | [01_bonus_by_profit.cpp](./01_bonus_by_profit.cpp) | 利润提成算奖金（多段 if-else） |
| 02 | [02_grade_by_score.cpp](./02_grade_by_score.cpp) | 分数转等级（switch 穿透） |
| 03 | [03_palindrome_number.cpp](./03_palindrome_number.cpp) | 判断回文数（数字反转） |
| 04 | [04_armstrong_number.cpp](./04_armstrong_number.cpp) | 水仙花数（判断 + 枚举 100~999） |
| 05 | [05_repeated_digit_sum.cpp](./05_repeated_digit_sum.cpp) | 求 a + aa + aaa + ... 的和 |
| 06 | [06_multiplication_table.cpp](./06_multiplication_table.cpp) | 9x9 乘法表（嵌套循环） |
| 07 | [07_fibonacci_rabbits.cpp](./07_fibonacci_rabbits.cpp) | 兔子繁殖（斐波那契） |
| 08 | [08_monkey_peaches.cpp](./08_monkey_peaches.cpp) | 猴子吃桃（逆推） |

## 怎么单独编译某一题

```bash
# 编译（-Wall 打开常用警告，能提前发现可疑写法）
g++ -std=c++17 -Wall 01_bonus_by_profit.cpp -o 01.exe

# 运行
./01.exe
```

> ⚠️ 不要一次编译整个文件夹（`g++ *.cpp`）。C++ 一个程序只能有一个 `main()`，
> 8 道题就有 8 个 `main()`，一起编译必然报 `multiple definition of 'main'`。
> 一次只编译一个文件，这是正常的。

## 输入示例

| 文件 | 输入 |
| :-- | :-- |
| 01 | `150000` |
| 02 | `9` |
| 03 | `12321` |
| 04 | `153` |
| 05 | `3 2`（项数 数字） |
| 06 | 无 |
| 07 | `3` |
| 08 | 无 |

## 修改记录

拆分时修正了两处逻辑错误（其余代码保持原样）：

| 文件 | 原写法 | 问题 | 改为 |
| :-- | :-- | :-- | :-- |
| 01 | `if (0 < profit <= 100000)` | 关系运算符从左往右结合，先算 `0 < profit` 得到 `bool`（0 或 1），再拿它和 100000 比较，结果**恒为真**，后面所有分支都进不去 | `if (profit > 0 && profit <= 100000)` |
| 03 | `temp += (num % 10) * s; s *= 10;` | 每次把取出的个位放到"越来越高"的权重上，重建出来的其实是**原数本身**，所以任何数都会被判成回文 | `temp = temp * 10 + num % 10;` |

验证方式：`03` 输入 `12345` 应输出 not a palindrome，`12321` 应输出 palindrome。

