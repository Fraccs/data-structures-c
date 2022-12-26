# data-structures-c

> Data structures in the C programming language.

## Data Structures

1. [ LinkedList ](#linkedlist)
    - [ linked_list_append ](#linked_list_append)
    - [ linked_list_create ](#linked_list_create)
    - [ linked_list_pop ](#linked_list_pop)
    - [ linked_list_print ](#linked_list_print)

## `LinkedList`

> A linear collection of data elements whose order is not given by their physical placement in memory. Instead, each element points to the next.

### `linked_list_append`

> ##### Append a node to the end of the `LinkedList`.

- Prototype: `void linked_list_append(LinkedList*, int)`

### `linked_list_create`

> ##### Creates and initializes a `LinkedList` and returns a pointer to it.

- Prototype: `LinkedList* linked_list_create()`

### `linked_list_pop`

> ##### Remove a node from the end of the `LinkedList`.

- Prototype: `void linked_list_pop()`

### `linked_list_print`

> ##### Print the content of the `LinkedList`.

- Prototype: `void linked_list_print(LinkedList*)`
