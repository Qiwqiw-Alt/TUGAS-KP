#include <stdio.h>
 
int main()
{
  char nama_player1[225];
  char nama_player2[225];
  int x,y,z;
  int i,j,k;
  printf("=========SELAMAT DATANG=========");
  printf("\nMasukkan nama player 1 : ");
  scanf("%s",&nama_player1);
  printf("Silahkan pilih karakter anda : \n");

  FILE *pF =fopen("character.txt","r");
  char character1[225];

  while (fgets (character1, 225, pF) != NULL){
    printf("%s \n",character1);
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
  char weapon1[225];

   while (fgets (weapon1, 225, pF) != NULL){
    printf("%s \n",weapon1);
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
  char armour1[225];

   while (fgets (armour1, 225, pF) != NULL){
    printf("%s \n",armour1);
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
  printf("\nMasukkan nama player 2 : ");
  scanf("%s",&nama_player2);
  printf("Silahkan pilih karakter anda : \n");

  fopen("character.txt","r");
  char character2[225];

  while (fgets (character2, 225, pF) != NULL){
    printf("%s \n",character2);
  }
  fclose(pF);
  printf("Masukan nomor karakter yang anda pilih : ");
  scanf("%d",&i);
  switch (i){
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
  char weapon2[225];

   while (fgets (weapon2, 225, pF) != NULL){
    printf("%s \n",weapon2);
  }
  fclose(pF);
  printf("Masukan nomor senjata yang anda pilih : ");
  scanf("%d",&j);
  switch (j){
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
  char armour2[225];

   while (fgets (armour2, 225, pF) != NULL){
    printf("%s \n",armour2);
  }
  fclose(pF);
  printf("Masukan nomor armour yang anda pilih : ");
  scanf("%d",&k);
  switch (k){
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