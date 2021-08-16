#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 8, 3, 2, 2, 2, 5, 1};
    int length = sizeof(arr)/sizeof(arr[0]);
    int f[length];
    int visited = -1;

    for(int i = 0; i < length; i++){
        int count = 1;
        for(int j = i+1; j < length; j++){
            if(arr[i] == arr[j]){
                count++;
                f[j] = visited;
            }
        }
        if(f[i] != visited)
            f[i] = count;
    }

    for(int i = 0; i < length; i++){
        if(f[i] != visited){
            printf("%d", arr[i]);
            printf("- ");
            printf("%d\n", f[i]);
        }
    }
    return 0;
}
