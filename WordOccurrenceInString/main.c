#include <stdio.h>

int main()
{
  	char string[100], word[100];
  	int i, j, Flag;

  	printf("\n Enter a String:  ");
  	gets(string);

	printf("\n Enter the Word to Search:  ");
  	gets(word);

  	for(i = 0; string[i] != '\0'; i++)
	{
		if(string[i] == word[0])
		{
			Flag = 1;
			for(j = 0; word[j] != '\0'; j++)
			{
				if(string[i + j] != word[j])
				{
					Flag = 0;
					break;
				}
			}
		}
		if(Flag == 1)
		{
			break;
		}
	}
	if(Flag == 0)
  	{
  		printf("\n Sorry! the Word '%s' is not found", word);
	}
	else
	{
		printf("\n We found '%s' at position %d ", word, i + 1);
	}

  	return 0;
}
