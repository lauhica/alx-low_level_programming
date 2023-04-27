0x12. C - Singly Linked Lists

This task looks at the concept of singly linked lists in C. In short, singly linked lists are data structures that are used to store and organize data (information) in a way that makes for easy access and manageability. 

Task 0. Print list

Write a function that prints all the elements of a list_t list.
	
	Prototype: size_t print_list(const list_t *h)

Task 1. List length

Write a function that returns the number of elements in a linked list_t list.

	Prototype: size_t list_len(const list_t *h)

Task 2. Add node

Write a function that adds a new node at the beginning of a list_t list.

	Prototype: list_t *add_node(list_t **head, const char *str)

Task 3. Add node at the end

Write a function that adds a new node at the end of a list_t list.

	Prototype: list_t *add_node_end(list_t **head, const char *str)

Task 4. Free list

Write a function that frees a list_t list.

	Prototype: void free_list(list_t *head)
