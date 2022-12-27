#include "linked_list.h"

// Create a LinkedList
LinkedList* linked_list_create() {
    LinkedList* linked_list = malloc(sizeof(LinkedList));

    linked_list->head = NULL;
    linked_list->length = 0;
    linked_list->tail = NULL;

    return linked_list;
}

// Append a node to the tail of the LinkedList
void linked_list_append(LinkedList* linked_list, int value) {
    Node* new = malloc(sizeof(Node));
    Node* head = linked_list->head;
    Node* tail = linked_list->tail;

    new->value = value;
    new->next = NULL;

    // Empty LinkedList
    if(linked_list->head == NULL) {
        linked_list->head = new;
        linked_list->length++;
        return;
    }

    // 1-Element LinkedList
    if(linked_list->tail == NULL) {
        head->next = new;
        linked_list->tail = new;
        linked_list->length++;
        return;
    }

    // Non-Empty LinkedList
    tail->next = new;
    linked_list->tail = new;
    linked_list->length++;
}

// Pop a node from the tail of the LinkedList
void linked_list_pop(LinkedList* linked_list) {
    Node* head = linked_list->head;
    Node* tail = linked_list->tail;

    // Empty LinkedList
    if(linked_list->head == NULL) {
        return;
    }

    // 1-Element LinkedList
    if(linked_list->tail == NULL) {
        free(linked_list->head);
        linked_list->head = NULL;
        linked_list->length--;
        return;
    }

    // Non-Empty LinkedList
    while(head != NULL) {
        if(head->next == tail) {
            if(linked_list->length == 2) {
                linked_list->tail = NULL;
            }
            else {
                linked_list->tail = head;
            }

            free(tail); // Deallocate the tail
            head->next = NULL;

            break;
        }

        head = head->next;
    }

    linked_list->length--;
}

// Print the entire LinkedList to stdout
void linked_list_print(const LinkedList* linked_list) {
    Node* temp = linked_list->head;    

    while(temp != NULL) {
        if(temp->next == NULL) {
            printf("%d", temp->value);
        }
        else {
            printf("%d -> ", temp->value);
        }

        temp = temp->next;
    }

    printf("\n");
}
