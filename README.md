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

#### Steps
 - `git clone`
 - `cd shell`
 - `gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`
 - Enjoy it


### Sys Functions
Prototypes | Description
----------- | -------------
**superminishell** | Init the shell.
**loop** | Start the main loop our shell.
**readline** | Read the line command.
**_strtok** | Function to tokenize each argument in the command line.
**_strcat** | Function to concatenates two strings.
**_strcmp** | Function to comparates two strings.
**_strncmp** | Function to compare two strings with a certain amount of bytes.
**_strlen** | Function to know the length of the string.
**splitline** | Split line command and convert to *tokens* each argument.
**splitpath** | Split the path in a new string.
**execute** | Function to execute all arguments in command line.
**_getline** | function to get the line has been typing from user in prompt.
**_getenv** | search the enviroment list to find enviroment variable.
**_putchar** | Function to print a character.
**_puts** | Function to print a string.
**prompt** | Funtion to print our prompt line.
**matchcommand** | Function to get the path enviroment.
**atoi** | Change a character to a integer.
**checkexit** | when the user type "exit" make a match and break the fucntion loop to exit from the shell.
**ctrlc** | the user type "ctrl + c" and break the process in the shell and exit.


### Flowchart


### Files
This list is our files used to integrate the all function _printf

* [shell.h](https://github.com/gedafu/simple_shell/blob/master/shell.h)
Header of functions where are store the prototypes and libraries.

* [loop](https://github.com/gedafu/simple_shell/blob/master/loop.c)
Initializace the main loop of shell.

* [matchcommand](https://github.com/gedafu/simple_shell/blob/master/matchcommand.c)
Function to get the path enviroment.

* [atoi](https://github.com/gedafu/simple_shell/blob/master/atoi.c)
Change a character to a integer.

* [string_functions](https://github.com/gedafu/simple_shell/blob/master/string_functions.c)
Suites Functions to handle strings; _strcat, _strtok, _strncmp, _strcmp, _strlen.

* [readline](https://github.com/gedafu/simple_shell/blob/master/readline.c)
Function that read the command line.

* [split_functions](https://github.com/gedafu/simple_shell/blob/master/split_functions.c)
Functions to split the command line and path enviroment; splitline and splitpath.

* [get_functions](https://github.com/gedafu/simple_shell/blob/master/get_functions.c)
Functions to get the lines and search enviroment list; _getline, _getenv.

* [print_functions](https://github.com/gedafu/simple_shell/blob/master/print_functions.c)
Suites functions to handle printing; _puts, _putchar, prompt.

* [execute](https://github.com/gedafu/simple_shell/blob/master/execute.c)
Function execute each argument and return a integer to standard out.

* [checkexit](https://github.com/gedafu/simple_shell/blob/master/checkexit.c)
Function to check a string "exit".

* [ctrlc](https://github.com/gedafu/simple_shell/blob/master/ctrlc.c)
Function to exit when user type "Ctrl + c".