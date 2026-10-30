# 第二次上机

8 道题，一题一个文件，全部可独立编译运行。

> 📄 **AI 使用记录**：本次作业使用 AI 的完整过程见 **[PROMPT_LOG.md](./PROMPT_LOG.md)**（课程「边界守则」要求提交）。
>
> 📎 **实验报告**：**[第二次上机实验报告.docx](./第二次上机实验报告.docx)**

| 序号 | 文件 | 题目 | 知识点 |
| :--: | :-- | :-- | :-- |
| 01 | [01_swap_by_reference.cpp](./01_swap_by_reference.cpp) | 交换两个数 | 引用传递 `int&` |
| 02 | [02_abs_overload.cpp](./02_abs_overload.cpp) | 求绝对值 | 函数重载（int / double / long） |
| 03 | [03_circle_area_inline.cpp](./03_circle_area_inline.cpp) | 求圆面积 | 内联函数 `inline` |
| 04 | [04_division_check.cpp](./04_division_check.cpp) | 除法与除零判断 | 返回值作错误标志 |
| 05 | [05_prime_check.cpp](./05_prime_check.cpp) | 判断素数 | 循环 + 提前返回 |
| 06 | [06_gcd_lcm.cpp](./06_gcd_lcm.cpp) | 最大公约数、最小公倍数 | 枚举范围的选择 |
| 07 | [07_fibonacci_recursive.cpp](./07_fibonacci_recursive.cpp) | 斐波那契数列 | 递归 |
| 08 | [08_power_overload.cpp](./08_power_overload.cpp) | 递归求幂 | 递归 + 重载 + 负指数 |

## 怎么单独编译某一题

```bash
g++ -std=c++17 -Wall 01_swap_by_reference.cpp -o 01.exe
./01.exe
```

> ⚠️ 不要用 `g++ *.cpp`。8 个文件有 8 个 `main()`，一起编译必然报
> `multiple definition of 'main'`。一次只编译一个文件。

## 输入示例

| 文件 | 输入 | 预期输出要点 |
| :-- | :-- | :-- |
| 01 | `3` `5` | now a is:5 / now b is:3 |
| 02 | 无 | 7 / 3.4 / 6 |
| 03 | `2` | the space is:12.5664 |
| 04 | `10 3` | the result is:3 |
| 05 | `7` | 7 is a prime number |
| 06 | `12 18` | 最大公约数 6，最小公倍数 36 |
| 07 | `5` | 第 5 项为 5 |
| 08 | `2` `2.5` `3` | x^m is :8.00 / y^m is :15.62 |

## 修改记录

拆分时修正了两处逻辑错误（其余代码保持原样）：

| 文件 | 原写法 | 问题 | 改为 |
| :-- | :-- | :-- | :-- |
| 05 | `if (a <= 0) return 0;`<br>`if (a == 1 \|\| a == 2) return 1;` | 把 `1` 判成了素数。素数定义要求大于 1，而 `1` 只有 1 个正因数 | `if (a < 2) return 0;`，去掉原来的两行特判 |
| 06 | `for (int i = 2; i <= m; i++)` | 从 2 往大找，返回的是**最小**公约数。如 `gcd(12, 18)` 返回 2，正确答案是 6 | `for (int i = m; i >= 2; i--)`，从大到小找 |

验证方式：`05` 输入 `1` 应输出 not a prime number；`06` 输入 `12 18` 应输出 6 和 36。

## 已知问题（未修改，保持原写法）

`04_division_check.cpp`：函数返回类型是 `unsigned short`（无符号），除数为 0 时 `return -1`
实际会变成 `65535`，不是 `-1`。实测输入 `10 0` 输出 `the result is:65535`。

要真正实现「返回 -1 表示错误」，需要把返回类型改成 `int`：

```cpp
int div(unsigned short a, unsigned short b) {
    if (b == 0) return -1;   // 现在 -1 就是 -1 了
    return a / b;
}
```

保留原写法是因为作业要求的函数签名可能是 `unsigned short`，改动会偏离题意。
