#ifndef SORTED_LINK_LIST
#define SORTED_LINK_LIST

#include <sorted_linked_list.h>

//Create new node with a value
Node createNode(int value)
{
    Node ptr = malloc(sizeof(ptr));
    if (ptr == NULL)
        return NULL;
    ptr->x = value;
    ptr->next= NULL;
    return ptr;
}

//Destroy the whole list
void destroyList(Node ptr)
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

#endif


