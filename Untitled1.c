#include <stdio.h>
int binarySearch(int arr[], int size, int key)
// function start //
{
int low=0; // First index of array //
int high=size-1; // Last index of array //
int mid;
while(low<=high)
{
mid=(low+high)/2;  // Find middle position //
if(arr[mid]==key)
return mid;  // Found //

else if(arr[mid]<key)// Key must be in right half //

low=mid+1;   // search right half //
else
high=mid-1; // search left half //
}
return -1;
}
// function end //
int main()
{
int arr[] = {10,20,30,40,50,60,70};
int size=7;
int key,pos;

printf("Enter element to search: ");
scanf("%d",&key);

pos = binarySearch(arr, size, key);
// outpput //
if(pos!=-1)
printf("Element found at index %d",pos);
else
    printf("Element not found");
return 0;
}
