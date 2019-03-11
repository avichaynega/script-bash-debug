# Script-bash-debug

In this task, we wrote a short script in the backgammon and learned to recognize tools that helped us in DEBUG and to find a memory leak.

## Usage

We were asked this task unlike the JAVA course, where C ++ does not have a built-in garbage collection. 
So the programmer is the one who needs to clear the memory after use.
And with the help of a Linux tool that helps to find memory leakage we have been able to know exactly where a leak occurred or whether we went to an undefined place.
The tool is called [valgrind](https://en.wikipedia.org/wiki/Valgrind)

## Installation

How to install Valgrind:

```bash
sudo apt-get install valgrind
```

## Run-Code

the format to run the script:

```bash
$BasicCheck.sh <dir path> <program> <arguments if needed>
```

For example when we run test1 

```bash
./BasicCheck.sh /home/omer/Desktop/script-bash-debug/tests/test1 main.exe
```
We will get

```bash
  Compilation   Memory leaks   thread race
     PASS            FAIL           PASS
```
Here we see a Memory-leak detection.

## Our mentor

[Erel Segal-Halevi](https://github.com/erelsgl/ariel-cpp-5779) 

