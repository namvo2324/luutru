#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include<stdlib.h>
void chuanhoa(char s[50]);
void xoakt(char  s[50]);
void demkytu(char s[50]);
void demtu(char s[50]);
void ghepkytu(char s[50], char s2[50]);
int main()
{
	char s[50],s2[50];
	printf("\n nhap chuoi: ");
	gets(s);
	chuanhoa(s);
	printf("\n chuoi chuan hoa la: ");
	puts(s);
	demkytu(s);
	demtu(s);
	ghepkytu(s,s2);
}
void chuanhoa(char s[50])
{  int i=0;
    strlwr(s);
    xoakt(s);
    s[0]=s[0]-32;
    for(int i=0;i<strlen(s);i++)
       {
       	if(s[i]==' '&& s[i+1]!=' ')
       	  s[i+1]=s[i+1]-32;
       }
}
   
   void xoa(char s[50], int vitrixoa )
{
	int n=strlen(s);
	for(int i=vitrixoa;i<n;i++)
	s[i]=s[i+1];
	s[n-1]='\0';
}      
 void xoakt(char s[50])
{
	for(int i=0;i<strlen(s);i++)
	  if(s[i]==' '&& s[i+1]==' ')
	    {
	    	xoa(s,i);
	    	i--;
	    }
	if(s[0]==' ')
	  xoa(s,0);
	if(s[strlen(s)-1]==' ')
	  xoa(s,strlen(s)-1);
}
void demkytu(char s[50])
{
	int demkytu=0;
	char c,c1;
	printf("\n nhap mot ky tu:=");
	scanf("%c",&c);
	strupr(s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==toupper(c))
		demkytu++;
	}
	printf("so ky tu %d",demkytu);
}
void demtu(char s[50])
{
	int demtu=1;
    strlwr(s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==' ')
		demtu++;
	}
	printf("\n so tu %d",demtu);
}
void ghepkytu(char s[50], char s2[50])
{
	int i,j,size,size1,size2;
	fflush(stdin);
	printf("\n nhap chuoi s2=");
	gets(s2);
	chuanhoa(s2);
	size1=strlen(s);
	size2=strlen(s2);
	size=size1+size2;
	j=0;
	for (i=size1;i<size;i++)
	{
		s[i]=s2[j];
			j++;
	}
	s[i]='\0';
	printf(" ket qua sau khi noi chuoi la:\n");
	printf("%s ",s);
}










