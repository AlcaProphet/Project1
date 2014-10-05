/****************************************************************************
 * vigenere.c
 *
 * 
 * Converts plain text to cipher text using vigenere chipher
 *
 * by Bhavika
 ***************************************************************************/

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

int
main(int argc, char* argv[])
{
    int i=0,j=0,l=0;
    
    if(argc!= 2)
    {
        printf("\aTry again by passing single arguement");
		return 1;
	}
	else 
	{
	    for(int m=0;argv[1][m]!='\0';m++)
	    {
	        if(!isalpha(argv[1][m]))
		    {
		        printf("\aTry again by passing alphabetical word as an arguement\n");
		        return 1;
		    }
		}
	}
	
	//Read string
	printf("Enter the string");
	char s[256];
	fgets(s, sizeof(s), stdin);
	 
	char* k=argv[1];
	int len=strlen(k);
	
	//for converting every key to lower case
	while(k[l]!='\0')
	{
	    if(isupper(k[l]))
	        k[l]= tolower(k[l]);
	    l++;
	}
	
	//changes each plain text letter to ciphr text
	while(s[i]!='\0')
	{
	    if((int)s[i]>=65 && (int)s[i]<=90)
		{
			s[i]='A'+(((s[i]-65)+(k[j]-97))%26);
			j++;
		}
		else if((int)s[i]>=97 && (int)s[i]<=122)
		{
			s[i]='a'+(((s[i]-97)+(k[j]-97))%26);
			j++;
		}
		if(j==len)
			j=0;
		i++;
	    
	}
	
	//show the result 
    printf("%s\n",s);
    
    return 0;
    }
	
	
	
	
	
	
	
