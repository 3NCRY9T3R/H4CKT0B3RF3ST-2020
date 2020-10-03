// C program to find occurrence of a word in a text file.

#include<stdio.h>
void main()
{     
	FILE* fp;
	int word=0;
	int Length = 100;
	char find[50];
	printf("Enter the word : ");
	scanf("%s",find);
	char line[Length];
	fp = fopen("file location", "r");
	while(fgets(line, Length, fp))
	{
		char *ptr = strstr(line, find);
		if (ptr != NULL) 
		{
			word=1;
			break;
		}
	}
	fclose(fp);
	if (word==1)
	{
		printf("Word exists");
	}
	else 
	{
		printf("Word doesn't exist");
	}
}

//Example: 
//Data in Text file: Happy Birthday Robert

//Input: 
//Enter the word: Robert

//Output:
//Word Exists.
