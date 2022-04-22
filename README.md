![](https://cdn-website.partechpartners.com/media/images/Holberton_School_Logo.original.png)
# 0x16. C - Simple Shell :tw-2611:

## Background Context
Write a simple UNIX command interpreter.
![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/235/shell.jpeg)
^ “The Gates of Shell”, by [Spencer Cheng](https://twitter.com/spencerhcheng/status/855104635069054977 "Spencer Cheng"), featuring [Julien Barbier](https://twitter.com/julienbarbier42 "Julien Barbier")
## Presentation

This is collaborative project made by Valentina Zapata and Eduardo Zúñiga, students of Software Engineering at Holberton School. This repository contains the files for Holberton's simple_shell project. It consists of developing and making our own UNIX command interpreter (Shell).

It's a recreation of the `sh` shell a command line interpreter, this program has the exact same output as `sh` `(/bin/sh)` as well as the exact same error output.

### GitHub
**There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.**

## More Info
#### Output
- Unless specified otherwise, your program must have the exact same output as sh (/bin/sh) as well as the exact same error output.
- The only difference is when you print an error, the name of the program must be equivalent to your argv[0] (See below)

Example of error with `sh`:

> $ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$

Same error with your program `hsh`:

>$ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found
$




## Files Description
| File  | Description  |
| ------------ | ------------ |
|  AUTHORS | Contains the authors of the project  |
|  _getenv.c |  Contains the function that looks up the environment |
|  _putchar.c |  Contains the function that writes the character c to stdout |
| _strcat.c  | Contains the function that concatenates two strings  |
| _strcmp.c  | Contains the function that compares two strings  |
|_strcpy.c   | Contains the function that copies two strings  |
|  _strlen.c| Contains the function calculates the length of a given string  |
| _strncomp.c  |  Contains the function that compares the characters of two strings |
| execv.c |  Function that executes shell commands |
| exit.c  | Function to close the shell process  |
| length.c  |  Function that check equals character|
|  main.c |  Main arguments functions |
| path.c  | Function that find the path in the environment  |
| shell.c  |  read line for the keyboard |
| shell.h  | Header file with the prototypes  |
|  token_path.c | Function for split the  path  |
| tokenizador.c  |  Function that splits the string entered by the user |

## Steps to use the Shell

### 1. Clone the repository

`$ git clone https://github.com/edwardzuniga/simple_shell.git`

### 2. Change directory to simple_shell

`$ cd simple_shell/`

### 3. Compile all the .c files in /simple_shell

`gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`

### Usage

**Use in interactive mode:**

>$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$

**Use in non-interactive mode:**

>$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$

### Man page

**For further information please refer to the man page - accessed in terminal with:**

`man -l man_1_simple_shell`

### Example of Use

In the following example we enter the simple shell with the compilation code, then we compile with ./hsh and see what I enter `"Cisfun$"`, then we list the files `"ls"` and see the path `"pwd"` , then we exit and return to our default shell

![](https://i.ibb.co/mrnMrhn/ejemplo1.png)


### Bugs
Perhaps several, however it is a project carried out in the learning process of software development, do not hesitate to contact the authors if you have any questions, thank you very much



## Authors:
- [Valentina Zapata](https://github.com/ "Valentina Zapata") - [@Zapata9664](https://twitter.com/Zapata9664 "@Zapata9664")
- [Eduardo Zúñiga](https://github.com/edwardzuniga/ "Eduardo Zúñiga") - [@eduzunigapro](https://twitter.com/eduzunigapro "@eduzunigapro")