#include <stdio.h>
int main()
{
    char first[20];
    char second[20];
    int i;
    printf("Enter the first string: ");
    scanf("%s",first);
    printf("Enter the second string: ");
    scanf("%s",second);
    for(i=0;first[i]!='\0';i++);{
        for(int j=0;second[j]!='\0';j++)
        {
            first[i]=second[j];
            i++;
        }
    }
    first[i]='\0';
   printf("On concatenating the two strings: %s", first);
return 0;
}
