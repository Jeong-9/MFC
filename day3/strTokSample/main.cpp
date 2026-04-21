//#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include"Gugudan.h"

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)]
#define GUGUARRY_SIZE 3
int a1()
{

	char buffer[100] = "2,3,4";
	char* pNextTok = NULL;
	int count = 1;

	char* pfirstTok = strtok_s(buffer, ",", &pNextTok);
	if (pfirstTok == NULL)
	{
		return 0;
	}

	printf("토큰:[%s]\n", pfirstTok);
	while (1)
	{
		pfirstTok = strtok_s(NULL, ",", &pNextTok);
		if (pfirstTok == NULL)
		{
			break;
		}
		else
		{
			count += 1;
			printf("토큰:[%s]\n", pfirstTok);
		}
	}
}

void a2()
{
	char a[100] = "2,3,4";
	char * context = NULL;
	
	char* token = strtok_s(a, ",",&context);

	while (token != NULL)
	{
		int num = atoi(token);
		printf("토큰 : %s , 정수값 : %d\n", token, num);
		token = strtok_s(NULL, ",", &context);
	}
}


int PrintDan(int _dan)
{
	int result = 0;

	for (int i = 1; i <= 9; ++i)
	{
		result = printf("%d x %d = [%2d]\t", _dan, i, _dan * i);
	}
	printf("\n");
	return result;
}
void a3()
{
	char buffer[100] = "2,3,4,5,6,7,8,9";
	char* next = NULL;
	char * token = strtok_s(buffer, ",", &next);

	while (token != NULL)
	{
		PrintDan(atoi(token));
		token = strtok_s(next, ",", &next);
	}
}

int a4()
{
	char buffer[100] = "2,3,5";
	char* token = strtok(buffer, ",");

	while (token != NULL)
	{
		Gugudan g(atoi(token));
		g.Print();
		printf("\n");
		token = strtok(NULL, ",");
	}
	return 0;
}

void a5()
{

}

int main()
{
	//a1();
	//a2();
	//a3();
	//a4();
	
	a5();
	return 0;
}