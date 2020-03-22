//C Code for getting random data from /dev/urandom to be used as random frame files for size 1280*800.
#include<stdio.h>
#include<stdlib.h>

int main(){
int byte_count=1024000;
char data[1280][800];
FILE *fp;
fp=fopen("/dev/urandom","r");
fread(&data, 1,byte_count,fp);
printf("%s",data[0]);
fclose(fp);


return 0;
}
