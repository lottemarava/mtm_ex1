#include <stdlib.h>
#include <string.h>
#include <assert.h>
char *stringduplicator(char *s, int times) {    //convention1- function name should start with upper lettter from the second word and on 
                                                //convention2- wording function names as verbs, not action names.
    assert(!s);    //coding1- if the string s is NULL we sholud return NULL and not collapse the program  
    assert(times > 0);
    int LEN = strlen(*s);   //coding2- strlen function input is pointer. using dereferance to a pointer sends to strlen valuse instead of pointer.
                            //convention3- variables names in lower case and not upper case.
    char *out = malloc(LEN * times);    //coding3- no memory allocation was made for '/0' at the end of the new srting, and need to duplicate sizeof(len) because the allocation is of bits.
    assert(out);    //coding4- assert doent check if out is NULL but if its not. if the string out is NULL we sholud return NULL and not collapse the program. 
    for (int i = 0; i < times; i++) {  
    out = out + LEN;    //convention4- no indentation is used in  if block 
    strcpy(out, s);
    }
    return out;   //coding5- out is not a pointer for the start of the string beacuse we promoted out pointer in the coppy loop instead of promoting coopy of the pointer. 
}

//Fixed version of the above code
#include <stdlib.h>
#include <string.h>
#include <assert.h>
char *duplicateTheString(char *s, int times)
{    
    if(s == NULL)
        return NULL;   
    assert(times > 0);
    int len = strlen(*s);  
    char *out = malloc(sizeof(len) * times + 1 );    
    if (out == NULL)
        return NULL;    
    char *out_coppy = out; 
    for (int i = 0; i < times; i++) 
    {
        strcpy(out_coppy, s);
        out_coppy = out_coppy + len;  
    }
    return out;   
}