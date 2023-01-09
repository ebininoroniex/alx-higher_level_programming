#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *is_palindrome - checks if a singly linked list is a palindrome
 *@head: pointer to head of list
 *Return: 0 if it is not a palindrome, 1 if it is a palindrome
 **/
int is_palindrome(listint_t **head)
{
	listint_t *start = *head;
	listint_t *end = *head;
	int i, j;

	if (*head == NULL)
		return (1);
	while (end->next != NULL)
	{
		end = end->next;
	}
	for (i = 0; start != end; i++)
	{
		for (j = 0; j < i; j++)
			end = end->next;
		if (start->n != end->n)
			return (0);
		start = start->next;
	}
	return (1);
}
