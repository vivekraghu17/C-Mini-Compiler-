# C++ -Mini-Compiler-
Mini Compiler for C++ program that compiles while and if-else construct 


This repository contains 2 main segment lexer and parser 
Lexer  - This checks for tokens in the program and return the tokens to parser
Parser - This contains grammar written to satisfy syntax of C++ Program 

The output will return 2 possibilities 
Without error - parsing successful 
With error - Displays the line number 

The output also contains 
1. Intermediate code for the input code (3 address code)
2. Abstract Syntax Tree (Operators are parent and operands as children)
3. Symbol Table  Entry (Conatins information about variable, keywords . type of variable , scope and line number)

Requirements :
1.Use Ubuntu Operating System 
2. Install Lex Command - sudo apt-get install bison flex
3. Execute lex - lex lexer.l
4. Execute Yacc - yacc -d parser.y
5. gcc y.tab.c -ll -ly
6. ./a.out<test.cpp

Contains Report of our project refer that for any queries 
Screenshots are also uploaded . 
