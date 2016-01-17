/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	char *lastword;
	int spaceindex = -1, index = 0, extra = 0, finalindex = -1, size;
	if (str&&str[index] != '\0')
	{
		while (str[index] != '\0')
		{
			if (str[index] == ' ')
			{
				if (str[index + 1] == ' ' || str[index + 1] == '\0')
				{
					extra++;
				}
				else
				{
					spaceindex = index; extra = 0;
				}
			}
			index++;
		}
		if ((index - extra)> 0)
			lastword = (char*)malloc((index - spaceindex - extra)*sizeof(char));
		else
			return "";
		extra = index;
		for (index = spaceindex + 1; index<extra; index++)
			lastword[++finalindex] = str[index];
		while (lastword[finalindex] == ' ')
			--finalindex;
		lastword[finalindex + 1] = '\0';
		return lastword;
	}
	return "";
}