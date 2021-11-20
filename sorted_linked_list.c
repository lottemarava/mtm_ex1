#include "sorted_linked_list.h"
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int getListLength(Node list)
{
    int counter=0;
    Node list_for_count= list;
    while(list_for_count != NULL){
        counter++;
        list_for_count= list_for_count->next;
    }
    return counter;
}

bool isListSorted(Node list){
    if (list == NULL)
        return true;
    for (Node index =list ; index->next != NULL; index=index->next)
        if (index->x > index->next->x)
            return false;
    return true;
}

Node createNode(int value)
{
    Node ptr = malloc(sizeof(ptr));
    if (ptr == NULL)
        return NULL;
    ptr->x = value;
    ptr->next= NULL;
    return ptr;
}

bool cheackIfValid ()
{

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
    Node ptr_list1= list1, ptr_list2= list2;
    if (getListLength(ptr_list1) ==  NULL || getListLength(ptr_list2) ==  NULL)
    {
        mergedOut=NULL;
        return EMPTY_LIST;
    }
    int smaller_value_list= compareNodes(ptr_list1, ptr_list2);
    Node new_list = createNode(smaller_value_list);
    if (new_list == NULL){
        mergedOut= NULL;
        return MEMORY_ERROR;
    }
    isValid();

    int value_sorted= coppyNode(smaller_value_list);
    createNode(value_sorted);
    if (new_list == NULL){
        mergedOut= NULL;
        return MEMORY_ERROR;
    }


}
