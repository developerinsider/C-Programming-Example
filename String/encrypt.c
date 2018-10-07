#include <string.h>
#include <stdio.h>

void encryption(char *name);
int main()
{
	int n,i;
    char str[128];
 
    scanf("%[^\n]%*c",str);
  
 
    printf("%s\n",str );
	return 0;
}

void encryption(char *name){
	int i,c=0, countSTR;

	countSTR = strlen(name);//get the amount of the string
	char aux[countSTR];
	

	//move all CHARACTERS in 3 characters to the right
	for (i = 0; i < countSTR; i++){
		 if ((name[i]>='A' && name[i]<='Z') || (name[i]>='a' && name[i]<='z')) name[i] = name[i]+3;
	}

	//ssave the password in an auxiliary vector
	for (i = 0; i < countSTR; i++){
		aux[i]=name[i];
	}

	//reverse the string
	for (i = countSTR-1; i>=0 ; --i){
		name[c]=aux[i];
		c++;
	}

	//view the amount of elements and save the amount of
    countSTR = (int)(countSTR/2);

    //move the half (countSTR) of the characters to the left
    for (i = countSTR; name[i]!='\0'; ++i){
        name[i] = name[i]-1;
    }
}
