#include "combSort.h"



int getNextGap(int gap){
  return gap/(1.3);
}

void combSort(int array[],int n){
  int gap=n;
  int temp;

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
}
