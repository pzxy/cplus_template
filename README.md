# cpp_template
c++ project templates
# build
```bash
make build
```
# run
```bash
make run
```
# libraries
## 1. submodule mode
-  git submodule init
-  git submodule update --init --recursive
-  git submodule add <submodule URL> <submodule dir> ，examples：
```bash
 git submodule add https://github.com/google/googletest.git third_party/googletest
```
## 2. system libraries mode
examples:
```bash
# Ubuntu
sudo apt install libspdlog-dev
# Darwin
brew install spdlog
```
## 3. binary mode
1. put the header dir in include
2. put the lib dir in third_party

## 4. install libary
```bash
apt install -y build-essential ninja-build cmake libspdlog-dev
```
## 5. 跳转和调试
clang 是编译器，用于生成可执行文件。
clangd 是语言服务器，用于开发过程中的代码辅助。
lldb 是调试器，用于运行时程序调试。
```bash
sudo apt install clang clangd lldb -y
```
vscode安装插件clangd和CodeLLDB

## 6. 测试
或者在submodule中使用googletest，不过建议下面这样。
```bash
sudo apt install libgtest-dev -y
```