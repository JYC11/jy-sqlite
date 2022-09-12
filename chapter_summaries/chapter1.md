# chapter 1

dbs have the following structure:

1. Tokenizer
2. Parser
3. Code Generator
4. Virtual Machine
5. B-tree
6. Pager
7. OS interface

1-3 are the "frontend" of the db responsible for getting and parsing commands
4-7 are the "backend" of the db responsible for executing the parsed commands

## REPL

REPL = Read Evaluate Print Loop
This is the method in which the db continuosly receives commands
