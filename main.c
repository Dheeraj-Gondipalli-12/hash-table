#include <stdio.h>
#include <string.h>
#include "hash_table.h"
#include "prime.h"

int main()
{	
	char key[100];
	char value[100];
	ht_hash_table *table = ht_new();
	
	for( int i = 0; i < 10; i++)
	{
		printf("enter the key string: ");
		fgets(key, 100, stdin);
		key[strlen(key) - 1] = '\0';
		
		printf("enter the value string: ");
		fgets(value, 100, stdin);
		value[strlen(value) - 1] = '\0';

		ht_insert(table, key, value);
	}

	char search[100];
	char search_result[100];
	for( int i = 0; i < 4; i++)
	{
		printf("Enter the search string: ");
		
		fgets(search, 100, stdin);
		search[strlen(search) - 1] = '\0';
		
		strcpy(search_result, ht_search(table, search));
		printf("%s: %s\n", search, search_result);
	}
	
	ht_del_hash_table(table);
}
