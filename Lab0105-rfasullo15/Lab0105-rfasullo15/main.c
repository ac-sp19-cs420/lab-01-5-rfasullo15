//
//  main.c
//  Lab0105-rfasullo15
//
//  Created by Rosemary Fasullo on 4/9/19.
//  Copyright © 2019 Rosemary Fasullo. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"
#include "stack.h"
#include "queue.h"

int main(int argc, const char * argv[]) {
    
    
    /*************** BEGIN LINKED LIST TESTING **************/
    
    node* hed_ptr = (node*)malloc(sizeof(node));
    node* nxt_ptr = (node*)malloc(sizeof(node));
    
    
    hed_ptr -> data = 3;
    hed_ptr -> key = 1;
    hed_ptr -> next = nxt_ptr;
    
    nxt_ptr -> data = 6;
    nxt_ptr -> key = 2;
    nxt_ptr -> next = NULL;
    
    linkList* list_ptr = (linkList*)malloc(sizeof(linkList));
    list_ptr -> head = hed_ptr;
    
    int num1 = is_in_list(*(list_ptr), 1);
    printf("The num1 is %d \n", num1);
    
    int num2 = is_in_list(*(list_ptr), 2);
    printf("The num2 is %d \n", num2);
    
    int num3 = is_in_list(*(list_ptr), 0);
    printf("The num3 is %d \n", num3);
    
    int dat1 = find(*list_ptr, 1);
    printf("The data is %d \n", dat1);
    
    int dat2 = find(*list_ptr, 2);
    printf("The data is %d \n", dat2);
    
    int dat3 = find(*list_ptr, 0);
    printf("Oh no! There is %d data here! \n", dat3);
    
    print_list(*list_ptr);
    
    int* array = create_array(*list_ptr);
    
    for(int i = 0; i<2; i++){
        printf("%d\n", array[i]);
    }
    
    int success = insert(list_ptr, 90, 0);
    
    printf("The operation was the number %d success!\n", success);
    print_list(*list_ptr);
    
    success = insert(list_ptr, 78, 8);
    
    printf("The operation was the number %d success!\n", success);
    print_list(*list_ptr);
    
    success = insert(list_ptr, 43, 6);
    
    printf("The operation was the number %d success!\n", success);
    print_list(*list_ptr);
    
    success = insert(list_ptr, 50, 6);
    printf("The operation failed with the number %d\n", success);
    print_list(*list_ptr);
    
    /***************** END LINKED LIST TESTING ******************/
    
    /***************** BEGIN STACK TESTING **********************/
    stack* s_ptr = (stack*)malloc(sizeof(stack));
    
    int value = is_empty(*s_ptr);
    printf("Value: %d\n", value);
    
    linkList* l_ptr = (linkList*)malloc(sizeof(linkList));
    s_ptr -> list = l_ptr;
    value = is_empty(*s_ptr);
    printf("Value: %d\n", value);
    
    s_ptr -> list = list_ptr;
    value = is_empty(*s_ptr);
    printf("Different Value?: %d\n", value);
    
    int top_val = top(*s_ptr);
    printf("The top value is %d\n", top_val);
    
    int pop_val = pop(s_ptr);
    printf("The popped value was %d\n", pop_val);
    print_list(*(s_ptr -> list));
    
    push(32, s_ptr);
    print_list(*(s_ptr -> list));
    
    /****************** END STACK TESTING ***********************/
    
    /****************** BEGIN QUEUE TESTING *********************/
    
    queue* q_ptr = (queue*)malloc(sizeof(queue));
    
    value = isempty(*q_ptr);
    printf("Value: %d\n", value);
    
    q_ptr -> list = l_ptr;
    value = isempty(*q_ptr);
    printf("Value: %d\n", value);
    
    q_ptr -> list = list_ptr;
    value = isempty(*q_ptr);
    printf("Different Value?: %d\n", value);
    
    int last_val = last(*q_ptr);
    printf("The last value is %d\n", last_val);
    
    pushq(87, q_ptr);
    print_list(*(q_ptr-> list));
    
    last_val = popq(q_ptr);
    printf("The last value is %d\n", last_val);
    print_list(*(q_ptr -> list));
    
    
    
    return 0;
}
