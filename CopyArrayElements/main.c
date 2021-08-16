#include<stdio.h>
#include <conio.h>

copy(int a[], int b[],int n,int i)
{
    if(i<n)
 	{
        b[i]=a[i];
        copy(a,b,n,++i);
	}
}

    print(int a[],int n){
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int a[1000],b[1000],i,n;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    copy(a,b,n,0);
    printf("first array: ");
    print(a,n);

    printf("\nsecond array: ");
    print(b,n);

}
