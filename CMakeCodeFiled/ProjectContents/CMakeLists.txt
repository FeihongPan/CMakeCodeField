# 1.CMake 最低版本号要求
cmake_minimum_required (VERSION 3.5)
# 2.项目名称, 参数值是 AxialMachine, 该命令表示项目的名称是 AxialMachine
project(Example)

# find_package(imgui REGUIRED) 第三方库 

# 3.file GLOB命令通过通配符匹配所有的源文件
file (GLOB SOURCE_FILES "${PROJECT_SOURCE_DIR}/include/*.h" "${PROJECT_SOURCE_DIR}/src/*.cpp")
# 4.add_executable构成可执行文件 add_executable(${PROJECT_NAME} ${DIR_TOOT_SRCS})
add_executable(${CMAKE_PROJECT_NAME} ${SOURCE_FILES})

# target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE imgui::imgui) 第三方库的链接
# target_compile_features(${CMAKE_PROGRAM_NAME} PRIVATE cxx_std_17) 打开对c++17的支持
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g") 显示指定使用的C编译器 

# 5.指定为调试模式,这样就可以用VSC的调试功能了
SET(CMAKE_BUILD_TYPE "Debug") 

# 6.放置生成文件
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)