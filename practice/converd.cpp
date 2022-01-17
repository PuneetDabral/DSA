#include <stdio.h>
#include <string.h>

int main()
{
	char str[100]="helloparth";
	int i;
	int freq[256] = {0};
	//gets(str);
	//char str[100]={"hello"};
	for(i = 0; str[i] != '\0'; i++)
	{
	    if(str[i]==' '){
	      
	    }
	    else{
		freq[str[i]]++;
	    }
	}
	for(i = 0; i < 256; i++)
	{
	    
	    
		if(freq[i] != 0)
		{
			printf("%c %d\n", i, freq[i]);
		}
	
		    
		
	}
	return 0;
}