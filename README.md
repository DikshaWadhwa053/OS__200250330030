#OS__200250330030

Lecture 4:
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
     




