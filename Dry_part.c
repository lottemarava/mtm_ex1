#include <stdlib.h>
#include <string.h>
#include <assert.h>
char *stringduplicator(char *s, int times) {    //convention1- function name should start with upper lettter from the second word and on 
    assert(!s);    //coding1- we can not asume that the string isnt NULL, assert used for checking our assumptions   
    assert(times > 0);
    int LEN = strlen(*s);   //coding2- strlen function input is pointer. using dereferance to a pointer sends to strlen valuse instead of pointer.
                            //convention2- variables names in lower case and not upper case.
    char *out = malloc(LEN * times);    //coding3- no memory allocation was made for '/0' at the end of the new srting
    assert(out);
    for (int i = 0; i < times; i++) {
    out = out + LEN;    //convention3- no indentation is used in  if block 
    strcpy(out, s);
    }
    return out;
}