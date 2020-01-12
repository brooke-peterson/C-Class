# Project 5 - IdRes Machine and Tokenization
### C Programming (19SP)
### Due: 12 April 2019 @ 2359
## Objective:
Gain an understanding of the IdRes machine and machine Tokenization.

## Assignment:
Using your Project 4 code as a starting point, complete the IdRes machine and all file I/O.

### Part 1: Initialize Reserved Word List
Using the reserved word list created in Project 4, read the file and generate a linked list of Tokens to create the reserved word list. After creating the linked list, iterate over it and print each token and its child elements to the terminal for verification.

### Part 2: IdRes Machine
Create the IdRes machine to tokenize identifiers and reserved words. Recall the process of the IdRes machine. It interfaces with the reserved words linked list, the symbol linked list of identifiers, and the token linked list. Just like the previous projects, your program will read input from a source file and tokenize all identifiers and reserved words. However, instead of merely printing tokens to the terminal as you find them, this time you will actually construct all three output files. The output files are the listing file, the token file, and the symbol table. See the original Project 1 assignment sheet from the Compiler Construction course handout for details. 

Run your program to read input from part2.txt and generate all three output files. To help you test your program, other text files with identifiers and reserved words respectively will be provided.

## Requirements and Deliverables:
* A README report outlining your methodology, challenges, and references for the assignment
* A completed ```proj5.c``` source file and any additional source files

## Grading:
Your assignment will be graded according to its adherence to the following:

* Correctly implemented linked lists
* Correctly implemented I/O files
* Correct program output
* Well commented source code
* Professional README write-up
* Good programming practice

## Student Guidance:
If you are implementing a function to add nodes to a linked list understand there's something tricky you must do to get it to work. Don't let this dissuade you from attempting it though, ask your instructor if you have issues.

Remember the different Attribute types when printing output to the files. Depending on how you try to write these the files you might want to pay attention to the type specifiers.

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
* On GitHub, create a Pull Request titled **Pn - StudentInitials** (e.g., P5 - NC)