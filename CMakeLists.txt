cmake_minimum_required(VERSION 2.8)

project(tic-tac-toe)

file(GLOB_RECURSE USER_STORIES_CPP "tests/user_stories/*.cpp")

add_executable(tic_tac_toe_stories 
                ${USER_STORIES_CPP}
)

target_link_libraries(tic_tac_toe_stories
	gtest_main
        gtest
        pthread
)

