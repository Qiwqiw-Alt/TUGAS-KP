#include <stdio.h>
 
int main()
{
  char nama_player1[225];
  char nama_player2[225];
  int x,y,z;
  printf("=========SELAMAT DATANG=========");
  printf("\nMasukkan nama player 1 : ");
  scanf("%s",&nama_player1);
  printf("Silahkan pilih karakter anda : \n");

  FILE *pF =fopen("character.txt","r");
  char character[225];

  while (fgets (character, 225, pF) != NULL){
    printf("%s \n",character);
  }
  fclose(pF);
  printf("Masukan nomor karakter yang anda pilih : ");
  scanf("%d",&x);
  switch (x){
    case 1:
    printf("Werkudara \n");
    break;
    case 2:
    printf("Arjuna \n");
    break;
    case 3:
    printf("Yudistira \n");
    break;
  }
  fopen("weapon.txt","r");
  char weapon[225];

   while (fgets (weapon, 225, pF) != NULL){
    printf("%s \n",weapon);
  }
  fclose(pF);
  printf("Masukan nomor senjata yang anda pilih : ");
  scanf("%d",&y);
  switch (y){
    case 1:
    printf("Pedang \n");
    break;
    case 2:
    printf("Busur \n");
    break;
    case 3:
    printf("Gada \n");
    break;
  }

  fopen("armor.txt","r");
  char armour[225];

   while (fgets (armour, 225, pF) != NULL){
    printf("%s \n",armour);
  }
  fclose(pF);
  printf("Masukan nomor armour yang anda pilih : ");
  scanf("%d",&z);
  switch (z){
    case 1:
    printf("Armour \n");
    break;
    case 2:
    printf("Helmet \n");
    break;
    case 3:
    printf("Boots \n");
    break;
  }
 
  return 0;
}