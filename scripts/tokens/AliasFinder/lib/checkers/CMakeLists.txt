add_subdirectory(arraybound)
add_subdirectory(loopupbound)
add_subdirectory(redundantjudgement)

aux_source_directory(. checkers)
add_library(checkers ${checkers})
