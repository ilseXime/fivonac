#include <stdio.h>
#include <stdlib.h>

int main(void){
  int x,y,z,cont,stop;

  x=0;
  y=1;
  z=0;
 
  printf("Cuantos números deseas: ");
  scanf("%d", &stop);
  
  if(stop==0 || stop==1){
    printf("%d\n",x);
  }else if(stop==2){
    printf("%d\n%d\n",x, y);
  }else{
    printf("%d\n%d\n",x, y);
    for (cont=0;cont<stop-2;cont++){
      z=x+y;  //z = 1 + 1= 2
      printf("%d\n",z);
      x=y;  //x=1
      y=z;  //y=2
    }
  getchar();
  }
}
