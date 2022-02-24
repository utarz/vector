#[[
Vector library is a header only library as it has only template types.
Following is an alternative way to include this library using an empty cpp file.
This result in coimpiler warnings as the resulting object will not have any symbols.
]]
# add_library(vector vector_empty.cpp)
# target_include_directories(vector PUBLIC "${PROJECT_SOURCE_DIR}/Vector/include")

add_library(vector INTERFACE)
target_include_directories(vector INTERFACE "${PROJECT_SOURCE_DIR}/Vector/include")
