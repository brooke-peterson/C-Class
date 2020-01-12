# Project 4 - Reserved Word List
### C Programming (19SP)
### Due: 3 March 2019 @ 2359
## Objective:
Gain an understanding of structs as they relate to Tokenization.

## Assignment:
Using your Project 3 code as a starting point, develop a schema to map number values to token types, attributes, and reserved words and develop a struct for future Tokenization.

### Part 1: Identify Reserved Words
Just as you did in Project 3 to identify CatchAll lexemes, use the grammar to identify all valid reserved words. Document all of them in your README report and request instructor approval via pull request to confirm you have found them all before moving onto the next phase.

### Part 2: Create Constant Schema
Tokens consist of a lexeme, token type, and attribute. It is useful for programmers to code using intuitive identifiers, but simple for computers to compare numbers. Thus, constants will be defined to map each token type and attribute to a numeric value. In either a header file or source file, create constant definitions for every token type and attribute recognized by the lexical analyzer. This does NOT include reserved words which will be handled in the next phase. Recall the point of the reserved word list is to increase program modularity and flexibility. You might consider a variable number of reserved words when constructing your schema.

### Part 3: Reserved Word List
Create a reserved word list text file in accordance to the requirements depicted in the Compiler Project 1 assignment sheet. The file should list each reserved word on its own line followed by token type and attribute integers in the following form:

```txt
RESERVEDWORD	TOKENTYPE	ATTRIBUTE
```

Afterwards, request instructor approval via pull request to confirm you have documented all token types, attributes, and reserved words before moving onto the next phase.

### Part 4: Struct Implementation
Define a struct Token and union Attribute in your source code. Create struct helper functions to create and destroy instances of the struct Token. Example function headers are as follows:

```c
struct *Token createToken(char *lex, int type, union Attribute *att);

int destroyToken(struct Token *token);
```

## Requirements and Deliverables:
* A README report outlining your methodology, challenges, and references for the assignment
* A completed ```proj3.c``` source file and any additional source files

## Grading:
Your assignment will be graded according to its adherence to the following:

* Correct reserved word list
* Valid number schema
* Correct struct and union definitions
* Properly implemented helper functions
* Well commented source code
* Professional README write-up
* Good programming practice

## Student Guidance:
Recall lecture guidance for struct and union definitions as well as number schema guidance. Ask your instructor for help if needed.

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
* On GitHub, create a Pull Request titled **Pn - StudentInitials** (e.g., P4 - NC)