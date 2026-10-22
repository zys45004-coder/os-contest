# 操作系统创新大赛学习记录

保存 Ubuntu 与 C 语言基础学习的代码和笔记，按实际完成进度逐步更新。

## 来源说明

本次整理来自旧账号学习对话迁移包。Day01～Day04 的源代码和笔记均为根据教学内容重建的副本，不是从 Ubuntu 电脑直接备份的项目，不包含原来的 Git 提交历史。若与 Ubuntu 上的文件有差异，以实际项目为准。

## 当前进度

- Day01：Ubuntu 开发环境、Hello OS、编译运行、Git 基础。
- Day02：文件操作、循环、条件判断、求和。
- Day03：函数、数组、数组求和。
- Day04：指针、通过地址修改变量、swap。实验结果已有历史确认，最后一次 Git 提交状态待核对。
- 下一步：Day05 结构体，以模拟进程的 pid、state、priority 开始。

## 文件组织

每个 dayXX 目录保存当天的 C 源文件和 README.md 笔记。
共 9 个 C 源文件、4 份分日笔记。

## 在 Ubuntu 编译运行示例

在项目目录依次执行：

```bash
cd day04
gcc -Wall -Wextra -g swap.c -o swap
./swap
```

预期输出：

```text
Before: x = 10, y = 20
After: x = 20, y = 10
Again: x = 10, y = 20
```

修改源文件后需要重新编译。生成的可执行文件由 .gitignore 忽略。

## 后续保存

后续应从实际 Ubuntu 项目上传源文件和笔记，并保留真实提交历史。本资料没有验证 Ubuntu 项目当前状态。
