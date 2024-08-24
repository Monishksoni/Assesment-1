#include<stdio.h>
#include<string.h>
void reverse(char str[]);
void Concatenation();
void Palindrome();
void cpystring();
void lenstring();
void frequency();
void vowels_consonants();
void spaces();

int main()
{
	int choice;
	char ans,y,n;
	char str1[100],str2[100];
	
	start :
	
	printf("\nEnter the string in str1 = ");
	gets(str1);
	printf("\nEnter the string in str2 = ");
	gets(str2);
	
	printf("\nMain menu");
	printf("\n press 1.reverse");
	printf("\n press 2.Concatenation");
	printf("\n press 3.Palindrome");	
	printf("\n press 4.copystring");
	printf("\n press 5.length of string");
	printf("\n press 6.vowels_consonants");
	printf("\n Press 7.spaces");
	printf("\n Press 8.frequency");
	printf("\nplease Enter the choice = ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			reverse(str1);	
		break;
		case 2:
			Concatenation(str1,str2);
		break;
		case 3:
			Palindrome(str1);
		break;
		case 4:
			cpystring(str1,str2);		
		break;
		case 5:
			lenstring(str1);
		break;
		case 6:
			vowels_consonants(str1);
		break;
		case 7:
			spaces(str1);
		break;
		case 8:
			frequency(str1);
		break;
	}
	printf("\nDo you want continune press 'y' & 'n' =");
	scanf(" %c",&ans);
	if(ans=='y')
	{
		goto start;
	}
	else
	{
		if(ans=='n')
		{
			goto end;
		}
	}
	end:
	return 0;
}
void reverse(char str1[])
{
	strrev(str1);
	printf("\nThe revers string is = %s",str1);
}
void Concatenation(char str1[],char str2[])
{
	printf("\nOregnal string is =%s",str1);
	printf("\nOregnal string is =%s",str2);
	strcat(str1,str2);
	printf("\nThe concation string is =%s",str1);
	printf("\nThe concation string is =%s",str2);	
}
void Palindrome(char str1[])
{
	char str2[100];
	int i;
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i] = str1[i];
	}
	strrev(str1);
	int result = strcmp(str1,str2);
	if(result==0)
	{
		printf("\nString is pallindrome");
	}
	else
	{
		printf("\nString is not pallindrome");
	}
}
void cpystring(char str1[],char str2[])
{
	strcpy(str2,str1);
	printf("\nstring = %s",str1);
	printf("\nstring = %s",str2);
}
void lenstring(char str1[])
{	
	int temp = strlen(str1);
	printf("\nlength of string is = %d ",temp);
}
//hello
void vowels_consonants(char str1[])
{
	int i,count=0,count1=0;
	printf("\nOrignal string is  = %s",str1);
	for(i=0;i<strlen(str1);i++)
	{
		if(str1[i]=='a'|| str1[i]=='A')
		{
			count++;
		}
		else if(str1[i]=='e' || str1[i]=='E')
		{
			count++;
		}
		else if(str1[i]=='o' ||str1[i]=='O')
		{
			count++;
		}
		else if(str1[i]=='i' || str1[i]=='I')
		{
			count++;
		}
		else if(str1[i]=='u' || str1[i]=='U')
		{
			count++;
		}
		else 
		{
			if((str1[i]>=65 && str1[i]<=90) || (str1[i]>=97 && str1[i]<=122))
			{
				count1++;	
			}
			
		}
	}
	printf("\nTotal number of vowel is %d",count);
	printf("\nTotal number of consonanat is %d",count1);
}
void spaces(char str1[])
{
	int i,count=0;
		for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]==' ')
		{
			count++;
		}
	}
	printf("\nTotal numbre of space = %d",count);
		
}
void frequency(char str1[])
{
	char c;
	int count=0,i;
	for(c='a';c<='z';c++)
	{
		count=0;
		for(i=0;str1[i]!='\0';i++)
		{
			if(c==str1[i])
			{
				count++;
			}
		}
		if(count>0)
		{
			printf("\n %c Found in  %d Times",c,count);
		}
	}
}
