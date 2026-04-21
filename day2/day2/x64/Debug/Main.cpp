#include <stdio.h>
#include<iostream>
#include "Gugudan.h"
#define _CRT_SECURE_NO_WARNING

int main()
{
	/*Gugudan g1(2);
	g1.printdan();
	printf("*******************************\n");
	g1.PrintReverse();
	return 0;*/

	char buffer[255] = "2,100,30,123,5";
	char buffer_num[255];
	int buffer_new_count = 0;
	memset(buffer_num, '\0', sizeof(buffer_num));

	for (int i = 0; i < sizeof(buffer); ++i)
	{
		if (buffer[i] == '\0')
			break;

		if (buffer[i] == ',')
		{
			printf("[%s]", buffer_num);
			memset(buffer_num, '\0', sizeof(buffer_num));
			buffer_new_count = 0;
			continue;
		}
		else
		{
			buffer_num[buffer_new_count] = buffer[i];
			++buffer_new_count;
		}
	}
	return 0;
}