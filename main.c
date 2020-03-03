#include <stdio.h>
void right_rotation ( int arr[]);
#define size 5
int main(void) {
int index3, index2,num0=2;
  int arr[5]={1,2,3,4,5};


  for ( index2=0;index2<size;index2++){
   printf("arr  befor rotate right: %d\n", arr[index2]);
  }

   for (int index =1; index<= num0 ; index++)
   {
     right_rotation(arr);
     }
  for ( index3=0;index3<size;index3++){
   printf("arr rotate right: %d\n", arr[index3]);
  }
  return 0;
}


 void  right_rotation( int arr[]){
 int index;
 int temp;
 temp= arr[size -1];
 for(index= size-1 ;index>0;index--){
   arr[index]=arr[index-1];
   
  }
  arr[0]=temp;

 }
