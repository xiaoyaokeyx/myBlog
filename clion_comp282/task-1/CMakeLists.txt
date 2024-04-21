cmake_minimum_required(VERSION 3.25)
project(comp282)

set(CMAKE_CXX_STANDARD 11)

# 先处理Item 因为没有依赖
# 在处理Location 因为有Item的依赖, 向前声明自身和依赖
# 最后处理Character
# 先定义物品, 再定义地图, 最后定义玩家
add_executable(task-1 AdventureGame.cpp Character.cpp Location.cpp Item.cpp)