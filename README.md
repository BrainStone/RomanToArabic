# RomanToArabic [![Build Status](https://travis-ci.org/BrainStone/RomanToArabic.svg?branch=master)](https://travis-ci.org/BrainStone/RomanToArabic)

RomanToArabic is a project designed to convert Roman numerals into Arabic ones in C++.

Contributions are always welcome!

## Cloning

Since this repo is recursive, you need to clone it recursively

    $ git clone --recursive https://github.com/BrainStone/RomanToArabic.git

If you forgot to do that, you can download the submodules later by running

    $ git submodule update --init --recursive

### Hooks

This repo also provides a few simple hooks to make working with submodules easier. While it is not necessary to do this step, it is recommended.

    $ cp -va .hooks/* .git/hooks/

## Building

This project uses gradle for building. The nice thing about gradle is that you only need to have Java (and a C++ compiler of your choice) installed.  
Building is super straight forward:

    $ ./gradlew build

This will build the project and all its dependencies.

### Documentation

This project comes with a Doxyfile. You can either generate the documentation manually by using Doxygen from the command line, or by running this gradle task:

    $ ./gradlew doc

## License

This is project is licensed under the GPLv3 license.

Projects included in this project through submodules or other means are licensed under their respective licenses.
