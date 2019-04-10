//
//  linkedList.h
//  Lab0105-rfasullo15
//
//  Created by Rosemary Fasullo on 4/9/19.
//  Copyright © 2019 Rosemary Fasullo. All rights reserved.
//

#ifndef linkedList_h
#define linkedList_h

#include <stdio.h>

typedef struct node {
    int data; //The value that is actually stored
    int key; //Used for sorting in the linked list
    struct node* next; //The next element in the list
} node;

typedef struct linkList {
    node* head;   //The first element in the linked list
} linkList;

int is_in_list(linkList list, int ky);
int find(linkList list, int ky);
void print_list(linkList list);
int* create_array(linkList list);
#endif /* linkedList_h */
