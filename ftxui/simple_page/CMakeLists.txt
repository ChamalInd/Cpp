cmake_minimum_required(VERSION 3.15)

project(FXTUI_DEMO CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
	ftxui
	GIT_REPOSITORY https://github.com/ArthurSonzogni/ftxui
	GIT_TAG v5.0.0
)
FetchContent_MakeAvailable(ftxui)

add_executable(demo main.cpp)

target_link_libraries(demo
	PRIVATE
		ftxui::screen
		ftxui::dom
		ftxui::component
)
