# Project 0 - File I/O
### C Programming (19SP)
### Due: 25 February 2019 @ 2359

## Objective:
Gain an understanding of file input and output in C using standard library functions to prepare for developing the rest of the lexical analyzer project.

## Assignment:
### Part 1:
Create a C program to read the contents of a text file and write the contexts out to a file, effectively creating a new copy. Like the Lexical Analyzer project, this program must read the source input file one line at a time and store it in a 72-character buffer. Assume the source file will never have lines longer than 72 characters in length. The program will then write the contents of the buffer to an output file. The input file will be named ```src.txt``` and the output file will be named ```list.txt```. 

#### Steps:
1. Open the source file in read mode
2. Open the listing file in write mode
3. Define a 72 byte buffer
4. Read each line into the buffer
5. Write each line from the buffer to the output file
6. Close both files

### Part 2:
Build off of Part 1 by modifying your code such that the output file contains line numbers. This means each line written from the buffer should be prepended with its respective sequential line number. Line numbers should start at ```1.``` and take the form of ```#. BUFFER``` where ```#``` is the current line number and ```BUFFER``` is the contents of the buffer preceded by a space separating it from the period.

#### Steps:
1. Add a counter to your code initialized at 1
2. Begin each line of the output file with a line number
3. Increment the counter for each new line

### Example:
#### src.txt
```txt
This is the input file.
It has several lines.
Good luck on the assignment!
```

#### list.txt
```txt
1. This is the input file.
2. It has several lines.
3. Good luck on the assignment!
```

## Pseudocode:
Before you begin writing any C code, plan out your program in pseudocode. Do not worry about proper C syntax, only representing the general programming tools now available to you to construct the general form of your program. Include your pseudocode program in a section of your README report.

This program specifically utilizes other C library functions as part of the assignment. However, it is NOT necessary to know exactly what these functions are or their syntax to properly write pseudocode.

## Requirements and Deliverables:
* A README report outlining your pseudocode, methodology, challenges, and references for the assignment
* A completed ```proj0.c``` source file and any additional source files

## Grading:
Your assignment will be graded according to its adherence to the following:

* Correct file output
* Properly implemented buffer
* Well commented source code
* Professional README write-up
* Good programming practice

## Student Guidance:
The Steps section of Part 2 is intentionally vague and you may implement requirements as you see fit. Options include but are not limited to, concatenating the buffer string with a line number string and writing the new one out to the file or writing the line number first and then writing the contents of the buffer separately.

There are also many various file I/O functions in C. You may use whatever you are comfortable with and are not limited to those suggested in class. Use online resources and documentation to research your options.

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
* On GitHub, create a Pull Request titled **Pn - StudentInitials** (e.g., P0 - NC)