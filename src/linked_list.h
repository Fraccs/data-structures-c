#ifndef _LINKED_LIST_H
#define _LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct _Node {
    int value;
    struct _Node* next;
} Node;

typedef struct _LinkedList {
    struct _Node* head;
    int length;
} LinkedList;

// Create a LinkedList
LinkedList* linked_list_create();

// Append a node to the tail of the LinkedList
void linked_list_append(LinkedList*, int value);

// Append a node to the tail of the LinkedList
void linked_list_pop(LinkedList*);

// Print the entire LinkedList to stdout
void linked_list_print(const LinkedList*);

#endif
