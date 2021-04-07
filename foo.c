#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]){
    int pid, n_p;
    
    if(argc < 2){
        printf(1, "Process ID and New Priority not mentioned.\n");
        exit();
    }
    else{
        pid = atoi ( argv[1]); // Command line input
    }

    if(argc < 3){
        printf(1, "New Priority not mentioned.\n");
        exit();
    }
    else{
        n_p = atoi ( argv[2] );
    }

    int res = changepriority(pid, n_p);

    if(res == 1){
        printf(1, "Priority of Process %d is changed to %d sucessfully.\n", pid, n_p);
    }
    else{
        printf(1, "Error changing Priority of Process %d.\n", pid);
    }

    exit();
}