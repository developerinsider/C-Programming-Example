#include <stdio.h>
 
 int main(){
  int a1,r,ne, nf,v,vt,ri;
  scanf("%d %d %d",&a1,&r,&ne);
  v = 0;
  nf = 0;
  ri=r;
    for (nf; nf<=ne; nf++){
        if(nf<ne){
            v = a1+r;
            r=r+r;
            printf("%d\n",v);
    
    }  
 }
  return 0;
 }
 */
    example
    
    input
    2 4 5
    out
    50
    --------
    input
    7 -2 20
    out
    -20
 
 
 /*
