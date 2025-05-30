#include <stdio.h>
#include <math.h>
void main(){
 int principalAmt,noOfYear,rate_interest,cpd_py;
 float ci,amt;
 printf("Enter principal amount:");
 scanf("%d",&principalAmt);
 printf("Enter no.of years:");
 scanf("%d",&noOfYear);
 printf("Enter rate of interest:");
 scanf("%d",&rate_interest);
 printf("Enter compound per year:");
 scanf("%d",&cpd_py);

 amt=principalAmt*pow((1+((rate_interest)/(cpd_py*100.00))),cpd_py*noOfYear);
 ci=amt-principalAmt;
 printf("principalamt=%d,\ncompound interest=%f\n",principalAmt,ci);

}
