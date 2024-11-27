#include <stdio.h>
float bill;   /* declaring bill and rate as a global varibale which can be accessed anywhere in our code*/
float rate;
float bill_amt(){
  scanf("%f",&bill);
}
float calc_tip(){
     scanf("%f",&rate); 
     rate=bill*rate/100;
}
void amt_tot(){
  float total=bill+rate;
  printf("%.2f",total);
}
float main(){
	bill_amt();
	float tip=calc_tip();
	amt_tot(tip);
	return 0;
}
