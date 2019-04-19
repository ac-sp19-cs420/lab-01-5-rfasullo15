//
//  queue.c
//  Lab0105-rfasullo15
//
//  Created by Rosemary Fasullo on 4/18/19.
//  Copyright © 2019 Rosemary Fasullo. All rights reserved.
//

#include "queue.h"
#include "linkedList.h"
#include <stdlib.h>
#include <stdio.h>

/*
 Checks to see if the queue is empty. The queue is empty when there is no linked list associated
 with the queue or if the linked list associated with the queue has no nodes in it. Returns 1 if
 empty and 0 if not.
 */
int isempty(queue q){
    if (q.list == NULL || q.list -> head == NULL){
        return 1;
    } else {
        return 0;
    }
}

/*
 Returns the value of the head (which is actually the last value of the queue). Does not alter
 the queue in any way.
 */
int last(queue q){
    return q.list -> head -> data;
}

/*
 Removes the head of the queue (which is actually the last value) and returns the data value of
 the head. The method then decrements the keys of all of the other nodes in the queue to reflect
 the change.
 */
int popq(queue* q){
    int value = q -> list -> head -> data;
    
    node* old = q -> list -> head;
    q -> list -> head = old -> next;
    free(old);
    
    node* current = q-> list -> head;
    while(current != NULL){
        current -> key -=1;
        current = current -> next;
    }
    
    return value;
}

/*
 Inserts a node at the back of the list with a key value one greater than the last node in the
 queue. Void method.
 */
void pushq (int value, queue* q){
    node* current = q -> list -> head;
    while (current -> next != NULL){
        current = current -> next;
    }
    
    node* nw_node = (node*)malloc(sizeof(node));
    nw_node -> data = value;
    nw_node -> key = (current -> key) + 1;
    
    current -> next = nw_node;
}
