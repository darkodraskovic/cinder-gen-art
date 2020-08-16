# Cinder Generative Art

Generative art made with [Cinder](https://libcinder.org/docs/guides/linux-notes/ubuntu.html).

## Build Cinder

Follow instruction found in [Ubuntu Notes](https://libcinder.org/docs/guides/linux-notes/ubuntu.html) to build Cinder in Release mode.

## Build & Run Basic Cinder App

Make a copy of `BasicApp` in the root directory. `cd` to the copied directory and set mode of `.sh` files to `775`.

To build,

```
cd <app_directory> && ./configure.sh
```

To compile and execute,

```
cd <app_directory> && ./compile.sh
```

## clangd

To use clangd language server with a project read "Installing clangd" and "Project setup" chapters from official clangd [Getting started](https://clangd.llvm.org/installation.html) guide.
