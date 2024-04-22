// 防止多重包含.cpp
//

#include <iostream>
#include "xtask1.h"
#include "xtask2.h"
#include "xtask3.h"

// 1.预处理 每个.cpp 单独做预处理
// 2.编译 编译为 .obj .o 多重引用 类多重定义出错
// 3.汇编
// 4.链接 全局变量多重定义
int main(int argc, char *argv[])
{
    XTask3 t3;
    XTask2 t2;
    std::cout << "防止多重包含!\n";

    return 0;
}