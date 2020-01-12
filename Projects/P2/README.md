# Project 2 - Int, Real, and Long Real Machines
### C Programming 
### Due: 16 October 2019 @ 2359

## Objective:
Gain an understanding of the machine workflow and develop the Int, Real, and Long Real machines to identify number values in a source file. 

## Assignment:
Using your Project 1 code as a starting point, create a program to read in text from a source file and print out all recognized numbers to the terminal.

Just like in Project 1, your program should read the source file line by line and store each in a 72 character length buffer. Your program must implement the forward and backward pointers to reference positions in the buffer. You may choose how you wish to implement these, either as ```int``` or ```char*``` types.

### Part 1: Int Machine
Create a function to represent the Int machine and correctly process ```part1.txt```. On each line of the input file there is one or more integers. Using the forward and backwards pointers, iterate over the buffer to identify integers and print the number to the terminal with its corresponding line number. 

#### Example
##### Input
```txt
14
3 9 2019
1000000000
```

#### Output
```txt
1. 14
2. 3
2. 9
2. 2019
3. 1000000000
```

### Part 2: Real Machine
Building off of the Int machine, create a function to represent the Real machine and correctly process ```part2.txt```. On each line of the input file there is one or more reals. Using the forward and backward pointers, iterate over the buffer to identify reals and print the answer to the terminal with its corresponding line number.

#### Example
##### Input
```txt
5.13
36.7 765.3 0.5
56000.33333
```
##### Output
```txt
1. 5.13
2. 36.7
2. 765.3
2. 0.5
3. 56000.33333
```

### Part 3: Long Real Machine
Building off of the Real machine, create a function to represent the Long Real machine and correctly process ```part3.txt```. On each line of the input file there is one or more long reals. Using the forward and backward pointers, iterate over the buffer to identify long reals and print the answer to the terminal with its corresponding line number.

#### Example
##### Input
```txt
1.0E9
2.55E+3 56.98E-39
66666.66E+10 
```
##### Output
```txt
1. 1.0E9
2. 2.55E+3
2. 56.98E-39
3. 66666.66E+10
```

### Part 4: All Numbers
Utilizing all three functions from the previous function, correctly process ```part4.txt```. ON each line of the input file there is one or more numbers. Using the forward and backward points, iterate over the buffer to identify which token type each value belongs to. Print the answer to the terminal with its corresponding line number, lexeme, and token type.

#### Example
##### Input
```txt
14
5.13 1.0E9
2.55E+3 5
```
##### Output
```txt
1. 14 INT
2. 5.13	REAL
2. 1.0E9 LONG REAL
3. 2.55E+3 LONG REAL
3. 5 INT
```

## Pseudocode:
Before you begin writing any C code, plan out your program in pseudocode. Do not worry about proper C syntax, only representing the general programming tools now available to you to construct the general form of your program. Include your pseudocode program in a section of your README report.

This program specifically utilizes other C library functions as part of the assignment. However, it is NOT necessary to know exactly what these functions are or their syntax to properly write pseudocode.

## Requirements and Deliverables:
* A README report outlining your pseudocode, methodology, challenges, and references for the assignment
* A completed ```proj2.c``` source file and any additional source files

## Grading:
Your assignment will be graded according to its adherence to the following:

* Correct file output
* Properly implemented buffer
* Properly implemented forward and backward pointers
* Properly implemented machine functions
* Well commented source code
* Professional README write-up
* Good programming practice

## Student Guidance:
Each subsequent machine literally builds off the functionality of the previous. Reuse your code after you have tested it to make sure it works and expand on it as you go.

To complete part 4, recall the one of the two paradigms utilized to order the machine hierarchy: supersets before subsets. Call the functions in the appropriate order to adhere to this constraint.

Recall the Lexical Analyzer assignment sheet which specifies the maximum number of characters allowed in each section of these numbers. Your program should only accept numbers within these constraints.

Recall the state diagrams from class to guide your machine construction.

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
* On GitHub, create a Pull Request titled **Pn - StudentInitials** (e.g., P2 - NC)