# 🚀 Codeforces Template - Mihnea-Teodor Stoica

Welcome to my Codeforces template! This template is designed to make your competitive programming experience smoother and more enjoyable, with a dash of humor to keep things light.

## 📝 Overview

This template includes several features to boost your code's performance and readability:

- **GCC Optimizations**: `#pragma GCC optimize("Ofast")` and `#pragma GCC target("avx,avx2,fma")` are used to squeeze every bit of performance out of your code.
- **Speedy I/O**: A macro named `make_your_code_200_times_faster_no_clickbait` is included to ensure fast input and output operations. And yes, it's essential. Don't turn it off! 😜
- **Helpful Shortcuts**: Simple and meaningful macros like `YES`, `NO`, `YESn`, `NOn`, and some others to keep your code clean and concise.
- **Multiple Test Cases**: Easily handle multiple test cases with a single macro, `MORE_TESTS`, that can be toggled on or off.
- **Int64_t Everywhere**: `#define int int64_t` to avoid those pesky integer overflow issues.

## ⚙️ How to Use

1. **Enabling Fast I/O and Multiple Test Cases:**
   - The `FASTER_CODE` macro ensures your I/O is fast. It's enabled by default, and you should definitely leave it on.
   - The `MORE_TESTS` macro allows you to handle multiple test cases. Enable it by setting `MORE_TESTS` to `1`.

2. **Writing Your Solution:**
   - Implement your solution in the `Solve()` function.
   - The `main()` function handles test cases and runs your solution. For each test case, the `Solve()` function is called.

3. **Customization:**
   - You can modify or add macros as needed, but remember: **if you disable `make_your_code_200_times_faster_no_clickbait`, you're missing out!**

## 👨‍💻 Example

Here’s an example of how your template might look in action:

```cpp
#define YES cout<<"YES"
#define NO cout<<"NO"

void Solve() {
    int a, b;
    cin >> a >> b;
    if (a + b > 10) YES;
    else NO;
}
```

Happy Coding! 😄
