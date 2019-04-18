//
//  stack.h
//  Lab0105-rfasullo15
//
//  Created by Rosemary Fasullo on 4/17/19.
//  Copyright © 2019 Rosemary Fasullo. All rights reserved.
//

#ifndef stack_h
#define stack_h

#include <stdio.h>
#include "linkedList.h"

typedef struct stack {
    linkList* list;
} stack;

int is_empty(stack s);
int top(stack s);
#endif /* stack_h */
