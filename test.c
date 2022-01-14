
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct busgokak
{
  char name[50];
}gok1,gok2,gok3,gok4,gok5;

int main()
{
  int i;
  char s[100],k[100];
  scanf("%d",&i);
 
  switch(i)
  {
    case 1: scanf("%s",gok1.name) ;
    break;
    case 2: scanf("%s",gok2.name) ;
    break;
    
    case 3: scanf("%s",gok3.name) ;
    break;
    
    case 4: scanf("%s",gok4.name) ;
    break;
    case 5: scanf("%s",gok5.name) ;
    break;

  }
  
  printf("1.%s\t2.%s\n3.%s\t4.%s\n5.%s\n",gok1.name,gok2.name,gok3.name,gok4.name,gok5.name);
  
 
  return 0;
}
void printgokak()
{
  printf("1.%s\t2.%s\n3.%s\t4.%s\n5.%s\t6.%s\n7.%s\t8.%s\n9.%s\t10.%s\n11.%s\t12.%s\n13.%s\t14.%s\n15.%s\t16.%s\n17.%s\t18.%s\n19.%s\t20.%s\n",gok1.name,gok2.name,gok3.name,gok4.name,gok5.name,gok1.name,gok2.name,gok3.name,gok4.name,gok5.name,gok1.name,gok2.name,gok3.name,gok4.name,gok5.name,gok1.name,gok2.name,gok3.name,gok4.name,gok5.name);
}
void printgoa()
{
  for(j=1;j<=20;j++)
  {
    printf("\n%s",busgoa[j]);
  }
}
void printxyz()
{
  for(j=1;j<=20;j++)
  {
    printf("\n%s",busxyz[j]);
  }
}
void printabc()
{
  for(j=1;j<=20;j++)
  {
    printf("\n%s",busabc[j]);
  }
}


char id1[100],pass1[100],id2[100],pass2[100],id3[100],pass3[100],id4[100],pass4[100],id5[100],pass5[100],id6[100],pass6[100],id7[100],pass7[100],id8[100],pass8[100],id9[100],pass9[100],id10[100],pass10[100],id11[100],pass11[100],id12[100],pass12[100],id13[100],pass13[100],id14[100],pass14[100],id15[100],pass15[100],id16[100],pass16[100],id17[100],pass17[100],id18[100],pass18[100],id19[100],pass19[100],id20[100],pass20[100];

 printf("\nenter name: ");
          scanf("%s",gok1.name) ;
          printf("\nenter user id: ");
          scanf("%s",id1);
          printf("\nenter password: ");
          scanf("%s",pass1);
          printf("\n-----login compleated------\n");