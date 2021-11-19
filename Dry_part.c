//q2.1
//q2.1.1
#include <stdlib.h>
#include <string.h>
#include <assert.h>
char *stringduplicator(char *s, int times) {    //convention1   //convention2
    assert(!s);    //coding1
    assert(times > 0);
    int LEN = strlen(*s);   //coding2   //convention3  
    char *out = malloc(LEN * times);    //coding3
    assert(out);    //coding4
    for (int i = 0; i < times; i++) {  
    out = out + LEN;    //convention4
    strcpy(out, s);
    }
    return out;   //coding5
}
//conventions errors-
//convention1- function name should start with upper lettter from the second word and on.
//convention2- wording function names as verbs, not action names.
//convention3- variables names in lower case and not upper case.
//convention4- no indentation is used in  if block. 

//coding erroes-
//coding1- if the string s is NULL we sholud return NULL and not collapse the program. 
//coding2- strlen function input is pointer. using dereferance to a pointer sends to strlen valuse instead of pointer.
//coding3- no memory allocation was made for '/0' at the end of the new srting, and need to duplicate sizeof(len) because the allocation is of bits.
//coding4- assert doent check if out is NULL but if its not. if the string out is NULL we sholud return NULL and not collapse the program. 
//coding5- out is not a pointer for the start of the string beacuse we promoted out pointer in the coppy loop instead of promoting coopy of the pointer. 

//q2.1.2
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

//q2.2
//sorted_lonkes_lists.h
#include <stdbool.h>
typedef struct node_t {
    int x;
    struct node_t *next;
} *Node;

typedef enum {
    SUCCESS=0, MEMORY_ERROR, EMPTY_LIST, UNSORTED_LIST, NULL_ARGUMENT,
} ErrorCode;

int getListLength(Node list);
bool isListSorted(Node list);
ErrorCode mergeSortedLists(Node list1, Node list2, Node *mergedOut);

//sorted_lonkes_lists.c
#include <assert.h>
#include <stdlib.h>

static int compareValues(Node list1, Node list2)
{
    if(list1->x >= lisrt2->x)
        return list1->x;
    return list2->x
}
ErrorCode mergeSortedLists(Node list1, Node list2, Node *mergedOut)
{
    assert(isListSorted(list1) && isListSorted(list2));
    mergedOut = malloc(sizeof(*mergedOut));
    if(getListLength(list1) == 0)
    {
        //  coppy list2 to  mergr
        return EMPTY_LIST;
    }
    if(getListLength(list2) == 0)
    {
        //  coppy list1 to  mergr
        return EMPTY_LIST;
    }
    
    return SUCCESS;
}

