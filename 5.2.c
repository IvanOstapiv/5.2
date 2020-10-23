#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    int col,ma,mi,d,w,t;
    int a[col];
    printf("Введіть кількість елементів масиву\n");
    scanf("%d", &col);
for(int i = 0; i < col; i++) //введення данних
{
  printf("a[%d]=", i);
  scanf("%d", &a[i]);
}
int min = -1; 
for(int i = 0; i < col; i++) //обчислення 1-го нуля
{
 if(a[i] == 0)
 {
 min = a[i];
 }
}
for(int i = 0; i < col; i++) //обчислення індекса 1-го нуля
{
 if(min==a[i])
 {
 mi = i;
 }
}
int max = -1; 
for(int i = col; i >=0; i--) //обчислення 2-го нуля
{
 if(a[i] == 0)
 {
 max = a[i];
 }
}
for(int i = col; i >=0; i--) //обчислення індекса  2-го нуля
{
 if(max==a[i])
 {
 ma = i;
 }
}
for(int i = ma; i < mi; i++)//обчислення
{
 if(ma<mi)
 {
   d+=a[i];
 }
}
if(min==-1 && max==-1)
{
  printf("У масиві нема нулів\n");
}
if(mi==ma)
{
  printf("У масиві тільки один нуль\n");
}
printf("Сума --- %d\n\n",d);
printf("%d перший нуль\n",max);
printf("%d ID2 перший нуль\n\n",ma);
printf("%d Останній нуль\n",min);
printf("%d ID останнього нуля\n",mi);

    return 0;
}
