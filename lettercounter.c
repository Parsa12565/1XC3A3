#include <stdio.h>

void main()
{
	char string[1024];
	int count[26];
	char input;
	int i=0;

	printf("Enter text for analysis: "); // To prompt input.
	while(1) // This loop is to turn the input into an array of characters.
	{
		input=getchar();
		if(input=='\n')
		{
			string[i]='\0';
			break;
		}
		else string[i]=input;
		i++;
	}
	printf("\n\nLetter Analysis Complete!\n\n"); // To mimic the examples given.
	printf("Letters   Occurrences    Percentage     \n"); // Part of the table.
	printf("****************************************\n"); // Part of the table.
	int minn;
	int maxn;
	char minl;
	char maxl;
	for(int j=0;j<26;j++) // This loops through the string once for each letter.
	{
		count[j]=0; // This sets the count of the letter to 0 before we start counting.
		for(int k=0;k<i;k++) // This checks each character of the string.
		{
			if(string[k]==65+j || string[k]==97+j) // This checks if the character is the letter.
			{
				count[j]++; // This increases the count of the letter.
			}
		}
		if(j==0) // This is to set the most and least occurring letters for the first time.
		{
			minn=count[j];
			maxn==count[j];
			minl=j+65;
			maxl=j+65;
		}
		else // This is to change the most and least occurring letters.
		{
			if(count[j]<minn) // This is to change the least occurring letter.
			{
				minn=count[j];
				minl=j+65;
			}
			if(count[j]>maxn) // This is to change the most occurring letter.
			{
				maxn=count[j];
				maxl=j+65;
			}
		}
		printf("%-10c%-15d%-15.2lf\n",j+65,count[j],(double)count[j]/i*100); // Part of the table
	}
	printf("\nThe most frequently occurring character is %c.",maxl); // Prints the most occuring letter.
	printf("\nThe least frequently occurring character is %c.",minl); // Prints the least occuring letter.
}