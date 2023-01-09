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
	listint_t *fast, *slow;

	fast = slow = *head;
	while (fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	listint_t *tmp, *prev = NULL;

	while (slow)
	{
		tmp = slow->next;
		slow->next = prev;
		prev = slow;
		slow = tmp;
	}
	while (prev)
	{
		if (prev->n != (*head)->n)
			return (0);
		prev = prev->next;
		*head = (*head)->next;
	}
	return (1);
}
