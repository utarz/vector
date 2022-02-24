

add_executable(ArrayVectorInit ArrayVectorInit.cpp)
#target_link_libraries(ArrayVectorInit vector)
target_include_directories(ArrayVectorInit PUBLIC "${PROJECT_SOURCE_DIR}/Vector/include")



add_test(NAME ArrayVectorInit COMMAND ArrayVectorInit)

#the following test shall throe an uncaught exception

add_executable(TestEmptyBack TestEmptyBack.cpp)
target_include_directories(TestEmptyBack PUBLIC "${PROJECT_SOURCE_DIR}/Vector/include")
add_test(NAME TestEmptyBack COMMAND TestEmptyBack)

