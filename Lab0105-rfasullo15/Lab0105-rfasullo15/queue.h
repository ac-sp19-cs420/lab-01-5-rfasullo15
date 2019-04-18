//
//  queue.h
//  Lab0105-rfasullo15
//
//  Created by Rosemary Fasullo on 4/18/19.
//  Copyright © 2019 Rosemary Fasullo. All rights reserved.
//

#ifndef queue_h
#define queue_h

#include <stdio.h>
#include "linkedList.h"

typedef struct queue{
    linkList* list;
} queue;

int isempty(queue q);
int last(queue q);
#endif /* queue_h */
