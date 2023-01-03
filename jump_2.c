#include<stdio.h>
#include<math.h>
int  binarySearch(int arr[],int size,int x,int prev);
int jumpSearch(int arr[],int size,int key);
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12};
    int size = sizeof(arr)/sizeof(arr[0]);

    int toFind=  4;

 
    int result=  jumpSearch(arr,size,toFind);

   if(result!=-1){
    printf("we found %d at index %d",toFind,result);

   }else{
    printf("not exist");
   }


    return 0;
}

int  binarySearch(int arr[],int size,int x,int prev){

    int left=prev; int right=size-1;

    while (left<=right)
    {
            int mid = (left+right)/2;
            if (x==arr[mid])
            {
                /* code */return mid;
            }else if(x<arr[mid]){
                right = mid-1;
            }else{
                left= mid+1;
            }

                    /* code */
    }
    return-1;
    
}
int min(int first,int second){
    if (first>second)
    {
        /* code */ return second;
    }else{
        return first;
    }
    
}

int jumpSearch(int arr[],int size,int key){

    int step = sqrt(size);
    int previous = 0;

    while (arr[min(step,size)-1]< key)
    {
      previous=step;
      step=step + sqrt(size);
        if(previous>=size){
            return -1;
        }

    }

    if(arr[previous]==key){
        return previous;
    }

    binarySearch(arr,step,key,previous);
   
}