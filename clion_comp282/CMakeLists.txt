cmake_minimum_required(VERSION 3.10)

project(YourProjectName)

# 添加每个子目录
#add_subdirectory(task-1)
#add_subdirectory(task-2)
add_subdirectory(task-3)


# 临时记录
# 问题难点1: Location定义需要引用Monster 所以包含头文件Character.h, 同时Character.h中定义Player需要引用Location包含Location.h, 会导致循环包含