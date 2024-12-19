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