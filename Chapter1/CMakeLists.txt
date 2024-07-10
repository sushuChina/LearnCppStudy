cmake_minimum_required(VERSION 3.0.0)
project(Chapter1 VERSION 0.1.0 LANGUAGES C CXX)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)#添加头文件的搜索路径

set(SrcList) #创建一个SrcList变量
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SrcList) #将CmakeList.txt的文件夹中的cpp文件添加入SrcList变量
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/Matrix SrcList) #将Matrix文件夹中的cpp文件添加入SrcList变量
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/Variable SrcList) #将Variable文件夹中的cpp文件添加入SrcList变量

add_executable(Chapter1 ${SrcList}) #设置可执行文件的名称，并且链接SrcList中所有的cpp文件

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)  