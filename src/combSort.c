#include "combSort.h"



int getNextGap(int gap){
  return gap/(1.3);
}

void combSort(int array[],int n){
  int gap=n;
  int temp;

/*  temp=array[4];
  array[4]=array[3];
  array[3]=temp;
  if(array[3]<array[4])
    printf("%s\n","asfsfa" );
  for (int i=0;i<n;i++){
    printf("%d\n",array[i] );
  }
  */
  while(gap!=1){
    gap=getNextGap(gap);
    for(int i=0;i<(n-gap);i++){
      if(array[i]>array[i+gap]){
        temp=array[i+gap];
        array[i+gap]=array[i];
        array[i]=temp;
      }
    }
  }
  for (int i=0;i<n;i++){
    printf("%d\n",array[i] );
  }
}
