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


void push (int value, stack* s){
    node* nw_node = (node*)malloc(sizeof(node));
    nw_node -> data = value;
    nw_node -> key = 0;
    
    
    node* current = s -> list -> head;
    while(current != NULL){
        current -> key += 1;
    }
    
}

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

int top (stack s){
    if (is_empty (s) == 0){
        return s.list -> head -> data;
    } else {
        return 0;
    }
}

int is_empty(stack s){
    if (s.list == NULL || s.list -> head == NULL){
        return 1;
    } else {
        return 0;
    }
}
