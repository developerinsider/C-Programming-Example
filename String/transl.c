#include <stdio.h>

int signdaStr(char *str);

int main()
{

	int n,c,i;
	char um[4], dois[4], tres[6];

	scanf("%d",&n);
	getchar();

	for (i = 0; i < n; ++i)
	{
		scanf("%[^\n]%*c",um);
		printf("%d\n",signdaStr(um));

	}


	return 0;
}

int signdaStr(char *str){

	char one[]="one";
	char two[]="two";	
	char three[]="three"; 
	char c=0,contone=0,conttwo=0,contthr=0;

	for (c = 0; str[c]!='\0' ; ++c)
	{
			if (str[c]==one[c]) contone++;

			if (str[c]==two[c]) conttwo++;

			if (str[c]==three[c]) contthr++;

 
	}


	if(contone > conttwo && contone > contthr) return 1;
	else if (conttwo > contone && conttwo > contthr) return 2;
	else
		return 3;


}
