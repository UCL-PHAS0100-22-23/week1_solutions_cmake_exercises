add_executable(hello_world)
target_sources(hello_world PRIVATE hello.cpp)

target_include_directories(hello_world PRIVATE include)

target_compile_features(hello_world PUBLIC cxx_std_17)
set_target_properties(
    hello_world
    PROPERTIES CXX_STANDARD_REQUIRED ON CXX_EXTENSIONS OFF
)
