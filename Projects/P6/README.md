# Project 6 - Tokenization and Lexical Errors
### C Programming (19SP)
### Due: 22 April 2019 @ 2359
## Objective:
Gain an understanding of lexical errors as they relate to the machines.

## Assignment:
Using your Project 5 code as a starting point, complete and modify all machines to include tokenization of detected lexemes as well as lexical errors.

### Part 1: Tokenization
Using the struct helper functions created in previous projects, modify all machines so that they create token structs upon identifying valid lexemes. Add these created token structs to the proper linked list when appropriate. This should be a simple process that merely replaces previous terminal print statements with struct helper function calls.

### Part 2: Lexical Errors
Recall the lexical errors discussed in class. Modify the relevant machines so that they handle these lexical errors. Lexical errors should both be tokenized and annotated in the listing file below the relevant line. See the original assignment sheet for details.

## Requirements and Deliverables:
* A README report outlining your methodology, challenges, and references for the assignment
* A completed ```proj6.c``` source file and any additional source files

## Grading:
Your assignment will be graded according to its adherence to the following:

* Correctly implemented linked lists
* Correctly implemented I/O files
* Correct program output
* Well commented source code
* Professional README write-up
* Good programming practice

## Student Guidance:
Remember that handling unrecognized symbols requires tokenization just like all other machines. Move the forward and backward pointers accordingly.

Also note that a single lexeme with multiple errors must have all relevant errors annotated in the listing file. The token file however need reflect only that there was an error.

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
* On GitHub, create a Pull Request titled **Pn - StudentInitials** (e.g., P6 - NC)