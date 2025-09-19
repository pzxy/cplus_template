#!/bin/zsh

# 定义可执行文件目录
BIN_DIR="./build/bin"

# 检查是否提供了程序名称
if [ -z "$1" ]; then
  echo "Usage: $0 <program_name> [test_suite] [test_case]"
  echo "Examples:"
  echo "  $0 examples                    # 运行所有测试"
  echo "  $0 examples box_test           # 运行box_test测试套件"
  echo "  $0 examples box_test basic_volume_calculation  # 运行指定测试用例"
  exit 1
fi

# 获取程序名称
PROGRAM="$1"
shift

# 处理测试过滤参数
if [ $# -eq 0 ]; then
  # 没有额外参数，运行所有测试
  ARGS=""
elif [ $# -eq 1 ]; then
  # 一个参数，当作测试套件名，运行该套件的所有测试
  TEST_SUITE="$1"
  ARGS="--gtest_filter=${TEST_SUITE}.*"
elif [ $# -eq 2 ]; then
  # 两个参数，第一个是测试套件名，第二个是测试用例名
  TEST_SUITE="$1"
  TEST_CASE="$2"
  ARGS="--gtest_filter=${TEST_SUITE}.${TEST_CASE}"
else
  # 参数太多
  echo "Error: Too many arguments."
  echo "Usage: $0 <program_name> [test_suite] [test_case]"
  exit 1
fi

# 构造完整路径
PROGRAM_PATH="${BIN_DIR}/${PROGRAM}"

# 检查程序是否存在
if [ ! -x "${PROGRAM_PATH}" ]; then
  echo "Error: Program '${PROGRAM}' not found in '${BIN_DIR}' or not executable."
  exit 1
fi

# 运行程序
echo "Running ${PROGRAM_PATH} ${ARGS}"
"${PROGRAM_PATH}" ${ARGS}

# 示例已在usage信息中说明
