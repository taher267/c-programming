#include <stdio.h>
int main(void){
  char name1[20];
  name1[0]='A';
  name1[1]=' ';
  name1[2]='T';
    printf("%s\n",name1);
    char name2[20]={'A','B','U'};
    printf("%s\n",name2);
    return 0;
}