#ifndef SORTED_LINK_LIST
#define SORTED_LINK_LIST

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

typedef struct node_t {
    int x;
    struct node_t *next;
} *Node;

typedef enum {
    SUCCESS=0, 
    MEMORY_ERROR, 
    EMPTY_LIST, 
    UNSORTED_LIST, 
    NULL_ARGUMENT,
} ErrorCode;

int getListLength(Node list);

bool isListSorted(Node list);

ErrorCode mergeSortedLists(Node list1, Node list2, Node *mergedOut);

void destroyList(Node list);

Node createNode(int value);

#endif