add_compile_options(
        -Wall
        -Werror
        -Wfatal-errors
        # -Wpedantic  # recommended
        # -Wextra
        -Werror=return-type
        -Werror=write-strings
        -Werror=unused-label
        -Werror=switch
)

add_subdirectory(libraries)
add_subdirectory(programs)
add_subdirectory(services)
add_subdirectory(logic)
add_subdirectory(tools)