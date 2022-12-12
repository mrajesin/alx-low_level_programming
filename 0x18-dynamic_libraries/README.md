# Dynamic_Libraries
## For the last advanced task. 🐋
- Go to your root
- Clone the required repository
- cd into the cloned repository 
- get current error message ### ./gm 9 8 10 24 75 9
- get the function calls used to develop the program about to tampered with. ### ltrace ./gm 9 8 10 24 75 9
- Having seen it, we use printf to inject our new command(feel free to pick any function call of choice)
- To see how printf prototypes works  - ### man 3 printf
- NB: how to know what correct message to print 🤔 ### string gm | less
- The above  displays the messages required

### gcc -fPIC  -c file.c
### gcc -shared -o file.so file.o
##### LD_PRELOAD=/"where-gm-islocated"/file.so ./gm 9 8 10 24 75 - 9
