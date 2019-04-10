//
//  linkedList.c
//  Lab0105-rfasullo15
//
//  Created by Rosemary Fasullo on 4/9/19.
//  Copyright © 2019 Rosemary Fasullo. All rights reserved.
//

#include "linkedList.h"
#include <stdio.h>
#include <stdlib.h>


int is_in_list(linkList list, int ky){
    node* current = list.head;
    while (current != NULL){
        if((current -> key) == ky){
            return 1;
        } else {
            current = current -> next;
        }
    }
    return 0;
}

int find(linkList list, int ky){
    if(is_in_list(list, ky) == 1){
        node* current = list.head;
        while (current != NULL){
            if((current -> key) == ky){
                return current -> data;
            } else {
                current = current -> next;
            }
        }
    }
    return 0;
}

int insert(linkList list, int dat, int ky){
    
    if(is_in_list(list, ky) == 0){
        
        
        
        //node* node_ptr = (node*)malloc(sizeof(node));
        return 1;
    } else {
    
    
        return 0;
    }
}

int* create_array(linkList list){
    node* current = list.head;
    int* array = (int*)malloc(sizeof(int));
    int size = 1;
    int index = 0;
    while (current != NULL) {
        if(index<size){
            array[index] = current -> data;
        } else {
            size++;
            array = (int*)realloc(array, ((size)*sizeof(int)));
            array[index] = current -> data;
        }
        
        current = current -> next;
        index++;
        
    }
    
    return array;
}

void print_list(linkList list){
    node* current = list.head;
    while (current != NULL) {
        printf("Node %d: %d \n", current -> key, current -> data);
        current = current -> next;
    }
}

