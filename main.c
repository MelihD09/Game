#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{

int oyunmenu;

printf("*********Oyun Menusu*********\n\n");
printf("---Oyun seciniz---\n\n");
printf("[1]Sniper\n[2]Guess\n[3]Hakkinda ve Kurallar\n\n");

scanf("%d",&oyunmenu);

switch(oyunmenu)
{
    case 1: oyun1();
    break;
    case 2: oyun2();
    break;
    case 3: hakkur();
    break;
    default :printf("Gecersiz secim !");
}

return 0;
}

void menu()
{
   int oyunmenu;

printf("*********Oyun Menusu*********\n\n");
printf("---Oyun seciniz---\n\n");
printf("[1]Sniper\n[2]Guess\n[3]Hakkinda ve Kurallar\n\n");
scanf("%d",&oyunmenu);

switch(oyunmenu)
{
    case 1: oyun1();
    break;
    case 2: oyun2();
    break;
    case 3: hakkur();
    break;
    default :printf("Gecersiz secim !");
}


return 0;
}

void oyun1()
{

int dusman,i=0,toplampuan=0,basarili=0,basarisiz=0,yaribasarili=0;
float atis,toplamhata=0;

int j;

srand(time(NULL));

char cdizi[40];

    printf("Bir kullanici adinizi giriniz: ");
    scanf("%s",&cdizi);

printf("Oyun Basliyor !\n");

for(j=1;j<=10;)
{

dusman=rand() %10;

printf("\n%d.Dusman belirdi\tHangi konuma ates edeceksiniz ?\n",j);
scanf("%f",&atis);

if(dusman-atis==0 )
{
printf("Basarili Atis gerceklestirdiniz 10 puan kazandiniz...\n");
}
else if(dusman-atis <= 0.5 && dusman-atis >= -0.5 && dusman-atis != 0)
{

   printf("Cok yaklastiniz 5 puan kazandiniz...\n");
}
else
{
    printf("Basarisiz atis gerceklestirdiniz...\n");
}

if(dusman-atis>0)
{
    printf("%d.atis hata oraniz: %.3f\n",j,dusman-atis);
}
else if(dusman-atis<0)
{
    printf("%d.atis hata oraniz: %.3f\n",j,(dusman-atis)*-1);
}
else if (dusman-atis==0)
{
    printf("%d.atis hata oraniz: %.3f\n",j,dusman-atis);
}

if(dusman-atis==0 )
{
toplampuan=toplampuan+10;
}
else if(dusman-atis <= 0.5 && dusman-atis >= -0.5 && dusman-atis != 0)
{
toplampuan=toplampuan+5;
}

if(dusman-atis<0)
{
toplamhata = toplamhata +((dusman-atis)*-1);
}
else if(dusman-atis>=0)
{
   toplamhata=toplamhata+(dusman-atis);
}

if(dusman-atis==0 )
{
basarili=basarili+1;
}
else if(dusman-atis <= 0.5 && dusman-atis >= -0.5 && dusman-atis != 0)
{
yaribasarili=yaribasarili+1;
}
else
{
    basarisiz=basarisiz+1;
}

j++;}

if(toplamhata>=0)
{
    printf("10 Atistaki toplam hataniz: %.3f\n",toplamhata);
}
else if(toplamhata<0)
{
    printf("10 Atistaki toplam hataniz: %.3f\n",(toplamhata)*-1);
}

printf("10 Atistaki toplam puaniniz: %d\n",toplampuan);

printf("10 Atistaki basarili atis sayiniz: %d\n",basarili);
printf("10 Atistaki yari basarili atis sayiniz: %d\n",yaribasarili);
printf("10 Atistaki basarisiz atis sayiniz: %d\n",basarisiz);

printf("Oyun Bitti!\n");

printf("\n**********Skor Tablosu**********\n\n");

if(j>30)
{
    printf("%s ==> %d\nMelih ==> 30\nAyse ==> 25\nErkan ==> 20\nEla ==> 15\nEren ==> 10\nMert ==> 5\n",cdizi,toplampuan);
}
else if(j<30 && j>=25)
{
    printf("Melih ==> 30\n%s ==> %d\nAyse ==> 25\nErkan ==> 20\nEla ==> 15\nEren ==> 10\nMert ==> 5\n",cdizi,toplampuan);
}
else if(j<25 && j>=20)
{
    printf("Melih ==> 30\nAyse ==> 25\n%s ==> %d\nErkan ==> 20\nEla ==> 15\nEren ==> 10\nMert ==> 5\n",cdizi,toplampuan);
}
else if(j<20 && j>=15)
{
    printf("Melih ==> 30\nAyse ==> 25\nErkan ==> 20\n%s ==> %d\nEla ==> 15\nEren ==> 10\nMert ==> 5\n",cdizi,toplampuan);
}
else if(j<15 && j>=10)
{
    printf("Melih ==> 30\nAyse ==> 25\nErkan ==> 20\nEla ==> 15\n%s ==> %d\nEren ==> 10\nMert ==> 5\n",cdizi,toplampuan);
}
else if(j<10 && j>=5)
{
    printf("Melih ==> 30\nAyse ==> 25\nErkan ==> 20\nEla ==> 15\nEren ==> 10\n%s ==> %d\nMert ==> 5\n",cdizi,toplampuan);
}
else if(j<5)
{
    printf("Melih ==> 30\nAyse ==> 25\nErkan ==> 20\nEla ==> 15\nEren ==> 10\nMert ==> 5\n%s ==> %d\n",cdizi,toplampuan);
}

int m;
char c;
printf("Ana Menuye donmek icin 'm' karakterini giriniz\n");
c=getchar();

while(c!='m')
{
    c=getchar();
    if(c=='m')
    {
        menu();
    }
}

 return 0;
}


void oyun2()
{


    int sayi,birler,onlar,yuzler,ipucu1,ipucu10,ipucu100;

   int k=1,j=110,i,dizi[3];
   srand(time(NULL));

   for(i=0;i<3;i++)
   {
       do{
       do
   {
       dizi[i]=rand() %10;
       }while(dizi[0]==dizi[1] || dizi[1]==dizi[2] || dizi[0]==dizi[2]);

    }while(dizi[0]==0);
   }

   char cdizi[40];

    printf("Bir kullanici adinizi giriniz: ");
    scanf("%s",&cdizi);

    printf("\n\n3 basamakli bir sayi giriniz \n");

do{

printf("\n%d. Tahmininizi giriniz: ",k);
  scanf("%d",&sayi);
j-=10;
k++;

  yuzler=sayi/100;
  onlar=(sayi/10)%10;
  birler=sayi%10;

if(dizi[0]==yuzler)
{
    printf("\n1");
    ipucu100=1;
}

 else if(dizi[2]==yuzler || dizi[1]==yuzler)
{
    printf("\n9");
    ipucu100=9;
}
  else if(dizi[0]!=yuzler && dizi[1]!=yuzler && dizi[2]!=yuzler)
{
    printf("\n0");
    ipucu100=0;
}

if(dizi[1]==onlar)
{
    printf("1");
    ipucu10=1;
}

else if(dizi[2]==onlar || dizi[0]==onlar)
{
    printf("9");
    ipucu10=9;

}

else if(dizi[0]!=onlar && dizi[1]!=onlar && dizi[2]!=onlar)
{
    printf("0");
    ipucu10=0;
}

if(dizi[2]==birler)
{
    printf("1");
    ipucu1=1;
}

else if( dizi[0]==birler || dizi[1]==birler)
{
   printf("9");
    ipucu1=9;

}
else if(dizi[0]!=birler && dizi[1]!=birler && dizi[2]!=birler)
{
    printf("0");
    ipucu1=0;
}

}while(ipucu100==0 || ipucu100==9 || ipucu10==0 || ipucu10==9 || ipucu1==0 || ipucu1==9 );

printf("\n\n%d. Tahmininizde bildiniz.",k-1);
printf("\nPuaniniz:%d\n",j);

printf("Oyun Bitti!\n");


printf("\n**********Skor Tablosu**********\n\n");

if(j<90 && j>=80)
{
    printf("Melih ==> 90\n%s ==> %d\nAyse ==> 80\nErkan ==> 70\nEla ==> 60\nEren ==> 50\nMert ==> 40\n",cdizi,j);
}
else if(j<80 && j>=70)
{
    printf("Melih ==> 90\nAyse ==> 80\n%s ==> %d\nErkan ==> 70\nEla ==> 60\nEren ==> 50\nMert ==> 40\n",cdizi,j);
}
else if(j<70 && j>=60)
{
    printf("Melih ==> 90\nAyse ==> 80\nErkan ==> 70\n%s ==> %d\nEla ==> 60\nEren ==> 50\nMert ==> 40\n",cdizi,j);
}
else if(j<60 && j>=50)
{
    printf("Melih ==> 90\n%d\nAyse ==> 80\nErkan ==> 70\nEla ==> 60\n%s ==> %d\nEren ==> 50\nMert ==> 40\n",cdizi,j);
}
else if(j<50 && j>=40)
{
    printf("Melih ==> 90\n%d\nAyse ==> 80\nErkan ==> 70\nEla ==> 60\n\nEren ==> 50\n%s ==> %d Mert ==> 40\n",cdizi,j);
}
else
{
    printf("Melih ==> 90\n%d\nAyse ==> 80\nErkan ==> 70\nEla ==> 60\n \nEren ==> 50\nMert ==> 40\n%s ==> %d",cdizi,j);
}






int m;
char c;
printf("Ana Menuye donmek icin 'm' karakterini giriniz\n");
c=getchar();

while(c!='m')
{
    c=getchar();
    if(c=='m')
    {
        menu();
    }
}

}

void hakkur()
{
    printf("\n-Sniper oyunu nasil oynanir ?-\n\n");
    printf("[1,10] Araliginda konumlar secilir ve bu konumlarda cikan dusman vurulmaya calisilir.\n\n");
    printf("Basarili vurus = 10 puan\nYari basarili vurus (0.5 fark olan vuruslar) = 5 puan\nBasarisiz vuruslar = 0 puan\n");
printf("\n*******************************************************************************************************\n\n");
    printf("-Guess oyunu nasil oynanir ?-\n\n");
    printf("3 basamakli bir sayi girilmesi istenir ve rastgele cikan sayi bulunmaya calisilir.\n\n");
    printf("1=Rakam ve yeri dogru\n9=Rakam dogru fakat yeri yanlis\n0=Rakam yanlis\n\n");
printf("--------------------------------------------------------------------\n");
    printf("Bu program | Melih DEMIRCAN | tarafindan yapilmistir.\n");
printf("--------------------------------------------------------------------\n\n");

int m;
char c;
printf("Ana Menuye donmek icin 'm' karakterini giriniz\n");
c=getchar();

while(c!='m')
{
    c=getchar();
    if(c=='m')
    {
        menu();
    }
}


}
