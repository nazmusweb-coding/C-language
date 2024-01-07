#include <stdio.h>
int main() {

  double weight,count,meanv,stdv;

  scanf("%lf",&weight);
  scanf("%lf",&count);
  scanf("%lf",&meanv);
  scanf("%lf",&stdv);
  

  printf("%6.4lf\n",0.5*(1.0+erf((weight-(count*meanv))/(sqrt(count)*stdv*sqrt((double)2.0)))));
  
  return 0;
}