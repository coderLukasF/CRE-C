# Welcome to CRE-C!
CRE-C is a pretty simple program written in C. It stands for Compile, Run, and Export C.

This project requires GCC (GNU Compiler Collection) and currently
only supports linux. (It might work on Mac, but I cant test it because I dont have a mac)

The compile part of CRE-C is very simple. It is just a shorter way to run gcc (filename) -o (program name).

Example:
```bash
cde -c main.c
```

The run part of CRE-C is also simple. It compiles the program into $HOME/CDE/cache, runs the program, and removes it.

Example:
```bash
cde -r main.c
```

The export part of CRE-C is more complex. It is mainly a shortcut for git. It commits and pushes your git repository, through arguments. The second argument is the commit message, and the third is the remote you want to push to.

Example:
```bash
cde -e "This is a commit message" origin
```

## Dependencies
This program relys on 2 dependencies. First of all GCC, because I am NOT writing a whole compiler for a simple program.
Secondly, not really a dependency but you must have a CRE-C folder in your home folder, and a cache folder inside of it:

/ home / user / CRE-C / cache