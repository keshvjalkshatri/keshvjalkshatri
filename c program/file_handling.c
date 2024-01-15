#include<stdio.h>
void main(){
    char x[23];
    FILE *fp;
    fp = fopen("k.txt","a");
    fprintf(fp,"\t hello read\n");
    fscanf(fp,"%s",x);
    fc
}