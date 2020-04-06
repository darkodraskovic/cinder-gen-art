# Cinder Generative Art

Generative art made with
[Cinder](https://libcinder.org/docs/guides/linux-notes/ubuntu.html).

## Install

Follow instruction found in [Ubuntu
Notes](https://libcinder.org/docs/guides/linux-notes/ubuntu.html) to install
Cinder.

Make a copy of `BasicApp` in the root folder. Rename `BasicApp` - in `MyApp` for
example - and edit *MyApp/proj/cmake/CMakeLists.txt*. Refactor lines

```
project( BasicApp )

get_filename_component( CINDER_PATH "/home/darko/Programs/Cinder/" ABSOLUTE )
```

to set the name of the project and `CINDER_PATH`.

Replace all occurrences of `BasicApp` with `MyApp` in *MyApp/configure.sh* and
*MyApp/compile.sh*. Set mode of `.sh` files to `775`.

## Build & Run

`cd` to `MyApp/proj/cmake` and run

```
mkdir build && cd build
cmake .. -DCMAKE_EXPORT_COMPILE_COMMANDS=1
make
./Debug/MyApp/MyApp
```

## Emacs

Use `(irony-cdb-json-add-compile-commands-path PROJECT-ROOT
COMPILE-COMMANDS-PATH)` to inform `irony-mode` about the project root and the
location of `compile_commands.json` found in *MyApp/proj/cmake/build*
