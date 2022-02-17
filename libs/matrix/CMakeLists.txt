project(matrix)

file(GLOB SRC src/*.cpp src/*.cxx)

include_directories(include)

if (LINUX)
    list(APPEND COMMON_DEPS m)
endif()

add_library("${PROJECT_NAME}" ${SRC})

if(COMMON_DEPS)
    target_link_libraries("${PROJECT_NAME}" ${COMMON_DEPS})
endif()

target_include_directories(
        ${PROJECT_NAME}
        PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)
