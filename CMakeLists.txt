cmake_minimum_required(VERSION 3.28)
#project(C C)
#
#set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD 23)
#


project(C C)

# 获取 src 目录下的所有 .c 文件
#file(GLOB SRC_FILES "src/*.c") # 目录外的文件
file(GLOB SRC_FILES "src/learn/*.c") # 目录下的文件

# 循环遍历每个源文件并创建可执行文件
foreach(SRC_FILE ${SRC_FILES})
    get_filename_component(EXE_NAME ${SRC_FILE} NAME_WE) # 获取不带扩展名的文件名
    add_executable(${EXE_NAME} ${SRC_FILE})

    #     target_link_libraries(${EXE_NAME} PRIVATE m)#连接数学库!!!!

endforeach()
