#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int a=1,sno,b=1,c=1,d=1,j,bs,se,n,o;
int snog,snoa,snob;
char id[100],pass[100];
char idv[100],passv[100];
int mk;
int vari=0,varif=0;



char seet[20],name[100],busgokak[20],busgoa[20],busxyz[20],busabc[20];
char gokid1[100],gokpass1[100],gokid2[100],gokpass2[100],gokid3[100],gokpass3[100],gokid4[100],gokpass4[100],gokid5[100],gokpass5[100],gokid6[100],gokpass6[100],gokid7[100],gokpass7[100],gokid8[100],gokpass8[100],gokid9[100],gokpass9[100],gokid10[100],gokpass10[100],gokid11[100],gokpass11[100],gokid12[100],gokpass12[100],gokid13[100],gokpass13[100],gokid14[100],gokpass14[100],gokid15[100],gokpass15[100],gokid16[100],gokpass16[100],gokid17[100],gokpass17[100],gokid18[100],gokpass18[100],gokid19[100],gokpass19[100],gokid20[100],gokpass20[100];

char  abcvid1[100], abcvpass1[100], abcvid2[100], abcvpass2[100], abcvid3[100], abcvpass3[100], abcvid4[100], abcvpass4[100], abcvid5[100], abcvpass5[100], abcvid6[100], abcvpass6[100], abcvid7[100], abcvpass7[100], abcvid8[100], abcvpass8[100], abcvid9[100], abcvpass9[100], abcvid10[100], abcvpass10[100], abcvid11[100], abcvpass11[100], abcvid12[100], abcvpass12[100], abcvid13[100], abcvpass13[100], abcvid14[100], abcvpass14[100], abcvid15[100], abcvpass15[100], abcvid16[100], abcvpass16[100], abcvid17[100], abcvpass17[100], abcvid18[100], abcvpass18[100], abcvid19[100], abcvpass19[100], abcvid20[100],abcvpass20[100];

char  gokvid1[100], gokvpass1[100], gokvid2[100], gokvpass2[100], gokvid3[100], gokvpass3[100], gokvid4[100], gokvpass4[100], gokvid5[100], gokvpass5[100], gokvid6[100], gokvpass6[100], gokvid7[100], gokvpass7[100], gokvid8[100], gokvpass8[100], gokvid9[100], gokvpass9[100], gokvid10[100], gokvpass10[100], gokvid11[100], gokvpass11[100], gokvid12[100], gokvpass12[100], gokvid13[100], gokvpass13[100], gokvid14[100], gokvpass14[100], gokvid15[100], gokvpass15[100], gokvid16[100], gokvpass16[100], gokvid17[100], gokvpass17[100], gokvid18[100], gokvpass18[100], gokvid19[100], gokvpass19[100], gokvid20[100],gokvpass20[100];

char  xyzvid1[100], xyzvpass1[100], xyzvid2[100], xyzvpass2[100], xyzvid3[100], xyzvpass3[100], xyzvid4[100], xyzvpass4[100], xyzvid5[100], xyzvpass5[100], xyzvid6[100], xyzvpass6[100], xyzvid7[100], xyzvpass7[100], xyzvid8[100], xyzvpass8[100], xyzvid9[100], xyzvpass9[100], xyzvid10[100], xyzvpass10[100], xyzvid11[100], xyzvpass11[100], xyzvid12[100], xyzvpass12[100], xyzvid13[100], xyzvpass13[100], xyzvid14[100], xyzvpass14[100], xyzvid15[100], xyzvpass15[100], xyzvid16[100], xyzvpass16[100], xyzvid17[100], xyzvpass17[100], xyzvid18[100], xyzvpass18[100], xyzvid19[100], xyzvpass19[100], xyzvid20[100],xyzvpass20[100];

char  goavid1[100], goavpass1[100], goavid2[100], goavpass2[100], goavid3[100], goavpass3[100], goavid4[100], goavpass4[100], goavid5[100], goavpass5[100], goavid6[100], goavpass6[100], goavid7[100], goavpass7[100], goavid8[100], goavpass8[100], goavid9[100], goavpass9[100], goavid10[100], goavpass10[100], goavid11[100], goavpass11[100], goavid12[100], goavpass12[100], goavid13[100], goavpass13[100], goavid14[100], goavpass14[100], goavid15[100], goavpass15[100], goavid16[100], goavpass16[100], goavid17[100], goavpass17[100], goavid18[100], goavpass18[100], goavid19[100], goavpass19[100], goavid20[100],goavpass20[100];

char goaid1[100],goapass1[100],goaid2[100],goapass2[100],goaid3[100],goapass3[100],goaid4[100],goapass4[100],goaid5[100],goapass5[100],goaid6[100],goapass6[100],goaid7[100],goapass7[100],goaid8[100],goapass8[100],goaid9[100],goapass9[100],goaid10[100],goapass10[100],goaid11[100],goapass11[100],goaid12[100],goapass12[100],goaid13[100],goapass13[100],goaid14[100],goapass14[100],goaid15[100],goapass15[100],goaid16[100],goapass16[100],goaid17[100],goapass17[100],goaid18[100],goapass18[100],goaid19[100],goapass19[100],goaid20[100],goapass20[100];

char xyzid1[100],xyzpass1[100],xyzid2[100],xyzpass2[100],xyzid3[100],xyzpass3[100],xyzid4[100],xyzpass4[100],xyzid5[100],xyzpass5[100],xyzid6[100],xyzpass6[100],xyzid7[100],xyzpass7[100],xyzid8[100],xyzpass8[100],xyzid9[100],xyzpass9[100],xyzid10[100],xyzpass10[100],xyzid11[100],xyzpass11[100],xyzid12[100],xyzpass12[100],xyzid13[100],xyzpass13[100],xyzid14[100],xyzpass14[100],xyzid15[100],xyzpass15[100],xyzid16[100],xyzpass16[100],xyzid17[100],xyzpass17[100],xyzid18[100],xyzpass18[100],xyzid19[100],xyzpass19[100],xyzid20[100],xyzpass20[100];

char abcid1[100],abcpass1[100],abcid2[100],abcpass2[100],abcid3[100],abcpass3[100],abcid4[100],abcpass4[100],abcid5[100],abcpass5[100],abcid6[100],abcpass6[100],abcid7[100],abcpass7[100],abcid8[100],abcpass8[100],abcid9[100],abcpass9[100],abcid10[100],abcpass10[100],abcid11[100],abcpass11[100],abcid12[100],abcpass12[100],abcid13[100],abcpass13[100],abcid14[100],abcpass14[100],abcid15[100],abcpass15[100],abcid16[100],abcpass16[100],abcid17[100],abcpass17[100],abcid18[100],abcpass18[100],abcid19[100],abcpass19[100],abcid20[100],abcpass20[100];



struct busgokak
{
  char name[50];
}gok1,gok2,gok3,gok4,gok5,gok6,gok7,gok8,gok9,gok10,gok11,gok12,gok13,gok14,gok15,gok16,gok17,gok18,gok19,gok20;

void printgokak()
{
  printf("\n-----gokak bus------\n1.%s\t2.%s\n3.%s\t4.%s\n5.%s\t6.%s\n7.%s\t8.%s\n9.%s\t10.%s\n11.%s\t12.%s\n13.%s\t14.%s\n15.%s\t16.%s\n17.%s\t18.%s\n19.%s\t20.%s\n",gok1.name,gok2.name,gok3.name,gok4.name,gok5.name,gok6.name,gok7.name,gok8.name,gok9.name,gok10.name,gok11.name,gok12.name,gok13.name,gok14.name,gok15.name,gok16.name,gok17.name,gok18.name,gok19.name,gok20.name);
}



struct busgoa
{
  char name[50];
}goa1,goa2,goa3,goa4,goa5,goa6,goa7,goa8,goa9,goa10,goa11,goa12,goa13,goa14,goa15,goa16,goa17,goa18,goa19,goa20;

void printgoa()
{
  printf("\n-----goa bus------\n1.%s\t2.%s\n3.%s\t4.%s\n5.%s\t6.%s\n7.%s\t8.%s\n9.%s\t10.%s\n11.%s\t12.%s\n13.%s\t14.%s\n15.%s\t16.%s\n17.%s\t18.%s\n19.%s\t20.%s\n",goa1.name,goa2.name,goa3.name,goa4.name,goa5.name,goa6.name,goa7.name,goa8.name,goa9.name,goa10.name,goa11.name,goa12.name,goa13.name,goa14.name,goa15.name,goa16.name,goa17.name,goa18.name,goa19.name,goa20.name);
}


struct busxyz
{
  char name[50];
}xyz1,xyz2,xyz3,xyz4,xyz5,xyz6,xyz7,xyz8,xyz9,xyz10,xyz11,xyz12,xyz13,xyz14,xyz15,xyz16,xyz17,xyz18,xyz19,xyz20;

void printxyz()
{
  printf("\n-----xyz bus------\n1.%s\t2.%s\n3.%s\t4.%s\n5.%s\t6.%s\n7.%s\t8.%s\n9.%s\t10.%s\n11.%s\t12.%s\n13.%s\t14.%s\n15.%s\t16.%s\n17.%s\t18.%s\n19.%s\t20.%s\n",xyz1.name,xyz2.name,xyz3.name,xyz4.name,xyz5.name,xyz6.name,xyz7.name,xyz8.name,xyz9.name,xyz10.name,xyz11.name,xyz12.name,xyz13.name,xyz14.name,xyz15.name,xyz16.name,xyz17.name,xyz18.name,xyz19.name,xyz20.name);
}


struct busabc
{
  char name[50];
}abc1,abc2,abc3,abc4,abc5,abc6,abc7,abc8,abc9,abc10,abc11,abc12,abc13,abc14,abc15,abc16,abc17,abc18,abc19,abc20;

void printabc()
{
  printf("\n-----abc bus------\n1.%s\t2.%s\n3.%s\t4.%s\n5.%s\t6.%s\n7.%s\t8.%s\n9.%s\t10.%s\n11.%s\t12.%s\n13.%s\t14.%s\n15.%s\t16.%s\n17.%s\t18.%s\n19.%s\t20.%s\n",abc1.name,abc2.name,abc3.name,abc4.name,abc5.name,abc6.name,abc7.name,abc8.name,abc9.name,abc10.name,abc11.name,abc12.name,abc13.name,abc14.name,abc15.name,abc16.name,abc17.name,abc18.name,abc19.name,abc20.name);
}


// void id()
// {
//   char id[100],pass[100];
//   printf("\nenter user id: ");
//   scanf("%s",id);
//   printf("\nenter password: ");
//   scanf("%s",pass);
//   printf("\n-----login compleated------\n");
// }
void pushgokak()
{
  printgokak();
  if(a>20)
  {
    printf("\nseet is full");
  }
  else
  {
  
    printf("\nenter no of seets: ");
    scanf("%d",&n);
    for(o=0;o<n;o++)
    {
      printf("\nenter seet %d no: ",o+1);
      scanf("%d",&sno);
      a++;
      switch(sno)
      {
        
        
        case 1:printf("\nenter user id: ");
          scanf("%s",gokid1);
          printf("\nenter password: ");
          scanf("%s",gokpass1);
          printf("\n-----login compleated------\n");  
        printf("\nenter name: ");
          scanf("%s",gok1.name) ;
            break;
        case 2:printf("\nenter user id: ");
          scanf("%s",gokid2);
          printf("\nenter password: ");
          scanf("%s",gokpass2);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",gok2.name) ;
            break;
    
        case 3:printf("\nenter user id: ");
          scanf("%s",gokid3);
          printf("\nenter password: ");
          scanf("%s",gokpass3);
          printf("\n-----login compleated------\n");  
          printf("\nenter name: ");
          scanf("%s",gok3.name) ;
            break;
    
        case 4: printf("\nenter user id: ");
          scanf("%s",gokid4);
          printf("\nenter password: ");
          scanf("%s",gokpass4);
          printf("\n-----login compleated------\n"); 
        printf("\nenter name: ");
          scanf("%s",gok4.name) ;
            break;

          case 5: printf("\nenter user id: ");
          scanf("%s",gokid5);
          printf("\nenter password: ");
          scanf("%s",gokpass5);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",gok5.name) ;
            break;

        case 6:printf("\nenter user id: ");
          scanf("%s",gokid6);
          printf("\nenter password: ");
          scanf("%s",gokpass6);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",gok6.name) ;
            break;

        case 7: printf("\nenter user id: ");
          scanf("%s",gokid7);
          printf("\nenter password: ");
          scanf("%s",gokpass7);
          printf("\n-----login compleated------\n");  
        printf("\nenter name: ");
          scanf("%s",gok7.name) ;
            break;
    
        case 8:printf("\nenter user id: ");
          scanf("%s",gokid8);
          printf("\nenter password: ");
          scanf("%s",gokpass8);
          printf("\n-----login compleated------\n");  
          printf("\nenter name: ");
          scanf("%s",gok8.name) ;
          break;
    
        case 9:printf("\nenter user id: ");
          scanf("%s",gokid9);
          printf("\nenter password: ");
          scanf("%s",gokpass9);
          printf("\n-----login compleated------\n"); 
         printf("\nenter name: ");
          scanf("%s",gok9.name) ;
            break;

        case 10:printf("\nenter user id: ");
          scanf("%s",gokid10);
          printf("\nenter password: ");
          scanf("%s",gokpass10);
          printf("\n-----login compleated------\n"); 
         printf("\nenter name: ");
          scanf("%s",gok10.name) ;
            break;
    
        case 11:printf("\nenter user id: ");
          scanf("%s",gokid11);
          printf("\nenter password: ");
          scanf("%s",gokpass11);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",gok11.name) ;
            break;

        case 12:printf("\nenter user id: ");
          scanf("%s",gokid12);
          printf("\nenter password: ");
          scanf("%s",gokpass12);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",gok12.name) ;
            break;
    
        case 13: printf("\nenter user id: ");
          scanf("%s",gokid13);
          printf("\nenter password: ");
          scanf("%s",gokpass13);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",gok13.name) ;
            break;
    
        case 14:printf("\nenter user id: ");
          scanf("%s",gokid14);
          printf("\nenter password: ");
          scanf("%s",gokpass14);
          printf("\n-----login compleated------\n"); 
         printf("\nenter name: ");
          scanf("%s",gok14.name) ;
            break;

        case 15:printf("\nenter user id: ");
          scanf("%s",gokid15);
          printf("\nenter password: ");
          scanf("%s",gokpass15);
          printf("\n-----login compleated------\n"); 
         printf("\nenter name: ");
          scanf("%s",gok15.name) ;
            break;
    
        case 16:printf("\nenter user id: ");
          scanf("%s",gokid16);
          printf("\nenter password: ");
          scanf("%s",gokpass16);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",gok16.name) ;
            break;

        case 17:printf("\nenter user id: ");
          scanf("%s",gokid17);
          printf("\nenter password: ");
          scanf("%s",gokpass17);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",gok17.name) ;
            break;
    
        case 18: printf("\nenter user id: ");
          scanf("%s",gokid18);
          printf("\nenter password: ");
          scanf("%s",gokpass18);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",gok18.name) ;
            break;
    
        case 19:printf("\nenter user id: ");
          scanf("%s",gokid19);
          printf("\nenter password: ");
          scanf("%s",gokpass19);
          printf("\n-----login compleated------\n"); 
         printf("\nenter name: ");
          scanf("%s",gok19.name) ;
            break;

        case 20: printf("\nenter user id: ");
          scanf("%s",gokid20);
          printf("\nenter password: ");
          scanf("%s",gokpass20);
          printf("\n-----login compleated------\n"); 
        printf("\nenter name: ");
          scanf("%s",gok20.name) ;
            break;
        default:a--;
          printf("\ninvalid choice");
    
      }
    }
  } 
 
  
}
void pushgoa()
{
  printgoa();
  if(b>20)
  {
    printf("\nseet is full");
  }
  else
  {
  
    printf("\nenter no of seets: ");
    scanf("%d",&n);
    for(o=0;o<n;o++)
    {
      printf("\nenter seet no: ");
      scanf("%d",&sno);
      b++;
      switch(sno)
      {
        
        
        case 1:printf("\nenter user id: ");
          scanf("%s",goaid1);
          printf("\nenter password: ");
          scanf("%s",goapass1);
          printf("\n-----login compleated------\n");  
        printf("\nenter name: ");
          scanf("%s",goa1.name) ;
            break;
        case 2:printf("\nenter user id: ");
          scanf("%s",goaid2);
          printf("\nenter password: ");
          scanf("%s",goapass2);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",goa2.name) ;
            break;
    
        case 3:printf("\nenter user id: ");
          scanf("%s",goaid3);
          printf("\nenter password: ");
          scanf("%s",goapass3);
          printf("\n-----login compleated------\n");  
          printf("\nenter name: ");
          scanf("%s",goa3.name) ;
            break;
    
        case 4: printf("\nenter user id: ");
          scanf("%s",goaid4);
          printf("\nenter password: ");
          scanf("%s",goapass4);
          printf("\n-----login compleated------\n"); 
        printf("\nenter name: ");
          scanf("%s",goa4.name) ;
            break;

          case 5: printf("\nenter user id: ");
          scanf("%s",goaid5);
          printf("\nenter password: ");
          scanf("%s",goapass5);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",goa5.name) ;
            break;

        case 6:printf("\nenter user id: ");
          scanf("%s",goaid6);
          printf("\nenter password: ");
          scanf("%s",goapass6);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",goa6.name) ;
            break;

        case 7: printf("\nenter user id: ");
          scanf("%s",goaid7);
          printf("\nenter password: ");
          scanf("%s",goapass7);
          printf("\n-----login compleated------\n");  
        printf("\nenter name: ");
          scanf("%s",goa7.name) ;
            break;
    
        case 8:printf("\nenter user id: ");
          scanf("%s",goaid8);
          printf("\nenter password: ");
          scanf("%s",goapass8);
          printf("\n-----login compleated------\n");  
          printf("\nenter name: ");
          scanf("%s",goa8.name) ;
          break;
    
        case 9:printf("\nenter user id: ");
          scanf("%s",goaid9);
          printf("\nenter password: ");
          scanf("%s",goapass9);
          printf("\n-----login compleated------\n"); 
         printf("\nenter name: ");
          scanf("%s",goa9.name) ;
            break;

        case 10:printf("\nenter user id: ");
          scanf("%s",goaid10);
          printf("\nenter password: ");
          scanf("%s",goapass10);
          printf("\n-----login compleated------\n"); 
         printf("\nenter name: ");
          scanf("%s",goa10.name) ;
            break;
    
        case 11:printf("\nenter user id: ");
          scanf("%s",goaid11);
          printf("\nenter password: ");
          scanf("%s",goapass11);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",goa11.name) ;
            break;

        case 12:printf("\nenter user id: ");
          scanf("%s",goaid12);
          printf("\nenter password: ");
          scanf("%s",goapass12);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",goa12.name) ;
            break;
    
        case 13: printf("\nenter user id: ");
          scanf("%s",goaid13);
          printf("\nenter password: ");
          scanf("%s",goapass13);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",goa13.name) ;
            break;
    
        case 14:printf("\nenter user id: ");
          scanf("%s",goaid14);
          printf("\nenter password: ");
          scanf("%s",goapass14);
          printf("\n-----login compleated------\n"); 
         printf("\nenter name: ");
          scanf("%s",goa14.name) ;
            break;

        case 15:printf("\nenter user id: ");
          scanf("%s",goaid15);
          printf("\nenter password: ");
          scanf("%s",goapass15);
          printf("\n-----login compleated------\n"); 
         printf("\nenter name: ");
          scanf("%s",goa15.name) ;
            break;
    
        case 16:printf("\nenter user id: ");
          scanf("%s",goaid16);
          printf("\nenter password: ");
          scanf("%s",goapass16);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",goa16.name) ;
            break;

        case 17:printf("\nenter user id: ");
          scanf("%s",goaid17);
          printf("\nenter password: ");
          scanf("%s",goapass17);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",goa17.name) ;
            break;
    
        case 18: printf("\nenter user id: ");
          scanf("%s",goaid18);
          printf("\nenter password: ");
          scanf("%s",goapass18);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",goa18.name) ;
            break;
    
        case 19:printf("\nenter user id: ");
          scanf("%s",goaid19);
          printf("\nenter password: ");
          scanf("%s",goapass19);
          printf("\n-----login compleated------\n"); 
         printf("\nenter name: ");
          scanf("%s",goa19.name) ;
            break;

        case 20: printf("\nenter user id: ");
          scanf("%s",goaid20);
          printf("\nenter password: ");
          scanf("%s",goapass20);
          printf("\n-----login compleated------\n"); 
        printf("\nenter name: ");
          scanf("%s",goa20.name) ;
            break;
        default:b--;
          printf("\ninvalid choice");
    
      }
    }
  } 
 
  
}
void pushxyz()
{
  printxyz();
  if(c>20)
  {
    printf("\nseet is full");
  }
  else
  {
  
    printf("\nenter no of seets: ");
    scanf("%d",&n);
    for(o=0;o<n;o++)
    {
      printf("\nenter seet no: ");
      scanf("%d",&sno);
      c++;
      
      switch(sno)
      {
        
        
        case 1:printf("\nenter user id: ");
          scanf("%s",xyzid1);
          printf("\nenter password: ");
          scanf("%s",xyzpass1);
          printf("\n-----login compleated------\n");  
        printf("\nenter name: ");
          scanf("%s",xyz1.name) ;
            break;
        case 2:printf("\nenter user id: ");
          scanf("%s",xyzid2);
          printf("\nenter password: ");
          scanf("%s",xyzpass2);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",xyz2.name) ;
            break;
    
        case 3:printf("\nenter user id: ");
          scanf("%s",xyzid3);
          printf("\nenter password: ");
          scanf("%s",xyzpass3);
          printf("\n-----login compleated------\n");  
          printf("\nenter name: ");
          scanf("%s",xyz3.name) ;
            break;
    
        case 4: printf("\nenter user id: ");
          scanf("%s",xyzid4);
          printf("\nenter password: ");
          scanf("%s",xyzpass4);
          printf("\n-----login compleated------\n"); 
        printf("\nenter name: ");
          scanf("%s",xyz4.name) ;
            break;

          case 5: printf("\nenter user id: ");
          scanf("%s",xyzid5);
          printf("\nenter password: ");
          scanf("%s",xyzpass5);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",xyz5.name) ;
            break;

        case 6:printf("\nenter user id: ");
          scanf("%s",xyzid6);
          printf("\nenter password: ");
          scanf("%s",xyzpass6);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",xyz6.name) ;
            break;

        case 7: printf("\nenter user id: ");
          scanf("%s",xyzid7);
          printf("\nenter password: ");
          scanf("%s",xyzpass7);
          printf("\n-----login compleated------\n");  
        printf("\nenter name: ");
          scanf("%s",xyz7.name) ;
            break;
    
        case 8:printf("\nenter user id: ");
          scanf("%s",xyzid8);
          printf("\nenter password: ");
          scanf("%s",xyzpass8);
          printf("\n-----login compleated------\n");  
          printf("\nenter name: ");
          scanf("%s",xyz8.name) ;
          break;
    
        case 9:printf("\nenter user id: ");
          scanf("%s",xyzid9);
          printf("\nenter password: ");
          scanf("%s",xyzpass9);
          printf("\n-----login compleated------\n"); 
         printf("\nenter name: ");
          scanf("%s",xyz9.name) ;
            break;

        case 10:printf("\nenter user id: ");
          scanf("%s",xyzid10);
          printf("\nenter password: ");
          scanf("%s",xyzpass10);
          printf("\n-----login compleated------\n"); 
         printf("\nenter name: ");
          scanf("%s",xyz10.name) ;
            break;
    
        case 11:printf("\nenter user id: ");
          scanf("%s",xyzid11);
          printf("\nenter password: ");
          scanf("%s",xyzpass11);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",xyz11.name) ;
            break;

        case 12:printf("\nenter user id: ");
          scanf("%s",xyzid12);
          printf("\nenter password: ");
          scanf("%s",xyzpass12);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",xyz12.name) ;
            break;
    
        case 13: printf("\nenter user id: ");
          scanf("%s",xyzid13);
          printf("\nenter password: ");
          scanf("%s",xyzpass13);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",xyz13.name) ;
            break;
    
        case 14:printf("\nenter user id: ");
          scanf("%s",xyzid14);
          printf("\nenter password: ");
          scanf("%s",xyzpass14);
          printf("\n-----login compleated------\n"); 
         printf("\nenter name: ");
          scanf("%s",xyz14.name) ;
            break;

        case 15:printf("\nenter user id: ");
          scanf("%s",xyzid15);
          printf("\nenter password: ");
          scanf("%s",xyzpass15);
          printf("\n-----login compleated------\n"); 
         printf("\nenter name: ");
          scanf("%s",xyz15.name) ;
            break;
    
        case 16:printf("\nenter user id: ");
          scanf("%s",xyzid16);
          printf("\nenter password: ");
          scanf("%s",xyzpass16);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",xyz16.name) ;
            break;

        case 17:printf("\nenter user id: ");
          scanf("%s",xyzid17);
          printf("\nenter password: ");
          scanf("%s",xyzpass17);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",xyz17.name) ;
            break;
    
        case 18: printf("\nenter user id: ");
          scanf("%s",xyzid18);
          printf("\nenter password: ");
          scanf("%s",xyzpass18);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",xyz18.name) ;
            break;
    
        case 19:printf("\nenter user id: ");
          scanf("%s",xyzid19);
          printf("\nenter password: ");
          scanf("%s",xyzpass19);
          printf("\n-----login compleated------\n"); 
         printf("\nenter name: ");
          scanf("%s",xyz19.name) ;
            break;

        case 20: printf("\nenter user id: ");
          scanf("%s",xyzid20);
          printf("\nenter password: ");
          scanf("%s",xyzpass20);
          printf("\n-----login compleated------\n"); 
        printf("\nenter name: ");
          scanf("%s",xyz20.name) ;
            break;
        default:c--;
          printf("\ninvalid choice");
    
      }
    }
  } 
 
  
}
void pushabc()
{
  printabc();
  if(d>20)
  {
    printf("\nseet is full");
  }
  else
  {
  
    printf("\nenter no of seets: ");
    scanf("%d",&n);
    for(o=0;o<n;o++)
    {
      printf("\nenter seet no: ");
      scanf("%d",&sno);
      d++;
       switch(sno)
      {
        
        
        case 1:printf("\nenter user id: ");
          scanf("%s",abcid1);
          printf("\nenter password: ");
          scanf("%s",abcpass1);
          printf("\n-----login compleated------\n");  
        printf("\nenter name: ");
          scanf("%s",abc1.name) ;
            break;
        case 2:printf("\nenter user id: ");
          scanf("%s",abcid2);
          printf("\nenter password: ");
          scanf("%s",abcpass2);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",abc2.name) ;
            break;
    
        case 3:printf("\nenter user id: ");
          scanf("%s",abcid3);
          printf("\nenter password: ");
          scanf("%s",abcpass3);
          printf("\n-----login compleated------\n");  
          printf("\nenter name: ");
          scanf("%s",abc3.name) ;
            break;
    
        case 4: printf("\nenter user id: ");
          scanf("%s",abcid4);
          printf("\nenter password: ");
          scanf("%s",abcpass4);
          printf("\n-----login compleated------\n"); 
        printf("\nenter name: ");
          scanf("%s",abc4.name) ;
            break;

          case 5: printf("\nenter user id: ");
          scanf("%s",abcid5);
          printf("\nenter password: ");
          scanf("%s",abcpass5);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",abc5.name) ;
            break;

        case 6:printf("\nenter user id: ");
          scanf("%s",abcid6);
          printf("\nenter password: ");
          scanf("%s",abcpass6);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",abc6.name) ;
            break;

        case 7: printf("\nenter user id: ");
          scanf("%s",abcid7);
          printf("\nenter password: ");
          scanf("%s",abcpass7);
          printf("\n-----login compleated------\n");  
        printf("\nenter name: ");
          scanf("%s",abc7.name) ;
            break;
    
        case 8:printf("\nenter user id: ");
          scanf("%s",abcid8);
          printf("\nenter password: ");
          scanf("%s",abcpass8);
          printf("\n-----login compleated------\n");  
          printf("\nenter name: ");
          scanf("%s",abc8.name) ;
          break;
    
        case 9:printf("\nenter user id: ");
          scanf("%s",abcid9);
          printf("\nenter password: ");
          scanf("%s",abcpass9);
          printf("\n-----login compleated------\n"); 
         printf("\nenter name: ");
          scanf("%s",abc9.name) ;
            break;

        case 10:printf("\nenter user id: ");
          scanf("%s",abcid10);
          printf("\nenter password: ");
          scanf("%s",abcpass10);
          printf("\n-----login compleated------\n"); 
         printf("\nenter name: ");
          scanf("%s",abc10.name) ;
            break;
    
        case 11:printf("\nenter user id: ");
          scanf("%s",abcid11);
          printf("\nenter password: ");
          scanf("%s",abcpass11);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",abc11.name) ;
            break;

        case 12:printf("\nenter user id: ");
          scanf("%s",abcid12);
          printf("\nenter password: ");
          scanf("%s",abcpass12);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",abc12.name) ;
            break;
    
        case 13: printf("\nenter user id: ");
          scanf("%s",abcid13);
          printf("\nenter password: ");
          scanf("%s",abcpass13);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",abc13.name) ;
            break;
    
        case 14:printf("\nenter user id: ");
          scanf("%s",abcid14);
          printf("\nenter password: ");
          scanf("%s",abcpass14);
          printf("\n-----login compleated------\n"); 
         printf("\nenter name: ");
          scanf("%s",abc14.name) ;
            break;

        case 15:printf("\nenter user id: ");
          scanf("%s",abcid15);
          printf("\nenter password: ");
          scanf("%s",abcpass15);
          printf("\n-----login compleated------\n"); 
         printf("\nenter name: ");
          scanf("%s",abc15.name) ;
            break;
    
        case 16:printf("\nenter user id: ");
          scanf("%s",abcid16);
          printf("\nenter password: ");
          scanf("%s",abcpass16);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",abc16.name) ;
            break;

        case 17:printf("\nenter user id: ");
          scanf("%s",abcid17);
          printf("\nenter password: ");
          scanf("%s",abcpass17);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",abc17.name) ;
            break;
    
        case 18: printf("\nenter user id: ");
          scanf("%s",abcid18);
          printf("\nenter password: ");
          scanf("%s",abcpass18);
          printf("\n-----login compleated------\n"); 
          printf("\nenter name: ");
          scanf("%s",abc18.name) ;
            break;
    
        case 19:printf("\nenter user id: ");
          scanf("%s",abcid19);
          printf("\nenter password: ");
          scanf("%s",abcpass19);
          printf("\n-----login compleated------\n"); 
         printf("\nenter name: ");
          scanf("%s",abc19.name) ;
            break;

        case 20: printf("\nenter user id: ");
          scanf("%s",abcid20);
          printf("\nenter password: ");
          scanf("%s",abcpass20);
          printf("\n-----login compleated------\n"); 
        printf("\nenter name: ");
          scanf("%s",abc20.name) ;
            break;
        default:d--;
          printf("\ninvalid choice");
    
      }
    }
  } 
 
  
}

void popgokak()
{
  printgokak();
  printf("\nenter seet no: ");
  scanf("%d",&sno);
switch(sno)
      {
        
        
        case 1:printf("\nenter user id: ");
          scanf("%s",gokvid1);
          printf("\nenter password: ");
          scanf("%s",gokvpass1);


         

          if((strcmp(gokid1, gokvid1) == 0)&&(strcmp(gokpass1, gokvpass1) == 0))
          {
            scanf("%s",gok1.name) ;
            a--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",gokid1,gokpass1);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break;  
                 default:printf("\ninvalid choice");
            }

          }
            break;
        case 2:printf("\nenter user id: ");
          scanf("%s",gokvid2);
          printf("\nenter password: ");
          scanf("%s",gokvpass2);
          if((strcmp(gokid2, gokvid2) == 0)&&(strcmp(gokpass2, gokvpass2) == 0))
          {
            scanf("%s",gok2.name) ;
            a--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",gokid2,gokpass2);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 3:printf("\nenter user id: ");
          scanf("%s",gokvid3);
          printf("\nenter password: ");
          scanf("%s",gokvpass3);
  
           
          if((strcmp(gokid3, gokvid3) == 0)&&(strcmp(gokpass3, gokvpass3) == 0))
          {
           scanf("%s",gok3.name) ;
            a--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",gokid3,gokpass3);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 4: printf("\nenter user id: ");
          scanf("%s",gokvid4);
          printf("\nenter password: ");
          scanf("%s",gokvpass4);

         
          if((strcmp(gokid4, gokvid4) == 0)&&(strcmp(gokpass4, gokvpass4) == 0))
          {
            scanf("%s",gok4.name) ;
            a--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",gokid4,gokpass4);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;

          case 5: printf("\nenter user id: ");
          scanf("%s",gokvid5);
          printf("\nenter password: ");
          scanf("%s",gokvpass5);

           
         if((strcmp(gokid5, gokvid5) == 0)&&(strcmp(gokpass5, gokvpass5) == 0))
          {
            scanf("%s",gok5.name) ;
            a--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",gokid5,gokpass5);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;

        case 6:printf("\nenter user id: ");
          scanf("%s",gokvid6);
          printf("\nenter password: ");
          scanf("%s",gokvpass6);

           
          if((strcmp(gokid6, gokvid6) == 0)&&(strcmp(gokpass6, gokvpass6) == 0))
          {
            scanf("%s",gok6.name) ;
            a--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",gokid6,gokpass6);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;

        case 7: printf("\nenter user id: ");
          scanf("%s",gokvid7);
          printf("\nenter password: ");
          scanf("%s",gokvpass7);
        
         
           if((strcmp(gokid7, gokvid7) == 0)&&(strcmp(gokpass7, gokvpass7) == 0))
          {
            scanf("%s",gok7.name) ;
            a--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",gokid7,gokpass7);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 8:printf("\nenter user id: ");
          scanf("%s",gokvid8);
          printf("\nenter password: ");
          scanf("%s",gokvpass8);
         
           
          if((strcmp(gokid8, gokvid8) == 0)&&(strcmp(gokpass8, gokvpass8) == 0))
          {
            scanf("%s",gok8.name) ;
            a--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",gokid8,gokpass8);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
          break;
    
        case 9:printf("\nenter user id: ");
          scanf("%s",gokvid9);
          printf("\nenter password: ");
          scanf("%s",gokvpass9);

          
           if((strcmp(gokid9, gokvid9) == 0)&&(strcmp(gokpass9, gokvpass9) == 0))
          {
            scanf("%s",gok9.name) ;
            a--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",gokid9,gokpass9);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;

        case 10:printf("\nenter user id: ");
          scanf("%s",gokvid10);
          printf("\nenter password: ");
          scanf("%s",gokvpass10);

          
           if((strcmp(gokid10, gokvid10) == 0)&&(strcmp(gokpass10, gokvpass10) == 0))
          {
            scanf("%s",gok10.name) ;
            a--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",gokid10,gokpass10);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 11:printf("\nenter user id: ");
          scanf("%s",gokvid11);
          printf("\nenter password: ");
          scanf("%s",gokvpass11);

           
          if((strcmp(gokid11, gokvid11) == 0)&&(strcmp(gokpass11, gokvpass11) == 0))
          {
            scanf("%s",gok11.name) ;
            a--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",gokid11,gokpass11);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;

        case 12:printf("\nenter user id: ");
          scanf("%s",gokvid12);
          printf("\nenter password: ");
          scanf("%s",gokvpass12);

           
           if((strcmp(gokid12, gokvid12) == 0)&&(strcmp(gokpass12, gokvpass12) == 0))
          {
            scanf("%s",gok12.name) ;
            a--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",gokid12,gokpass12);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 13: printf("\nenter user id: ");
          scanf("%s",gokvid13);
          printf("\nenter password: ");
          scanf("%s",gokvpass13);

           
           if((strcmp(gokid13, gokvid13) == 0)&&(strcmp(gokpass13, gokvpass13) == 0))
          {
            scanf("%s",gok13.name) ;
            a--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",gokid13,gokpass13);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 14:printf("\nenter user id: ");
          scanf("%s",gokvid14);
          printf("\nenter password: ");
          scanf("%s",gokvpass14);

          
           if((strcmp(gokid14, gokvid14) == 0)&&(strcmp(gokpass14, gokvpass14) == 0))
          {
            scanf("%s",gok14.name) ;
            a--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",gokid14,gokpass14);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break;  
                 default:printf("\ninvalid choice");
            }

          }
            break;

        case 15:printf("\nenter user id: ");
          scanf("%s",gokvid15);
          printf("\nenter password: ");
          scanf("%s",gokvpass15);

          
          if((strcmp(gokid15, gokvid15) == 0)&&(strcmp(gokpass15, gokvpass15) == 0))
          {
            scanf("%s",gok15.name) ;
            a--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",gokid15,gokpass15);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 16:printf("\nenter user id: ");
          scanf("%s",gokvid16);
          printf("\nenter password: ");
          scanf("%s",gokvpass16);

           
           if((strcmp(gokid16, gokvid16) == 0)&&(strcmp(gokpass16, gokvpass16) == 0))
          {
            scanf("%s",gok16.name) ;
            a--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",gokid16,gokpass16);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;

        case 17:printf("\nenter user id: ");
          scanf("%s",gokvid17);
          printf("\nenter password: ");
          scanf("%s",gokvpass17);

           
           if((strcmp(gokid17, gokvid17) == 0)&&(strcmp(gokpass17, gokvpass17) == 0))
          {
            scanf("%s",gok17.name) ;
            a--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",gokid17,gokpass17);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break;  
                 default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 18: printf("\nenter user id: ");
          scanf("%s",gokvid18);
          printf("\nenter password: ");
          scanf("%s",gokvpass18);
     
           
           if((strcmp(gokid18, gokvid18) == 0)&&(strcmp(gokpass18, gokvpass18) == 0))
          {
            scanf("%s",gok18.name) ;
            a--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",gokid18,gokpass18);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break;  
                 default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 19:printf("\nenter user id: ");
          scanf("%s",gokvid19);
          printf("\nenter password: ");
          scanf("%s",gokvpass19);
    
          
          if((strcmp(gokid19, gokvid19) == 0)&&(strcmp(gokpass19, gokvpass19) == 0))
          {
            scanf("%s",gok19.name) ;
            a--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",gokid19,gokpass19);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break;  
                 default:printf("\ninvalid choice");
            }

          }
            break;

        case 20: printf("\nenter user id: ");
          scanf("%s",gokvid20);
          printf("\nenter password: ");
          scanf("%s",gokvpass20);

         
           if((strcmp(gokid20, gokvid20) == 0)&&(strcmp(gokpass20, gokvpass20) == 0))
          {
            scanf("%s",gok20.name) ;
            a--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",gokid20,gokpass20);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                break;
                default: printf("\ninvalid choice");
            }

          }
            break;
        default: printf("\ninvalid choice");
    
      }
}

void popgoa()
{
  printgoa();
  printf("\nenter seet no: ");
  scanf("%d",&sno);
  switch(sno)
      {
        
        
        case 1:printf("\nenter user id: ");
          scanf("%s",goavid1);
          printf("\nenter password: ");
          scanf("%s",goavpass1);

         

          if((strcmp(goaid1, goavid1) == 0)&&(strcmp(goapass1, goavpass1) == 0))
          {
            scanf("%s",goa1.name) ;
            b--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",goaid1,goapass1);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break;  
                 default:printf("\ninvalid choice");
            }

          }
            break;
        case 2:printf("\nenter user id: ");
          scanf("%s",goavid2);
          printf("\nenter password: ");
          scanf("%s",goavpass2);
          if((strcmp(goaid2, goavid2) == 0)&&(strcmp(goapass2, goavpass2) == 0))
          {
            scanf("%s",goa2.name) ;
            b--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",goaid2,goapass2);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 3:printf("\nenter user id: ");
          scanf("%s",goavid3);
          printf("\nenter password: ");
          scanf("%s",goavpass3);
  
           
          if((strcmp(goaid3, goavid3) == 0)&&(strcmp(goapass3, goavpass3) == 0))
          {
           scanf("%s",goa3.name) ;
            b--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",goaid3,goapass3);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 4: printf("\nenter user id: ");
          scanf("%s",goavid4);
          printf("\nenter password: ");
          scanf("%s",goavpass4);

         
          if((strcmp(goaid4, goavid4) == 0)&&(strcmp(goapass4, goavpass4) == 0))
          {
            scanf("%s",goa4.name) ;
            b--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",goaid4,goapass4);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;

          case 5: printf("\nenter user id: ");
          scanf("%s",goavid5);
          printf("\nenter password: ");
          scanf("%s",goavpass5);

           
         if((strcmp(goaid5, goavid5) == 0)&&(strcmp(goapass5, goavpass5) == 0))
          {
            scanf("%s",goa5.name) ;
            b--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",goaid5,goapass5);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;

        case 6:printf("\nenter user id: ");
          scanf("%s",goavid6);
          printf("\nenter password: ");
          scanf("%s",goavpass6);

           
          if((strcmp(goaid6, goavid6) == 0)&&(strcmp(goapass6, goavpass6) == 0))
          {
            scanf("%s",goa6.name) ;
            b--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",goaid6,goapass6);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;

        case 7: printf("\nenter user id: ");
          scanf("%s",goavid7);
          printf("\nenter password: ");
          scanf("%s",goavpass7);
        
         
           if((strcmp(goaid7, goavid7) == 0)&&(strcmp(goapass7, goavpass7) == 0))
          {
            scanf("%s",goa7.name) ;
            b--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",goaid7,goapass7);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 8:printf("\nenter user id: ");
          scanf("%s",goavid8);
          printf("\nenter password: ");
          scanf("%s",goavpass8);
         
           
          if((strcmp(goaid8, goavid8) == 0)&&(strcmp(goapass8, goavpass8) == 0))
          {
            scanf("%s",goa8.name) ;
            b--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",goaid8,goapass8);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
          break;
    
        case 9:printf("\nenter user id: ");
          scanf("%s",goavid9);
          printf("\nenter password: ");
          scanf("%s",goavpass9);

          
           if((strcmp(goaid9, goavid9) == 0)&&(strcmp(goapass9, goavpass9) == 0))
          {
            scanf("%s",goa9.name) ;
            b--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",goaid9,goapass9);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;

        case 10:printf("\nenter user id: ");
          scanf("%s",goavid10);
          printf("\nenter password: ");
          scanf("%s",goavpass10);

          
           if((strcmp(goaid10, goavid10) == 0)&&(strcmp(goapass10, goavpass10) == 0))
          {
            scanf("%s",goa10.name) ;
            b--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",goaid10,goapass10);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 11:printf("\nenter user id: ");
          scanf("%s",goavid11);
          printf("\nenter password: ");
          scanf("%s",goavpass11);

           
          if((strcmp(goaid11, goavid11) == 0)&&(strcmp(goapass11, goavpass11) == 0))
          {
            scanf("%s",goa11.name) ;
            b--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",goaid11,goapass11);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;

        case 12:printf("\nenter user id: ");
          scanf("%s",goavid12);
          printf("\nenter password: ");
          scanf("%s",goavpass12);

           
           if((strcmp(goaid12, goavid12) == 0)&&(strcmp(goapass12, goavpass12) == 0))
          {
            scanf("%s",goa12.name) ;
            b--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",goaid12,goapass12);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 13: printf("\nenter user id: ");
          scanf("%s",goavid13);
          printf("\nenter password: ");
          scanf("%s",goavpass13);

           
           if((strcmp(goaid13, goavid13) == 0)&&(strcmp(goapass13, goavpass13) == 0))
          {
            scanf("%s",goa13.name) ;
            b--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",goaid13,goapass13);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 14:printf("\nenter user id: ");
          scanf("%s",goavid14);
          printf("\nenter password: ");
          scanf("%s",goavpass14);

          
           if((strcmp(goaid14, goavid14) == 0)&&(strcmp(goapass14, goavpass14) == 0))
          {
            scanf("%s",goa14.name) ;
            b--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",goaid14,goapass14);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break;  
                 default:printf("\ninvalid choice");
            }

          }
            break;

        case 15:printf("\nenter user id: ");
          scanf("%s",goavid15);
          printf("\nenter password: ");
          scanf("%s",goavpass15);

          
          if((strcmp(goaid15, goavid15) == 0)&&(strcmp(goapass15, goavpass15) == 0))
          {
            scanf("%s",goa15.name) ;
            b--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",goaid15,goapass15);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 16:printf("\nenter user id: ");
          scanf("%s",goavid16);
          printf("\nenter password: ");
          scanf("%s",goavpass16);

           
           if((strcmp(goaid16, goavid16) == 0)&&(strcmp(goapass16, goavpass16) == 0))
          {
            scanf("%s",goa16.name) ;
            b--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",goaid16,goapass16);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;

        case 17:printf("\nenter user id: ");
          scanf("%s",goavid17);
          printf("\nenter password: ");
          scanf("%s",goavpass17);

           
           if((strcmp(goaid17, goavid17) == 0)&&(strcmp(goapass17, goavpass17) == 0))
          {
            scanf("%s",goa17.name) ;
            b--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",goaid17,goapass17);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break;  
                 default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 18: printf("\nenter user id: ");
          scanf("%s",goavid18);
          printf("\nenter password: ");
          scanf("%s",goavpass18);
     
           
           if((strcmp(goaid18, goavid18) == 0)&&(strcmp(goapass18, goavpass18) == 0))
          {
            scanf("%s",goa18.name) ;
            b--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",goaid18,goapass18);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break;  
                 default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 19:printf("\nenter user id: ");
          scanf("%s",goavid19);
          printf("\nenter password: ");
          scanf("%s",goavpass19);
    
          
          if((strcmp(goaid19, goavid19) == 0)&&(strcmp(goapass19, goavpass19) == 0))
          {
            scanf("%s",goa19.name) ;
            b--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",goaid19,goapass19);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break;  
                 default:printf("\ninvalid choice");
            }

          }
            break;

        case 20: printf("\nenter user id: ");
          scanf("%s",goavid20);
          printf("\nenter password: ");
          scanf("%s",goavpass20);

         
           if((strcmp(goaid20, goavid20) == 0)&&(strcmp(goapass20, goavpass20) == 0))
          {
            scanf("%s",goa20.name) ;
            b--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",goaid20,goapass20);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                break;
                default: printf("\ninvalid choice");
            }

          }
            break;
        default: printf("\ninvalid choice");
    
      }
}

void popxyz()
{
  printxyz();
  printf("\nenter seet no: ");
  scanf("%d",&sno);
  switch(sno)
      {
        
        
        case 1:printf("\nenter user id: ");
          scanf("%s",xyzvid1);
          printf("\nenter password: ");
          scanf("%s",xyzvpass1);
         

          if((strcmp(xyzid1, xyzvid1) == 0)&&(strcmp(xyzpass1, xyzvpass1) == 0))
          {
            scanf("%s",xyz1.name) ;
            c--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",xyzid1,xyzpass1);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break;  
                 default:printf("\ninvalid choice");
            }

          }
            break;
        case 2:printf("\nenter user id: ");
          scanf("%s",xyzvid2);
          printf("\nenter password: ");
          scanf("%s",xyzvpass2);
          if((strcmp(xyzid2, xyzvid2) == 0)&&(strcmp(xyzpass2, xyzvpass2) == 0))
          {
            scanf("%s",xyz2.name) ;
            c--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",xyzid2,xyzpass2);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 3:printf("\nenter user id: ");
          scanf("%s",xyzvid3);
          printf("\nenter password: ");
          scanf("%s",xyzvpass3);
  
           
          if((strcmp(xyzid3, xyzvid3) == 0)&&(strcmp(xyzpass3, xyzvpass3) == 0))
          {
           scanf("%s",xyz3.name) ;
            c--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",xyzid3,xyzpass3);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 4: printf("\nenter user id: ");
          scanf("%s",xyzvid4);
          printf("\nenter password: ");
          scanf("%s",xyzvpass4);

         
          if((strcmp(xyzid4, xyzvid4) == 0)&&(strcmp(xyzpass4, xyzvpass4) == 0))
          {
            scanf("%s",xyz4.name) ;
            c--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",xyzid4,xyzpass4);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;

          case 5: printf("\nenter user id: ");
          scanf("%s",xyzvid5);
          printf("\nenter password: ");
          scanf("%s",xyzvpass5);

           
         if((strcmp(xyzid5, xyzvid5) == 0)&&(strcmp(xyzpass5, xyzvpass5) == 0))
          {
            scanf("%s",xyz5.name) ;
            c--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",xyzid5,xyzpass5);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;

        case 6:printf("\nenter user id: ");
          scanf("%s",xyzvid6);
          printf("\nenter password: ");
          scanf("%s",xyzvpass6);

           
          if((strcmp(xyzid6, xyzvid6) == 0)&&(strcmp(xyzpass6, xyzvpass6) == 0))
          {
            scanf("%s",xyz6.name) ;
            c--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",xyzid6,xyzpass6);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;

        case 7: printf("\nenter user id: ");
          scanf("%s",xyzvid7);
          printf("\nenter password: ");
          scanf("%s",xyzvpass7);
        
         
           if((strcmp(xyzid7, xyzvid7) == 0)&&(strcmp(xyzpass7, xyzvpass7) == 0))
          {
            scanf("%s",xyz7.name) ;
            c--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",xyzid7,xyzpass7);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 8:printf("\nenter user id: ");
          scanf("%s",xyzvid8);
          printf("\nenter password: ");
          scanf("%s",xyzvpass8);
         
           
          if((strcmp(xyzid8, xyzvid8) == 0)&&(strcmp(xyzpass8, xyzvpass8) == 0))
          {
            scanf("%s",xyz8.name) ;
            c--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",xyzid8,xyzpass8);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
          break;
    
        case 9:printf("\nenter user id: ");
          scanf("%s",xyzvid9);
          printf("\nenter password: ");
          scanf("%s",xyzvpass9);

          
           if((strcmp(xyzid9, xyzvid9) == 0)&&(strcmp(xyzpass9, xyzvpass9) == 0))
          {
            scanf("%s",xyz9.name) ;
            c--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",xyzid9,xyzpass9);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;

        case 10:printf("\nenter user id: ");
          scanf("%s",xyzvid10);
          printf("\nenter password: ");
          scanf("%s",xyzvpass10);

          
           if((strcmp(xyzid10, xyzvid10) == 0)&&(strcmp(xyzpass10, xyzvpass10) == 0))
          {
            scanf("%s",xyz10.name) ;
            c--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",xyzid10,xyzpass10);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 11:printf("\nenter user id: ");
          scanf("%s",xyzvid11);
          printf("\nenter password: ");
          scanf("%s",xyzvpass11);

           
          if((strcmp(xyzid11, xyzvid11) == 0)&&(strcmp(xyzpass11, xyzvpass11) == 0))
          {
            scanf("%s",xyz11.name) ;
            c--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",xyzid11,xyzpass11);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;

        case 12:printf("\nenter user id: ");
          scanf("%s",xyzvid12);
          printf("\nenter password: ");
          scanf("%s",xyzvpass12);

           
           if((strcmp(xyzid12, xyzvid12) == 0)&&(strcmp(xyzpass12, xyzvpass12) == 0))
          {
            scanf("%s",xyz12.name) ;
            c--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",xyzid12,xyzpass12);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 13: printf("\nenter user id: ");
          scanf("%s",xyzvid13);
          printf("\nenter password: ");
          scanf("%s",xyzvpass13);

           
           if((strcmp(xyzid13, xyzvid13) == 0)&&(strcmp(xyzpass13, xyzvpass13) == 0))
          {
            scanf("%s",xyz13.name) ;
            c--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",xyzid13,xyzpass13);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 14:printf("\nenter user id: ");
          scanf("%s",xyzvid14);
          printf("\nenter password: ");
          scanf("%s",xyzvpass14);

          
           if((strcmp(xyzid14, xyzvid14) == 0)&&(strcmp(xyzpass14, xyzvpass14) == 0))
          {
            scanf("%s",xyz14.name) ;
            c--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",xyzid14,xyzpass14);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break;  
                 default:printf("\ninvalid choice");
            }

          }
            break;

        case 15:printf("\nenter user id: ");
          scanf("%s",xyzvid15);
          printf("\nenter password: ");
          scanf("%s",xyzvpass15);

          
          if((strcmp(xyzid15, xyzvid15) == 0)&&(strcmp(xyzpass15, xyzvpass15) == 0))
          {
            scanf("%s",xyz15.name) ;
            c--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",xyzid15,xyzpass15);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 16:printf("\nenter user id: ");
          scanf("%s",xyzvid16);
          printf("\nenter password: ");
          scanf("%s",xyzvpass16);

           
           if((strcmp(xyzid16, xyzvid16) == 0)&&(strcmp(xyzpass16, xyzvpass16) == 0))
          {
            scanf("%s",xyz16.name) ;
            c--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",xyzid16,xyzpass16);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;

        case 17:printf("\nenter user id: ");
          scanf("%s",xyzvid17);
          printf("\nenter password: ");
          scanf("%s",xyzvpass17);

           
           if((strcmp(xyzid17, xyzvid17) == 0)&&(strcmp(xyzpass17, xyzvpass17) == 0))
          {
            scanf("%s",xyz17.name) ;
            c--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",xyzid17,xyzpass17);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break;  
                 default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 18: printf("\nenter user id: ");
          scanf("%s",xyzvid18);
          printf("\nenter password: ");
          scanf("%s",xyzvpass18);
     
           
           if((strcmp(xyzid18, xyzvid18) == 0)&&(strcmp(xyzpass18, xyzvpass18) == 0))
          {
            scanf("%s",xyz18.name) ;
            c--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",xyzid18,xyzpass18);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break;  
                 default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 19:printf("\nenter user id: ");
          scanf("%s",xyzvid19);
          printf("\nenter password: ");
          scanf("%s",xyzvpass19);
    
          
          if((strcmp(xyzid19, xyzvid19) == 0)&&(strcmp(xyzpass19, xyzvpass19) == 0))
          {
            scanf("%s",xyz19.name) ;
            c--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",xyzid19,xyzpass19);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break;  
                 default:printf("\ninvalid choice");
            }

          }
            break;

        case 20: printf("\nenter user id: ");
          scanf("%s",xyzvid20);
          printf("\nenter password: ");
          scanf("%s",xyzvpass20);

         
           if((strcmp(xyzid20, xyzvid20) == 0)&&(strcmp(xyzpass20, xyzvpass20) == 0))
          {
            scanf("%s",xyz20.name) ;
            c--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",xyzid20,xyzpass20);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                break;
                default: printf("\ninvalid choice");
            }

          }
            break;
        default: printf("\ninvalid choice");
    
      }
  
}

void popabc()
{
  printabc();
  printf("\nenter seet no: ");
  scanf("%d",&sno);
  switch(sno)
      {
        
        
        case 1:printf("\nenter user id: ");
          scanf("%s",abcvid1);
          printf("\nenter password: ");
          scanf("%s",abcvpass1);

         

          if((strcmp(abcid1, abcvid1) == 0)&&(strcmp(abcpass1, abcvpass1) == 0))
          {
            scanf("%s",abc1.name) ;
            d--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",abcid1,abcpass1);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break;  
                 default:printf("\ninvalid choice");
            }

          }
            break;
        case 2:printf("\nenter user id: ");
          scanf("%s",abcvid2);
          printf("\nenter password: ");
          scanf("%s",abcvpass2);
          if((strcmp(abcid2, abcvid2) == 0)&&(strcmp(abcpass2, abcvpass2) == 0))
          {
            scanf("%s",abc2.name) ;
            d--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",abcid2,abcpass2);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 3:printf("\nenter user id: ");
          scanf("%s",abcvid3);
          printf("\nenter password: ");
          scanf("%s",abcvpass3);
  
           
          if((strcmp(abcid3, abcvid3) == 0)&&(strcmp(abcpass3, abcvpass3) == 0))
          {
           scanf("%s",abc3.name) ;
            d--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",abcid3,abcpass3);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 4: printf("\nenter user id: ");
          scanf("%s",abcvid4);
          printf("\nenter password: ");
          scanf("%s",abcvpass4);

         
          if((strcmp(abcid4, abcvid4) == 0)&&(strcmp(abcpass4, abcvpass4) == 0))
          {
            scanf("%s",abc4.name) ;
            d--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",abcid4,abcpass4);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;

          case 5: printf("\nenter user id: ");
          scanf("%s",abcvid5);
          printf("\nenter password: ");
          scanf("%s",abcvpass5);

           
         if((strcmp(abcid5, abcvid5) == 0)&&(strcmp(abcpass5, abcvpass5) == 0))
          {
            scanf("%s",abc5.name) ;
            a--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",abcid5,abcpass5);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;

        case 6:printf("\nenter user id: ");
          scanf("%s",abcvid6);
          printf("\nenter password: ");
          scanf("%s",abcvpass6);

           
          if((strcmp(abcid6, abcvid6) == 0)&&(strcmp(abcpass6, abcvpass6) == 0))
          {
            scanf("%s",abc6.name) ;
            d--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",abcid6,abcpass6);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;

        case 7: printf("\nenter user id: ");
          scanf("%s",abcvid7);
          printf("\nenter password: ");
          scanf("%s",abcvpass7);
        
         
           if((strcmp(abcid7, abcvid7) == 0)&&(strcmp(abcpass7, abcvpass7) == 0))
          {
            scanf("%s",abc7.name) ;
            d--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",abcid7,abcpass7);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 8:printf("\nenter user id: ");
          scanf("%s",abcvid8);
          printf("\nenter password: ");
          scanf("%s",abcvpass8);
         
           
          if((strcmp(abcid8, abcvid8) == 0)&&(strcmp(abcpass8, abcvpass8) == 0))
          {
            scanf("%s",abc8.name) ;
            d--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",abcid8,abcpass8);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
          break;
    
        case 9:printf("\nenter user id: ");
          scanf("%s",abcvid9);
          printf("\nenter password: ");
          scanf("%s",abcvpass9);

          
           if((strcmp(abcid9, abcvid9) == 0)&&(strcmp(abcpass9, abcvpass9) == 0))
          {
            scanf("%s",abc9.name) ;
            d--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",abcid9,abcpass9);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;

        case 10:printf("\nenter user id: ");
          scanf("%s",abcvid10);
          printf("\nenter password: ");
          scanf("%s",abcvpass10);

          
           if((strcmp(abcid10, abcvid10) == 0)&&(strcmp(abcpass10, abcvpass10) == 0))
          {
            scanf("%s",abc10.name) ;
            d--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",abcid10,abcpass10);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 11:printf("\nenter user id: ");
          scanf("%s",abcvid11);
          printf("\nenter password: ");
          scanf("%s",abcvpass11);

           
          if((strcmp(abcid11, abcvid11) == 0)&&(strcmp(abcpass11, abcvpass11) == 0))
          {
            scanf("%s",abc11.name) ;
            d--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",abcid11,abcpass11);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;

        case 12:printf("\nenter user id: ");
          scanf("%s",abcvid12);
          printf("\nenter password: ");
          scanf("%s",abcvpass12);

           
           if((strcmp(abcid12, abcvid12) == 0)&&(strcmp(abcpass12, abcvpass12) == 0))
          {
            scanf("%s",abc12.name) ;
            d--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",abcid12,abcpass12);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 13: printf("\nenter user id: ");
          scanf("%s",abcvid13);
          printf("\nenter password: ");
          scanf("%s",abcvpass13);

           
           if((strcmp(abcid13, abcvid13) == 0)&&(strcmp(abcpass13, abcvpass13) == 0))
          {
            scanf("%s",abc13.name) ;
            d--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",abcid13,abcpass13);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 14:printf("\nenter user id: ");
          scanf("%s",abcvid14);
          printf("\nenter password: ");
          scanf("%s",abcvpass14);

          
           if((strcmp(abcid14, abcvid14) == 0)&&(strcmp(abcpass14, abcvpass14) == 0))
          {
            scanf("%s",abc14.name) ;
            d--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",abcid14,abcpass14);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break;  
                 default:printf("\ninvalid choice");
            }

          }
            break;

        case 15:printf("\nenter user id: ");
          scanf("%s",abcvid15);
          printf("\nenter password: ");
          scanf("%s",abcvpass15);

          
          if((strcmp(abcid15, abcvid15) == 0)&&(strcmp(abcpass15, abcvpass15) == 0))
          {
            scanf("%s",abc15.name) ;
            d--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",abcid15,abcpass15);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 16:printf("\nenter user id: ");
          scanf("%s",abcvid16);
          printf("\nenter password: ");
          scanf("%s",abcvpass16);

           
           if((strcmp(abcid16, abcvid16) == 0)&&(strcmp(abcpass16, abcvpass16) == 0))
          {
            scanf("%s",abc16.name) ;
            d--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",abcid16,abcpass16);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break; 
                  default:printf("\ninvalid choice");
            }

          }
            break;

        case 17:printf("\nenter user id: ");
          scanf("%s",abcvid17);
          printf("\nenter password: ");
          scanf("%s",abcvpass17);

           
           if((strcmp(abcid17, abcvid17) == 0)&&(strcmp(abcpass17, abcvpass17) == 0))
          {
            scanf("%s",abc17.name) ;
            a--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",abcid17,abcpass17);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break;  
                 default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 18: printf("\nenter user id: ");
          scanf("%s",abcvid18);
          printf("\nenter password: ");
          scanf("%s",abcvpass18);
     
           
           if((strcmp(abcid18, abcvid18) == 0)&&(strcmp(abcpass18, abcvpass18) == 0))
          {
            scanf("%s",abc18.name) ;
            d--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",abcid18,abcpass18);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break;  
                 default:printf("\ninvalid choice");
            }

          }
            break;
    
        case 19:printf("\nenter user id: ");
          scanf("%s",abcvid19);
          printf("\nenter password: ");
          scanf("%s",abcvpass19);
    
          
          if((strcmp(abcid19, abcvid19) == 0)&&(strcmp(abcpass19, abcvpass19) == 0))
          {
            scanf("%s",abc19.name) ;
            d--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",abcid19,abcpass19);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                 break;  
                 default:printf("\ninvalid choice");
            }

          }
            break;

        case 20: printf("\nenter user id: ");
          scanf("%s",abcvid20);
          printf("\nenter password: ");
          scanf("%s",abcvpass20);

         
           if((strcmp(abcid20, abcvid20) == 0)&&(strcmp(abcpass20, abcvpass20) == 0))
          {
            scanf("%s",abc20.name) ;
            d--;
          }
          else
          {
            printf("\nINVALID ID AND PASS\nENTER\n1.forget id and pass:");
            scanf("%d",&mk);
            switch(mk)
            {
                case 1:printf("\nenter manager user id: ");
                scanf("%s",idv);
                printf("\nenter manager use password: ");
                scanf("%s",passv);
                if ((strcmp(id, idv) == 0)&&(strcmp(pass, passv) == 0))
                {
                    printf("\nid:%s\npass:%s",abcid20,abcpass20);
                }
                else
                {
                   printf("\nINVALID ID AND PASS"); 
                }
                break;
                default: printf("\ninvalid choice");
            }

          }
            break;
        default: printf("\ninvalid choice");
    
      }
}

void pop()
{
  printf("\n1.GOKAK\n2.GOA\n3.xyz\n4.abc\nenter your choice: ");
  scanf("%d",&se);
  switch(se)
  {
    case 1: popgokak();
        break;
    case 2: popgoa();
        break;
    case 3:  popxyz();
        break;
    case 4: popabc();
        break;
    default:printf("\ninvalid choice");
  }
}

void see()
{
  printf("\n1.GOKAK\n2.GOA\n3.xyz\n4.abc\nenter your choice: ");
  scanf("%d",&se);
  switch(se)
  {
    case 1: printgokak();
        break;
    case 2: printgoa();
        break;
    case 3:  printxyz();
        break;
    case 4: printabc();
        break;
    default:printf("\ninvalid choice");
  }
}
void XYZ()
{

  pushxyz();
}
void ABC()
{

  pushabc();
}
void GOKAK()
{

  pushgokak();
}
void GOA()
{

  pushgoa();
}
//RESURVE
void bus_resurve()
{
  int ch;
  printf("\n1.GOKAK\n2.GOA\n3.xyz\n4.abc\nenter your choice: ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1: GOKAK();
        break;
    case 2: GOA();
        break;
    case 3: XYZ();
        break;
    case 4: ABC();
        break;
    default:printf("\ninvalid choice");
  }
}
int main()
{
  int bus,ch,i;
  for(i=1;i<=20;i++)
  {
    busgoa[i]=0;
    busgokak[i]=0;
    busxyz[i]=0;
    busabc[i]=0;
    
  }
  //id();
  
  printf("\nenter manager  id: ");
  scanf("%s",id);
  printf("\nenter manager use password: ");
  scanf("%s",pass);
  printf("\n-----login compleated------\n");

  while(1)
  {
    int bsc;
    printf("\nEnter \n1.Bus Ticket Reservation\n2.see bus status\n3.Delete Bus Ticket\n4.edit user name\n5.exit\nenter your choice: ");
    scanf("%d",&bsc);
    switch(bsc)
    {
      case 1:bus_resurve();
            break;
      case 2:see();
            break;
      case 3: pop();
          break;
      case 4: pop();
          break;
      case 5: return 0;

      default :printf("\ninvalid choice");
    }
  }


}