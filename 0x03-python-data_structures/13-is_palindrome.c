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
	listint_t *node = *head;
	listint_t *prev = NULL;
	int res = 1;

	while (node)
	{
		listint_t *next = node->next;

		node->next = prev;
		prev = node;
		node = next;
	}
	node = prev;
	while (node)
	{
		if (node->n != (*head)->n)
		{
			res = 0;
			break;
		}
		node = node->next;
		(*head) = (*head)->next;
	}
	return (res);
}
