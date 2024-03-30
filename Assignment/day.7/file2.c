#include <stdio.h>

void dispLIst(int [],int);
void sortDesc(int [],int);

    int main()
    {
      int array[] = {5,2,8,7,11,10,22}
      int size = sizeof(arr)/sizeof(arr[0]);

      printf("Original array:\n");
      displist(arr,Size);

      sortDesc(arr,Size);

      printf("\nSorted array in descending order:\n");
      dispList(arr,Size);

      printf("\n%d\n\n",arr[3]);

      return 0;
    }
    void dispList(int a[],int n){
        for(int i = 0;i < n;i++)
          printf("%d->",a[i]);
        printf("\n");
    }

    void sortDesc(int a[int n]){
        for(int i = 0;i<n;i++){
            for(int j = i + 1;j<n;j++){
                if(a[i] < a[j]){
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;  
                }    
            }
        }
    }
    