//
//  main.c
//  AlgorithmsInC
//
//  Created by Ozan Deniz on 06/08/15.
//  Copyright (c) 2015 Ozan Deniz. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    
    int value;
    char* name;
    
    struct node* next;
    
} node;

int add_new_item(char* name, int value){
    
    int retVal = 0;
    
    return retVal;
    
}

int main(int argc, const char * argv[]) {
    
    node *root = (node *)malloc(sizeof(node));
    
    root->value = 1;
    root->name = "Test";
    printf("%s",root->name);
    
    return 0;
}