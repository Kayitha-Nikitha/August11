#include<stdio.h>
void quicksort(int n[25],int first,int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(n[i]<=n[pivot]&&i<last)
            i++;
         while(n[j]>n[pivot])
            j--;
         if(i<j){
            temp=n[i];
            n[i]=n[j];
            n[j]=temp;
         }
      }

      temp=n[pivot];
      n[pivot]=n[j];
      n[j]=temp;
      quicksort(n,first,j-1);
      quicksort(n,j+1,last);

   }
}

int main(){
   int i, c, n[25];

   printf("Enter size of array: ");
   scanf("%d",&c);

   printf("Enter %d elements: ", c);
   for(i=0;i<c;i++)
      scanf("%d",&n[i]);

   quicksort(n,0,c-1);

   printf("Maximum element: %d\n", n[c-1]);
   printf("Minimum element: %d\n", n[0]);

   return 0;
}
