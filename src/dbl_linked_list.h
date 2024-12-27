#ifndef DBL_LINKED_LIST
#define DBL_LINKED_LIST

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

typedef struct node {
    void* node_data;
    struct node* prev;
    struct node* next;
} node;

// Node creation
node* create_node(void* data); 

// Traversal
void forward_traversal(node* head);
void backward_traversal(node* tail);

// Length of list
int find_length(node* head);

// Insertion
node* insert_begin(node* head, void* data);
node* insert_end(node* head, void* data);
node* insert_at_position(node* head, void* data, int pos);

// Deletion
node* del_head(node* head);
node* del_last(node* head);
node* del_pos(node* head, int pos);

// Search
node* search_by_position(node* head, int pos);

// Utility
bool is_empty(node* head);
void print_list(node* head);

#endif // DBL_LINKED_LIST
