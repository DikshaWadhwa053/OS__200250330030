#OS__200250330030
Lecture 1: 

*Difference between a program and process
*Compiling and linking
*Build Process
*Created Makefile and used make
*git
    ->git init
    ->git status
    ->git log
    ->git add
    ->git commit -m

Lecture 2:
*Stack pointer:points to Top of the stack 

*Stack frame:all the arguments,variables,return address are updated when the fxn is called

*Frame pointer:always on starting of Stack frame
and SP on end of Stack frame.

*Careful while using recursive fxn as SF will keep on adding if there is not return command.

*Libraries
    ->Standard Libraries (linux -libc.a and libc.so)
    -> User Libraries or 3rd party library

*Types:
    ->Static =>extension( *.a)
    ->Dynamic(Shared Objects) =>extension( *.so)

*How to create Static Libraries
    ->Extract : ar x
    ->ar crv libname.a add.o sub.o .........n.o

Lecture 4:
*Lstrace
    ->Library calls under executables
    ->user space
    ->Non privileged

*Strace
    ->System calls under execution
    ->kernal space
    ->priveleged

*Used O_CREAT in Open
    ->int file descriptor.
    ->fd represents an open file in the kernal

    
Lecture 5:
*Difference between I/O and System Calls:
    -> Only one \n in two printf :write 1
    -> Two \n in two printf: write 2

*Library calls may be buffered I/O and   have formatted I/O.

*System calls are not buffered I/O and dont have formatted I/O.

*int - file descriptor -
    -> 0 - standard input
    -> 1 - standard output
    -> 2 - standard error

*Fork
    -> fork can be shared using fork -r <file name> forksharing
    ->Output in Child and Parent when a change is made in parent will be depicted in child as well
    ->man Sleep
    ->both Child and parent will have their own Address Space(data,text,heap,bss,text)

*Process Status:
    ->Create:OS will allocate space and pid to process
    ->Ready:Multiple processes can be there in ready state
    ->Running:Only one process at a time
    ->Waiting:Ex Scanf;multiple processes
    ->Destroy:Deallocation  of Resources
    ->Waiting to destroy state:Ctrl+C
    ->Ready to destroy state:kill command
    ->create to destroy not possible

*Scheduling Algorithm:
    ->Will help in choosing the next process for execution(on priority basis or first come first serve)

*Context Switching:
    ->Switching between processes
    ->Context here referrs to the hardware registers 
        $PC
        $SP
        $GPR
        $flags
    ->p1>Context Saving(Current Process)>Scheduling>Context Restoring(New Process)>p2

*Blocking and Non blockin calls:
    ->Non Blocking Calls: Ex printf(immediately returns back after doing is functionality)
    ->Blocking calls: Ex scanf(will wait for the input from the user).




