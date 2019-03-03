#include<iostream>
using namespace std;
int valid(char *str,int i,char ch,char ch2)
{
	int j;
	int flag;
	for(j=i+1;str[j];j++)
	{
		if(str[j]==ch2)
			return 1;
		if(str[j]=='(')
			return valid(str,j,'(',')');
		else if(str[j]=='{')
			return valid(str,j,'{','}');
		else if(str[j]=='[')
			return valid(str,j,'[',']');
		else if(str[j]!=ch2)
			return 0;
	}
}
int validity_check(char *str)
{
	int i,j;
	int flag;
	for(i=0;str[i];i++)
	{
		char ch=str[i];
		if(ch=='(')
			flag=valid(str,i,'(',')');
		else if(ch=='{')
			flag=valid(str,i,'{','}');
		else if(ch=='[')
			flag=valid(str,i,'[',']');
		if(flag==0)
			return flag;
	}
	return flag;
}
int check_brackets(char *str)
{
	int d=0;
	int i;
	int bopen=0,bclose=0;
	for(i=0;str[i];i++)
	{
		if(str[i]=='(' || str[i]=='{' || str[i]=='[')
			bopen++;
		else if(str[i]=='}' || str[i]==']' || str[i]==')')
			bclose++;
	}
	if(bopen==bclose)
		d=1;
	return d;
}
int main()
{
	char str[1000];
	gets(str);
	if(str[0]!='\0')
	{
		if(check_brackets(str) && validity_check(str))
		cout << "True" << endl;
		else
		cout << "False" << endl;
	}
	else
		cout << "True" << endl;
	return 0;
}