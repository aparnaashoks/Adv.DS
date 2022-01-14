#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 25
void push();
void  pop();
void display();
  int top = -1, stack[MAX];
void main ()
{
    int choice;
    clrscr();
    printf ("STACK OPERATION\n");
    while (1)
    {
	printf ("------------------------------------------\n");
	printf ("      1    -->    PUSH               \n");
	printf ("      2    -->    POP               \n");
	printf ("      3    -->    DISPLAY               \n");
	printf ("      4    -->    EXIT           \n");
	printf ("------------------------------------------\n");

	printf ("Enter your choice\n");
	scanf    ("%d", &choice);
	switch (choice)
	{
	case 1:
	    push();
	    break;
	case 2:
	    pop();
	    break;
	case 3:
	    display();
	    break;
	case 4:
	    return;
    }

    }
}
/*  Function to add an element to the stack */
void push ()
{
    int num;
    if (top == (MAX - 1))
    {
	printf ("Stack is Full\n");
	return;
    }
    else
    {
	printf ("Enter the element to be pushed\n");
	scanf ("%d", &num);
	top = top + 1;
	stack[top] = num;
    }
    return;
}
/*  Function to delete an element from the stack */
void pop ()
{
    int num;
    if (top == - 1)
    {
	printf ("Stack is Empty\n");

    }
    else
    {
	num = stack[top];
	printf ("poped element is = %d \n", stack[top]);
	top = top - 1;
    }
}
/*  Function to display the status of the stack */
void display ()
{
    int i;
    if (top == -1)
    {
	printf ("Stack is empty\n");
	return;
    }
    else
    {
	printf ("\n The status of the stack is \n");
	for (i = top; i >= 0; i--)
	{
	    printf ("%d\n", stack[i]);
	}
    }
    printf ("\n");

}
