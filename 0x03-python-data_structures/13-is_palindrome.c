#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *is_palindrome - checks if a singly linked list is a palindrome
 *@head: pointer to head of list
 *Return: 0 if it is not a palindrome, 1 if it is a palindrome
 **/
typedef struct listint_s listint_t;

int is_palindrome(listint_t **head) {
    listint_t *tmp = *head;
    int size = 0;
    int array[2048];
    int i = 0;
 
    if (!(*head))
        return (1);
 
    while (tmp != NULL) {
        array[size] = tmp->n;
        size++;
        tmp = tmp->next;
    }
 
    while (i < size) {
        if (array[i] != array[size - 1 - i])
            return (0);
        i++;
    }
    return (1);
}
