#include <stdio.h>
/**
 * main - print numbers from 00 to 99.
(*
 * Return: print 0 on success
 */
int main(void){
    int i;
    int j;
    int k;
    for (i='0';i<='9';i++){
        for(j='0';j<='9';j++){
            for(k='0';k<='9';k++){
                if(i<j && j<k){
                    putchar(i);
                    putchar(j);
                    putchar(k);
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    return (0);
}
