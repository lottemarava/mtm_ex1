//q2.2
//sorted_lonkes_lists.h

typedef struct node_t {
    int x;
    struct node_t *next;
} *Node;

typedef enum {
    SUCCESS=0, MEMORY_ERROR, EMPTY_LIST, UNSORTED_LIST, NULL_ARGUMENT
} ErrorCode;

int getListLength(Node list);
bool isListSorted(Node list);
ErrorCode mergeSortedLists(Node list1, Node list2, Node *mergedOut);

//sorted_lonkes_lists.c
Node createNode(int value)
{
    Note ptr = malloc(ziseof(ptr));
    if (ptr == NULL)
        return MEMORY_MEMORY;
    prt->x = value;
    prt->next= NULL;
    return ptr;
}

Node destroyList(Node ptr)
{
    while(ptr){
        Node to_delete= ptr;
        ptr= ptr->next;
        free(to_delete);
    }
    
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

