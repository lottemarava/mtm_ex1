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

Node addNextNode (Node head, Node new_node)
{
    if(head == NULL)
        return new_node;
    Node ptr = head;
    while(ptr->next)
        ptr = ptr->next;
    ptr->next = new_node;
    return head;  
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

bool cheackIflistsAreNull (Node list1, Node list2, Node *mergedOut)
{
    if (getListLength(list1) ==  NULL || getListLength(list2) ==  NULL)
    {
        mergedOut=NULL;
        return true;
    }
    false;
}

bool cheackIfCreateReturnNUll (Node list, Node *mergedOut)
{
    if(list == NULL)
    {
        mergedOut = NULL;
        return true;  
    }
    return false;
}


ErrorCode mergeSortedLists(Node list1, Node list2, Node *mergedOut)
{
    Node ptr_list1= list1, ptr_list2= list2;
    if (cheackIflistsAreNull (ptr_list1, ptr_list2, mergedOut))  
        return EMPTY_LIST;
    int smaller_value_list= compareNodes(ptr_list1, ptr_list2);
    Node new_list = createNode(smaller_value_list);
    if (cheackIfCreateReturnNUll (new_list, mergedOut))
        return MEMORY_ERROR;
    while(ptr_list1 != NULL || ptr_list2 != NULL)
    {
        int next_smaller_value = compareNodes(ptr_list1, ptr_list2);
        Node next_node = createNode(next_smaller_value);
        new_list= addNextNode (new_list, next_node);
        if (cheackIfCreateReturnNUll (new_list, mergedOut))
            return MEMORY_ERROR;
    }
    mergedOut= new_list;
    return SUCCESS;
}
