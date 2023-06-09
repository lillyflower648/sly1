# /src/P2/ps2t

file(GLOB PS2T_SOURCE_FILES *.cpp)

add_library(PS2T STATIC ${PS2T_SOURCE_FILES})
target_include_directories(PS2T PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
