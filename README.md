# Script-bash-debug

A short script in the BASH language and some tools to help with DEBUG and finding memory leakage

## Usage

As you know unlike JAVA for C ++, there is no built-in garbage collector. The programmer is the one to clear the memory after the end of use. Luckily there is a tool on linux that helps us find memory leakage and can tell exactly where the leakage happened or whether we went to an unallocated place in memory. The tool is called valgrind. You can type in the GNU: 

```bash
man valgrind
```
and get information about this tool also you can read in this link :

[valgrind](https://en.wikipedia.org/wiki/Valgrind)

## Installation

How to install Valgrind:

Debian based linux OS:

```bash
sudo apt-get install valgrind
```

ARCH based linux OS:

```bash
sudo pacman -S valgrind
```

## Run-Code

the format to run the script:

```bash
BasicCheck.sh  <dir path>  <program>  <arguments if needed>
```

For example when we run test1 

```bash
./BasicCheck.sh  /home/omer/Desktop/script-bash-debug/tests/test1  main.exe
```
We will get

```bash
  Compilation   Memory leaks   thread race
     PASS            FAIL           PASS
```
Here we see a Memory-leak detection.

## Our mentor

[Erel Segal-Halevi](https://github.com/erelsgl/ariel-cpp-5779) 

