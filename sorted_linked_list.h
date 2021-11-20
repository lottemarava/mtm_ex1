#ifndef SORTED_LINK_LIST
#define SORTED_LINK_LIST
#include <stdbool.h>

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

/* Return value- the list length, counting the amount of nodes in the list */
/* Error values-  */
int getListLength(Node list);

/* Return valus- true or false if the list is Sorted in ascending order */
/* Error values-  */
bool isListSorted(Node list);

/* Return valus- */
/* Error values- */
ErrorCode mergeSortedLists(Node list1, Node list2, Node *mergedOut);

/* Return valus- */
/* Error values- */
void destroyList(Node list);

/* Return valus- */
/* Error values- */
Node createNode(int value);

/* Return valus- */
/* Error values- */
Node addNextNode (Node head, Node new_node);

#endif