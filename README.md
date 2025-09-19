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
然后重新加载窗口，就可以跳转了clangd跳转比较好用，必须设置编译参数
set(CMAKE_EXPORT_COMPILE_COMMANDS ON) 才行，这样才会生成build/compile_commands.json文件
然后clangd用这个compile_commands.json来构建跳转索引放到.cache中。

## 6. 测试
或者在submodule中使用googletest，不过建议下面这样。
下面这样做的话，可以直接点击实验瓶子来测试。
```bash
sudo apt install libgtest-dev -y
```

## 7. 启动
启动有两个地方，一个🐞的地方，这个地方是用launch.json配置的。
还有一个地方是CMake tools那里，那里是在cursor自己的setting.json中配置的。
我们用launch.json中的比较好。