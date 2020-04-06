# Cinder Generative Art

Generative art made with [Cinder](https://libcinder.org/docs/guides/linux-notes/ubuntu.html).

Solutions for [Interactive Computer Graphics: A Top-Down Approach with WebGL, 7th Edition](https://www.pearson.com/us/higher-education/product/Angel-Interactive-Computer-Graphics-A-Top-Down-Approach-with-Web-GL-7th-Edition/9780133574845.html).

## Install

Follow instruction found in [Ubuntu
Notes](https://libcinder.org/docs/guides/linux-notes/ubuntu.html) to install
Cinder.

Make a copy of `BasicApp` in the root folder. Rename `BasicApp` - in `MyApp` for
example - and edit `MyApp/proj/cmake/CMakeLists.txt`. Refactor lines

```
project( BasicApp )

get_filename_component( CINDER_PATH "/home/darko/Programs/Cinder/" ABSOLUTE )
```

to set the name of the project and `CINDER_PATH`.

## Build & Run

`cd` to `MyApp/proj/cmake` and run

```
mkdir build && cd build
cmake .. -DCMAKE_EXPORT_COMPILE_COMMANDS=1
make
./Debug/MyApp/MyApp
```

Use `(irony-cdb-json-add-compile-commands-path PROJECT-ROOT
COMPILE-COMMANDS-PATH)` to inform `irony-mode` about the project root and the
location of `compile_commands.json` found in *MyApp/proj/cmake/build*
