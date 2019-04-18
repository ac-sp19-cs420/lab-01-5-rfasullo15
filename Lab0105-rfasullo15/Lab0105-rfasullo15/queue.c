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

int isempty(queue q){
    if (q.list == NULL || q.list -> head == NULL){
        return 1;
    } else {
        return 0;
    }
}

int last(queue q){
    node* current = q.list -> head;
    while(current -> next != NULL){
        current = current -> next;
    }
    
    return current -> data;
}

int pop(queue* q){
    return 0;
}
