#include <stdio.h>
#include "add.c"
#include "sub.c"
#include "mul.c"
int addcall();
int subCall();
int mulcall();
void main()
{
    mulcall();
    //subCall();
    //addCall();
}

int mulcall(){
    mul();
    return 0;
}

int subCall(){
    sub();
    return 0;
}

int addcall(){
   add();
   return 0;
}