# Cpp-17-compiler
I learnt a lot from this project side by side with grammar and parser quality and each layer interacting with last one,even generating the code in the fourth layer(supposdly the most easy one), i wish i can continue with more project like this but it take time and too much effort 

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
