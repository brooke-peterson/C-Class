# Project 3 - Addop, Mulop, CatchAll
### C Programming (19SP)
### Due: 1 April 2019 @ 2359

## Objective:
Gain an understanding of the machine workflow and develop the Addop, Mulop, and CatchAll machines to identify program identifiers and operator symbols.

## Assignment:
Using your Project 2 code as a starting point, create a program to read in text from a source file and print out all recognized operators to the terminal.

Unlike the previous projects, the state machines here have breadth and not depth. That is to say, lexemes detected by these machines are simple but numerous, most being only a single character.

You may choose to implement the Addop and Mulop machines within the CatchAll machine, or as their own functions. If you choose to implement their functionality in the CatchAll machine, be aware that they still constitute their own token types.

### Part 1: Grammar Analysis 
Utilizing the grammar provided earlier in the semester, find and list all CatchAll lexemes in your README report. Submit this to your instructor prior to coding the machine to verify you have found all occurrences. CatchAll symbols consist of terminals in the grammar not defined by another token type. For the Addop and Mulop lexemes, see the back of the grammar sheet for their listings. There are only a few of them so your machines should be straight forward. After part 1 has been approved by your instructor, test files will be provided similarly to the previous projects.

### Part 2: Implementation
Just like in previous assignments, construct functions for each machine to iterate through the buffer and attempt to detect tokens. If you choose to implement the Addop and Mulop machines separately, then you will need three functions.

#### Example
##### Input
```txt
+ /
; * 
or )
```
##### Output
```txt
1. + Addop
1. / Mulop
2. ; CatchAll
2. * Mulop
3. or Addop
3. ) CatchAll
```

## Pseudocode:
Due to the simple machine structure for this project, a pseudocode section is not required.

## Requirements and Deliverables:
* A README report outlining your methodology, challenges, and references for the assignment
* A completed ```proj3.c``` source file and any additional source files

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
* On GitHub, create a Pull Request titled **Pn - StudentInitials** (e.g., P3 - NC)