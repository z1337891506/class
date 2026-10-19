# class —— 学习 C 语言的全部过程

个人学习仓，只记录"人写的代码"（源码、说明），编译产物与编辑器配置一律不上传。

## lessons/ —— 课堂学习代码

按学习顺序编号，文件名用拼音描述代码功能：

| 文件 | 练习点 |
|---|---|
| 01_ni_hao_shi_jie.c | 第一个程序：printf 输出 Hello World |
| 02_chai_fen_shu_zi.c | while 循环：拆分整数各位并倒序输出 |
| 03_jiu_jiu_cheng_fa_biao.c | for 双重循环：打印九九乘法表 |

## problems/ —— 刷题专区

- 每道题一个独立 `.c` 文件，命名：`三位题号_题目拼音或英文.c`，例如 `001_two_sum.c`
- 文件开头注释：题目出处 + 一句话你的思路
- 详见 [problems/README.md](problems/README.md)

## 约定

- 日常三件套：`git add .` → `git commit -m "完成 <内容简述>"` → `git push`
- 提交说明只写一行，说清本次"做了什么"，50 字以内；细节放到正文中写
- 不提交：`*.exe`、`build/`、`output/`、`.vscode/`（见 `.gitignore`）
