# C++ Codewars kata starter pack

This repository (or really, just this `README.md` file; see last § below) is intended to help you work on programming exercises (“katas”) from the popular [codewars.com](https://codewars.com/) website, from the comfort of your IDE on your workstation.

## How to use

1. Clone the repository into a new name of your choosing, e.g.:
   ```
   git clone git@github.com:epfl-si/starterpack-igloo-snowhouse.git my-kata
   ```
2. Edit `CMakeLists.txt` to change the `project()` stanza to e.g.
   ```
   project(my-kata)
   ```
3. Edit, compile and run `codewars.cpp` ever after

## How to not use

1. Create a new C++ project with CLion
2. Add the following snippet verbatim near the top of your `CMakeLists.txt` file:
   ```
   include(FetchContent)
   
   FetchContent_Declare(
           igloo
           GIT_REPOSITORY https://github.com/codewars/igloo.git
           GIT_TAG        2a63f3dfb1c267e7c349caa473812b4d8e8b121c
   )
   FetchContent_MakeAvailable(igloo)
   ```
3. Add this other snippet at the bottom (after the `add_executable` stanza):
   ```
   target_link_libraries(my-kata PRIVATE igloo)
   ```
   where `my-kata` should be replaced by the name of your `add_excutable` target.

# That's pretty much all there is to it.
