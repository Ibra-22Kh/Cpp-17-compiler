# Cpp-17-compiler
This project used fiver layers of Compiler
-Lexical Analyzer
-Syntax Analyzer
-Symmantic Analyzer 
-Intermediate Generate Code
-Optimizer

I added the AST(Abstract Syntax Tree) to this project to learn the process of the compiling and cutting the edges in the optimizer layer.

This project had been done using OOP and some of python elimenation code, also using CFG(Context Free Grammar) that i tried to simplify in the: 

```
grammar.txt
```

I learnt a lot from this project side by side with grammar, parser, quality coding, and each layer interacting with it's successor or subsequent layer , even generating the code in the fourth layer(supposdely the most easy one), I wish to continue coding more project like this.


# Running this file 
```
./run.sh
```
Please don't forget to change access permission.

# On Linux:
```
Run : chmod  770 *  
```

# On Windows:

Windows comes with a special command line utility called CACLS.

You can use it as follows:
```
CACLS files /e /p {USERNAME}:{PERMISSION}
```
Where,

/p : Set new permission

/e : Edit permission and kept old permission as it is i.e. edit ACL instead of replacing it.

{USERNAME} : Name of user

{PERMISSION} : Permission can be:

R – Read

W – Write

C – Change (write)

F – Full control
