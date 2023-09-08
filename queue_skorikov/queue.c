#include <stdlib.h>
#include <stdio.h>
#include "queue.h"

struct queue_item {

    int data;
    struct queue_item *next_item;
};

struct queue_item *head;

struct queue_item *tail;


void init_queue(void) {
    head = tail = NULL;
}

void show_queue(void) {

    if (head == NULL) {
        printf("queue is empty");
        printf("\n");
    }
    else {
        for (struct queue_item *el = head; el != NULL; el = el -> next_item)
            {

             printf("%d  ", el -> data);

            }
            printf("\n");
    }
}

void push_queue(int n) {

//выделить необходимую память с помощью malloc
    struct queue_item *new_item = malloc(sizeof(struct queue_item));
    new_item -> data = n;
    new_item -> next_item = NULL;
//добавить 1 элемент
    if (head == NULL) {
        head = new_item;
        tail = new_item;
    }
    else {
        tail -> next_item = new_item;
//настроить на него head и tail
    tail = new_item;
    }
}

int pop_queue(void) {

    if(head == NULL) {

        return -1;
    }
    int c;
    c = head -> data;
    head = head -> next_item;
    return c;
}


