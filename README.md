<p align="center">
   <img src="https://www.holbertonschool.com/holberton-logo.png"(https://encrypted-tbn0.gstatic.com/images?q=tbn%3AANd9GcTLtL_ToHLEo_BWFxD-yf32Ux3zfsH_NPc8Qw&usqp=CAU)
     alt="Flow chart"
     style="float: left; margin-right: 10px;">
</p>

<p align="center">PROJECT SIMPLE_SHELL</p>

## BACKGROUND :atom:
This is a colaboration project between two software development students at [Holberton School](https://www.holbertonschool.com/) from Cohort 12, This project is about to create our own shell with most important feature that original shell, it's necesary apply all concepts the Unix shell, arrays, pointers, allocating memory, freeing memory, linked lists, structures, system calls, etc.

## SIMPLE_SHELL
A shell program is an application that allows interacting with the computer. In a shell the user through a terminal or takes the input from a file and executes a sequence of commands that are passed to the Operating System, can run programs and also redirect the input to come from a file and output to come from a file.


### Installation

#### Requirements
 - Gcc >= 4.8.4
 - Linux

#### Steps to compile the shell and execute.
 - `git clone https://github.com/gedafu/simple_shell.git`
 - `cd simple_shell`
 - `gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`
 - `./hsh`
 - Enjoy it


### Sys Functions
Prototypes | Description
----------- | -------------
**loop** | Start the main loop our shell.
**readline** | Read the line command.
**checkspaces** | Funtion avoid spaces at the beginning of the command line.
**splitline** | Split line command and convert to *tokens* each argument.
**splitpath** | Split the path in a new string.
**execute** | Function to execute all arguments in command line.
**_getenv** | search the enviroment list to find enviroment variable.
**checkenv** | Funtion check if the command is env to print it.
**_putchar** | Function to print a character.
**_puts** | Function to print a string.
**prompt** | Funtion to print our prompt line.
**_printenv** | Funtion to print the environment.
**print_number** | Funtion to print a number in STDERR.
**errorsys** | Funtion to print in STDERR when a command is not found or the program does not exist.
**matchcommand** | Function to get the command.
**atoi** | Change a character to a integer.
**_free** | Funtion to free arguments.
**checkexit** | when the user type "exit" make a match and break the fucntion loop to exit from the shell.
**simplexit** | Funtion to check the exit with estatus.
**ctrlc** | the user type "ctrl + c" and break the process in the shell and exit.
**_strtok** | Function to tokenize each argument in the command line.
**_strcat** | Function to concatenates two strings.
**_strcmp** | Function to comparates two strings.
**_strncmp** | Function to compare two strings with a certain amount of bytes.
**_strlen** | Function to know the length of the string.
**_strdup** | the user type "ctrl + c" and break the process in the shell and exit.


### Flowchart

<p align="center">
   <img src="https://github.com/gedafu/simple_shell/blob/master/flowchart%20shell.png">
</p>

### Files
This list is our files used to compile the shell 4.0

* [shell.h](https://github.com/gedafu/simple_shell/blob/master/shell.h)
Header of functions where are store the prototypes and libraries.

* [main.c](https://github.com/gedafu/simple_shell/blob/master/main.c)
Entry point to the shell.

* [_free.c](https://github.com/gedafu/simple_shell/blob/master/_free.c)
Functions to free arguments.

* [loop.c](https://github.com/gedafu/simple_shell/blob/master/loop.c)
Initializace the main loop of shell.

* [matchcommand.c](https://github.com/gedafu/simple_shell/blob/master/matchcommand.c)
Function to find a command with or without path.

* [atoi.c](https://github.com/gedafu/simple_shell/blob/master/atoi.c)
Change a character to a integer.

* [string_functions.c](https://github.com/gedafu/simple_shell/blob/master/string_functions.c)
Suites Functions to handle strings; _strcat, _strtok, _strncmp, _strcmp, _strlen.

* [readline.c](https://github.com/gedafu/simple_shell/blob/master/readline.c)
Function that read the command line.

* [split_functions.c](https://github.com/gedafu/simple_shell/blob/master/split_functions.c)
Functions to split the command line and path enviroment; splitline and splitpath.

* [get_functions.c](https://github.com/gedafu/simple_shell/blob/master/get_functions.c)
Functions to get the lines and search enviroment list; _getline, _getenv.

* [print_functions.c](https://github.com/gedafu/simple_shell/blob/master/print_functions.c)
Suites functions to handle printing; _puts, _putchar, prompt.

* [execute.c](https://github.com/gedafu/simple_shell/blob/master/execute.c)
Function execute each argument and return a integer to standard out.

* [checkexit.c](https://github.com/gedafu/simple_shell/blob/master/checkexit.c)
Function to check a string "exit".

* [ctrlc.c](https://github.com/gedafu/simple_shell/blob/master/ctrlc.c)
Function to exit when user type "Ctrl + c".

* [strdup.c](https://github.com/gedafu/simple_shell/blob/master/strdup.c)
Function to duplicate a string.

#### REQUIREMENTS

* Allowed editors: *vi*, *vim*, *emacs*
* All your files will be compiled on Ubuntu 14.04 LTS.
* Your programs and functions will be compiled with *gcc 4.8.4* using the flags *-Wall -Werror -Wextra* and *-pedantic*
* All your files should end with a new line
* A *README.md* file, at the root of the folder of the project is mandatory
* Your code should use the *Betty* style. It will be checked using *betty-style.pl* and *betty-doc.pl*
* No more than 5 functions per file.
* Your shell should not have any memory leaks.
* All your header files should be include guarded.
* Use system calls only when you need to (why?).


### EXAMPLES
#### Modes

##### Non-interactive
*Command*
```
echo "/bin/ls" | ./hsh
```
*Output*
```
atoi.c   checkexit.c  execute.c        hsh     man_1_simple_shell  print_functions.c  README.md  split_functions.c   superminishell.c
AUTHORS  ctrlc.c      get_functions.c  loop.c  matchcommand.c      readline.c         shell.h    string_functions.c
```
<hr>

##### Interactive
*Command*
```
./hsh
```
Then the prompt appear, so you can type in the command line, and press return
**Ex** - `/bin/ls`

*Output*
```
atoi.c   checkexit.c  execute.c        hsh     man_1_simple_shell  print_functions.c  README.md  split_functions.c   superminishell.c
AUTHORS  ctrlc.c      get_functions.c  loop.c  matchcommand.c      readline.c         shell.h    string_functions.c
```



<p align="center"> AUTHORS :mechanical_arm:</p>
<p align="center">
    <h2 align="center">Made by, David Arias Fuentes</h2>
      <p align="center">
        <a href="https://twitter.com/DavidDevArias" target="_blank">
            <img alt="twitter_page" src="https://github.com/gedafu/readme-template/blob/master/images/twitter.png" style="float: center; margin-right: 10px" height="50" width="50">
        </a>
        <a href="https://www.linkedin.com/in/devarias/" target="_blank">
            <img alt="linkedin_page" src="https://github.com/gedafu/readme-template/blob/master/images/linkedin.png" style="float: center; margin-right: 10px" height="50"  width="50">
        </a>
        <a href="https://daviddevarias.medium.com/" target="_blank">
            <img alt="medium_page" src="https://github.com/gedafu/readme-template/blob/master/images/medium.png" style="float: center; margin-right: 10px" height="50" width="50">
        </a>
      </p>
</p>

<p align="center">
    <h2 align="center">Made by, Fabian Carmona Vargas</h2>
      <p align="center">
        <a href="https://twitter.com/fabkar08" target="_blank">
            <img alt="twitter_page" src="https://github.com/gedafu/readme-template/blob/master/images/twitter.png" style="float: center; margin-right: 10px" height="50" width="50">
        </a>
        <a href="https://www.linkedin.com/in/fabian-andres-carmona-vargas-396917b9/" target="_blank">
            <img alt="linkedin_page" src="https://github.com/gedafu/readme-template/blob/master/images/linkedin.png" style="float: center; margin-right: 10px" height="50"  width="50">
        </a>
      </p>
</p>
