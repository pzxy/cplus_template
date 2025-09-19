# cpp_template
## 1. 子模块
如果需要的话，可以这样：
这里是不需要的
```bash
# libraries
## 1. submodule mode
-  git submodule init
-  git submodule update --init --recursive
-  git submodule add <submodule URL> <submodule dir> ，examples：
```bash
 git submodule add https://github.com/google/googletest.git third_party/googletest
```
## 2. install system libary
```bash
apt install -y build-essential ninja-build cmake pkg-config

```
## 3. 跳转和调试v
vscode插件安装：
- Makefile Tools
- clangd 为了跳转
- CodeLLDB 为了debug

```bash
# clang 是编译器，用于生成可执行文件。
# clangd 是语言服务器，用于开发过程中的代码辅助。
# lldb 是调试器，用于运行时程序调试。
sudo apt install clang clangd lldb -y
```
vscode安装插件clangd和CodeLLDB
然后重新加载窗口，就可以跳转了clangd跳转比较好用，必须设置编译参数
set(CMAKE_EXPORT_COMPILE_COMMANDS ON) 才行，这样才会生成build/compile_commands.json文件
然后clangd用这个compile_commands.json来构建跳转索引放到.cache中。

# 4. 使用vcpkg来进行所有的包管理
1. vcpkg安装在那里并不重要，我们要指定vcpkg的路径
```bash
set(CMAKE_TOOLCHAIN_FILE "/root/workspace/vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE STRING "Vcpkg toolchain file")

# 1. 先查找 package-config.cmake（包提供的配置文件）  
# 2. 再查找 FindPackage.cmake（CMake内置模块）
# 因为使用的vcpkg，所以会生成 xxxx.cmake 文件。所以会优先查找vcpkg中的包
set(CMAKE_FIND_PACKAGE_PREFER_CONFIG TRUE)
```
其实就是 CMAKE_TOOLCHAIN_FILE 构建变量的值要指定为vcpkg路径，一般都有VCPKG_ROOT的环境变量来做通用配置。
另外vcpkg的包会缓存到“~/.cache/vcpkg/archives/”位置。所以及时删除了build中vcpkg_installed也不影响下次构建的速度。
另外执行vcpkg list是看不到项目以来的vcpkg的包的，因为包都是安装到了项目中了。但是包的本体是在.cache中的。
其实将vcpkg当成go mod就可以了。

2. 锁定vcpkg包的版本，其实和其他包管理工具一样，就是锁定版本和仓库
vcpkg.json
```bash
{
    "name": "cplus-template",
    "version": "1.0.0",
    "builtin-baseline": "e9dc13758c9a230a38bf761e27821d087cc6cf98",
    "dependencies": [
        {
            "name": "spdlog",
            "version>=": "1.12.0"
        },
        {
            "name": "gtest",
            "version>=": "1.14.0"
        }
    ]
}

```

## 6. 测试
```bash
make buildtest
chmod +x test.sh
./test.sh
```
或者直接使用CMake tools，点击生成，点击测试，然后也可以单独点击小瓶子。

## 7. 启动
启动有两个地方，一个🐞的地方，这个地方是用launch.json配置的。
还有一个地方是CMake tools那里，那里是在cursor自己的setting.json中配置的。
我们用launch.json中的比较好。








