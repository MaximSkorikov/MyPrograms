#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

struct element_stack
{
    int k;
    struct element_stack *next_element;
};

static struct element_stack *header;

void init(void)
{
    header = NULL;
}

void push(int data)
{
    struct element_stack *new_struct = malloc(sizeof(struct element_stack));
    new_struct-> k = data;
    new_struct-> next_element=header;
    header=new_struct ;
}


void pop(void)
{
    if(header==NULL)
    {
         printf("pop is working\n");
    }
    else
    {
        int c;
        //struct element_stack *p;
        c = header -> k;
        //p=header;
        header = header -> next_element;
    }
}


void show(void)
{
    if (header == NULL)
        printf("stack is empty\n");
    else
        {
            for (struct element_stack *el = header; el != NULL; el = el -> next_element)
            {
                printf("%d  ", el -> k);

            }
            printf("\n");
        }
}
