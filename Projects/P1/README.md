# Project 1 - Relop and Whitespace Machines
### C Programming (19SP)
### Due: 6 March 2019 @ 2359

## Objective:
Gain an understanding of the machine workflow and develop the Relop machine to identify relational operators in a source file. 

## Assignment:
Using your Project 0 code as a starting point, create a program to read in text from a source file and print out all recognized relational operators to the terminal.

Just like in Project 0, your program should read the source file line by line and store each in a 72 character length buffer. Your program must implement the forward and backward pointers to reference positions in the buffer. You may choose how you wish to implement these, either as ```int``` or ```char*``` types.

### Part 1: Relop Machine
Create a function to represent the Relop machine and correctly process ```part1.txt```. On each line of the input file, there is a different relational operator. Using the forward and backwards pointers, iterate over the buffer to identify which it is and print the answer to the terminal with its corresponding line number. 

#### Example
##### Input
```txt
=
>
```

#### Output
```txt
1. Equality
2. Greater-than
```

### Part 2: Whitespace Machine
Create a function to represent the whitespace machine and correctly process ```part2.txt```. On each line of the input file, there are multiple instances of relational operators. Using the forward and backward pointers, iterate over the buffer to identify what they are and print the answer to the terminal with its corresponding line number.

#### Example
##### Input
```txt
> <=
=
<> <
```
##### Output
```txt
1. Greater-than
1. Less-than-or-equal-to
2. Equality
3. Not-equal-to
3. Less-than
```

## Pseudocode:
Before you begin writing any C code, plan out your program in pseudocode. Do not worry about proper C syntax, only representing the general programming tools now available to you to construct the general form of your program. Include your pseudocode program in a section of your README report.

This program specifically utilizes other C library functions as part of the assignment. However, it is NOT necessary to know exactly what these functions are or their syntax to properly write pseudocode.

## Requirements and Deliverables:
* A README report outlining your pseudocode, methodology, challenges, and references for the assignment
* A completed ```proj1.c``` source file and any additional source files

## Grading:
Your assignment will be graded according to its adherence to the following:

* Correct file output
* Properly implemented buffer
* Properly implemented forward and backward pointers
* Well commented source code
* Professional README write-up
* Good programming practice

## Student Guidance:
Recall the machine process and hierarchy used in the Lexical Analyzer. Each time the program attempts to detect a new token the hierarchy of machines is initiated. This can be accomplished by calling each machine's function sequentially. 

One of the main challenges your program will need to face is knowing when to refill the buffer and when to end the program. Look up the standard documentation for the File I/O functions you are using to find out what return values you need to check for.

Recall the state machines from class and use them to structure your functions. 

![image](state_diagrams.JPG)

## GitHub Guidance:
_Substitute **Pn** with the appropriate lab number._

* Create a new branch from master **Pn**
  * `git checkout master`
  * `git branch Pn`
  * `git checkout Pn`
* Create an **Pn** directory inside the **Labs** directory
  * `mkdir Labs/Pn`
  * `cd Labs/Pn`
* Inside of the **Pn** directory make a **README.md**
  * `touch README.md`
* Using markdown format, write report in the **README.md**
* On GitHub, create a Pull Request titled **Pn - StudentInitials** (e.g., P1 - NC)