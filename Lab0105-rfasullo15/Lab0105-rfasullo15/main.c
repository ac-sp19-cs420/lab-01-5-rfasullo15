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

int main(int argc, const char * argv[]) {
    node* hed_ptr = (node*)malloc(sizeof(node));
    node* nxt_ptr = (node*)malloc(sizeof(node));
    
    
    hed_ptr -> data = 3;
    hed_ptr -> key = 0;
    hed_ptr -> next = nxt_ptr;
    
    nxt_ptr -> data = 6;
    nxt_ptr -> key = 1;
    nxt_ptr -> next = NULL;
    
    linkList* list_ptr = (linkList*)malloc(sizeof(linkList));
    list_ptr -> head = hed_ptr;
    
    int num1 = is_in_list(*(list_ptr), 0);
    printf("The num1 is %d \n", num1);
    
    int num2 = is_in_list(*(list_ptr), 1);
    printf("The num2 is %d \n", num2);
    
    int num3 = is_in_list(*(list_ptr), 2);
    printf("The num3 is %d \n", num3);
    
    int dat1 = find(*list_ptr, 0);
    printf("The data is %d \n", dat1);
    
    int dat2 = find(*list_ptr, 1);
    printf("The data is %d \n", dat2);
    
    int dat3 = find(*list_ptr, 2);
    printf("Oh no! There is %d data here! \n", dat3);
    
    print_list(*list_ptr);
    
    int* array = create_array(*list_ptr);
    
    for(int i = 0; i<2; i++){
        printf("%d\n", array[i]);
    }
    
    
    return 0;
}
