#include <stdio.h>
#include <unistd.h>

int main(int argc,int *arg[]){

execv("sequential_min_max", arg);
return 0;

}
