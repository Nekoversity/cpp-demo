project("simple_calc")

file(GLOB_RECURSE SRC LIST_DIRECTORIES true *.cpp *.cxx)

add_library(${PROJECT_NAME} ${SRC})

if(COMMON_DEPS)
    target_link_libraries(${PROJECT_NAME} ${COMMON_DEPS})
endif()

target_include_directories(
        ${PROJECT_NAME}
        PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)