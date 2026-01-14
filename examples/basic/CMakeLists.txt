cmake_minimum_required(VERSION 3.16)

project(basicexample VERSION 0.1 LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Настраиваем зависимости и устанавливаем библиотеки из git-репозиториев
include(${PROJECT_SOURCE_DIR}/cmake/git.cmake.in)


add_executable(${PROJECT_NAME}
        ..\\..\\src\\translitcyrlat.h
        ..\\..\\src\\translitcyrlat.cpp
        main.cpp
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE  
    altuninvv::stringutils
)


include(GNUInstallDirs)