// 8. Search for an element in Array 

//Linear Search Algorithm

#include <stdio.h>
void main(){
    int n, target, found=0;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            found=1;
            break;
        }
    }
    if(found){
        printf("Element %d found in the array.\n",target);
    } else {
        printf("Element %d not found in the array.\n",target);
    }
}

//Binary Search Algorithm

// #include <stdio.h>
// void main(){
//     int n, target, left, right, mid, found=0;
//     printf("Enter number of elements in sorted array: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter %d sorted elements:\n",n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Enter element to search: ");
//     scanf("%d",&target);
//     left = 0;
//     right = n - 1;
//     while(left <= right){
//         mid = left + (right - left) / 2;
//         if(arr[mid] == target){
//             found = 1;
//             break;
//         }
//         else if(arr[mid] < target){
//             left = mid + 1;
//         }
//         else{
//             right = mid - 1;
//         }
//     }
//     if(found){
//         printf("Element %d found in the array.\n",target);
//     } else {
//         printf("Element %d not found in the array.\n",target);
//     }
// }
