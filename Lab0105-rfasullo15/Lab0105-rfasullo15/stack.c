//
//  stack.c
//  Lab0105-rfasullo15
//
//  Created by Rosemary Fasullo on 4/17/19.
//  Copyright © 2019 Rosemary Fasullo. All rights reserved.
//

#include "stack.h"
#include "linkedList.h"
#include <stdlib.h>
#include <stdio.h>

/*
 Inserts a new node as the head of the list and increments all of the keys to refelct the change
 in the list. Void method.
 */
void push (int value, stack* s){
    node* nw_node = (node*)malloc(sizeof(node));
    nw_node -> data = value;
    nw_node -> key = 0;
    
    
    node* current = s -> list -> head;
    while(current != NULL){
        current -> key += 1;
        current = current -> next;
    }
    
    nw_node -> next = s -> list -> head;
    
    s-> list -> head = nw_node;
    
    
    
}

/*
 Removes the head of the stack and returns the data value of the head.
 */
int pop (stack* s){
    if(is_empty(*s) == 0){
        node* old = s-> list-> head;
        int val = old -> data;
        s -> list -> head = old -> next;
        free(old);
        return val;
    }
    return 0;
}

/*
 Returns the data value of the head of the stack but does not alter the stack at all.
 */
int top (stack s){
    if (is_empty (s) == 0){
        return s.list -> head -> data;
    } else {
        return 0;
    }
}

/*
 Checks to see if the stack is empty. The stack is empty when there is no linked list associated
 with the stack or if the linked list associated with the stack has no nodes in it. Returns 1 if
 empty and 0 if not.
 */
int is_empty(stack s){
    if (s.list == NULL || s.list -> head == NULL){
        return 1;
    } else {
        return 0;
    }
}
