#include <stdio.h>
#include <stdlib.h>
int main(){
char character[3][10];
int HP[3];
int ATK[3];
int DEF[3];

FILE *pF; 
pF = fopen("character.txt","r");
  for(int i = 0;i<3;i++){
    fscanf(pF,"%[^,],%d,%d,%d",&character[i],&HP[i],&ATK[i],&DEF[i]);

}
fclose(pF);
    for(int i = 0;i<3;i++){
    printf("%s,%d,%d,%d",character[i],HP[i],ATK[i],DEF[i]);

}

return 0;
}