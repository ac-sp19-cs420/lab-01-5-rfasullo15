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

/*
 This method checks to see if there is a node in the list that already has the given key. If
 so, it returns 1, if not it returns 0.
 */
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

/*
 Find will return the data at the specified key if a node with that key exists. If the key doesnt
 exist it returns 0.
 */
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

/*
 Insert checks to see if there is already a node with that key and if not, creates a new node and
 inserts the new node in numerical order. If the insertion is successful it will return 1, if it
 is not successful it will return 0.
 */
int insert(linkList* list, int dat, int ky){
    
    if(is_in_list(*list, ky) == 0){
        node* current = list -> head;
        if (current -> key > ky){
            node* nw_ptr = (node*)malloc(sizeof(node));
            nw_ptr -> data = dat;
            nw_ptr -> key = ky;
            nw_ptr -> next = current;
            
            list->head = nw_ptr;
            
            return 1;
        }
        while(current!=NULL){
            if (current -> key < ky && current -> next == NULL){ //If you are at the end of the list
                node* nw_ptr = (node*)malloc(sizeof(node));
                nw_ptr -> data = dat;
                nw_ptr -> key = ky;
                nw_ptr -> next = NULL;
                
                current ->next = nw_ptr;
                return 1;
            } else if ((current -> key < ky) && current ->next -> key > ky){ // if you are in the middle of the list
                node* nw_ptr = (node*)malloc(sizeof(node));
                nw_ptr -> data = dat;
                nw_ptr -> key = ky;
                nw_ptr -> next = current-> next;
                
                current -> next = nw_ptr;
                return 1;
            } else {
                current = current -> next;
            }
        }
        
        return 0;
    } else {
        return 0;
    }
}

/*
 Turns the linked list into an array of integers and returns the pointer to the array. This method
 only retains the data values, not the keys.
 */
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

/*
 This method prints out the linked list in the format "Node [key]: [data]"
 */
void print_list(linkList list){
    node* current = list.head;
    while (current != NULL) {
        printf("Node %d: %d \n", current -> key, current -> data);
        current = current -> next;
    }
}

