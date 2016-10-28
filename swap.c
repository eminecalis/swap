#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 80

typedef struct list {
	char *name;
	struct list *prev;
	struct list *next;
	
}List; 

swap_int(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;	
}

swap_char(char *first_char, char *second_char)
{
	char temp;
	temp = *first_char;
	*first_char = *second_char;
	*second_char = temp;	
}

swap_string (char **str1, char **str2)
{
	char *str_temp = malloc(MAX);
/*	strcpy(str_temp,str1);
	strcpy(str1,str2);
	strcpy(str2,str_temp);*/
    *str_temp = *str1;
    *str1 = *str2;
    *str2 = *str1;	
	
}

swap_listItem(List **item1, List **item2) 
{
	List *temp;
	temp = malloc(sizeof(List));
	*temp = **item1;
	**item1 = **item2;
	**item2 = *temp;
/*	temp.name = item1->name;
	temp.next = item1->next;
	temp.prev = item1->prev;
	item1->name = item2->name;
	item1->prev = item2->prev;
	item1->next = item2->next;
	item2->name = temp.name;
	item2->prev = temp.prev;
	item2->next = temp.next;*/
	
}

int main (int argc, char*argv[])
{
	int x = 5;
	int y = 7;
	char first = 'a';
	char second = 'b';
	List *item1;
	item1 = malloc(sizeof(List));
	List *item2;
	item2 = malloc(sizeof(List));
	item1->name = "First element";
	item1->next = item2;
	item1->prev = "NULL";
	item2->name = "Second element";
	item2->next = "NULL";
	item1->prev = item1;
	char str1 [MAX] = "Hello";
	char str2 [MAX]= "World";
	char *string1 = str1;
	char *string2 = str2;	
	printf("Werte vor  dem swapen x: %d und y: %d\n", x, y);
	swap_int(&x,&y);
	printf("Werte nach dem swapen x: %d und y: %d\n", x, y);
	printf("Buchstaben vor  dem swapen first: %c und second: %c \n", first, second);
	swap_char(&first, &second);
	printf("Buchstaben nach dem swapen first: %c und second: %c \n", first, second);
	printf("Listenelemente vor  dem swappen name item1: %s \n                                name item2: %s, \n", item1->name, item2->name);
	swap_listItem(&item1, &item2);
	printf("Listenelemente nach dem swappen name item1: %s \n                                name item2: %s, \n", item1->name, item2->name);
	printf("Swap von Strings!\n");
    swap_string(&string1,&string2);				//wie so funktioniert das nicht mit str1 und str2 ???????
    
	if (strcmp(string1, str2) == 0)
	{
		printf("Strings erfolgreich getauscht\n");
		
	}
	
	
	return 0;
}
