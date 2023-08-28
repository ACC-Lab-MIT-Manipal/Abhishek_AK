#include<stdio.h>
#include<conio.h>

int main()

{
    int i, key;
    char str[100],c;

    printf("Enter a PT:");
    gets(str);
    printf("enter key:");
    scanf("%d",&key);

    for(i=0;str[i]!='\0';i++)
    {
        c = str[i];
        if(c>='a' && c<='z')
        {
            c=c+key;
            if(c>'z')
            {
              c = c-'z' + 'a'-1;
            }
            str[i] = c;
        }
        else if(c>='A' && c<='Z')
          {
            c=c+key;
            if(c>'Z')
            {
              c = c-'Z' + 'A'-1;
            }
            str[i] = c;
          }
    }

 printf("encrypted msg :%s",str);
 return 0;
}
