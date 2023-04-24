#include <malloc.h>
#include <stdio.h>

long* sp = 0;
long* bp = 0;
long pop(){
    long res = *sp;
    sp++;
    return res;
}
void push(long value){
    sp--;
    *sp = value;
}
void initialize(int size){
    bp = (long*)malloc(size*8);
    sp = bp + size;
}
int main(){
    initialize(10);
    push(5);
    push(10);
    push(20);
    long b = pop();
    
    printf("%ld", b);
    long c = pop();
    
    printf("%ld", c);
    long d = pop();
    
    printf("%ld", d);
    
}
