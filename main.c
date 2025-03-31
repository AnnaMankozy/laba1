#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 6
int main(){
 system("chcp 65001");
 int array[N], a;
 puts("Впишіть 6 цифр: ");
 for (a = 0; a < N ; a+=1) {
 scanf("%d", &array[a]);
 }

 int sum = 0;
 int count = 0;
 int mult = 1;
 for (a = 0; a < N ; a+=1 ) {
 if ( array[a] % 2 == 0 ){
 sum+=array[a];
 count+=1;
 }
 else {
 mult*=array[a];
 }
 }

 int max = array[0];
 int num = 0;
 for (a = 0; a < N ; a+=1){
 if(array[a]>max){
 max = array[a];
 num = a;
 }
 }
 printf("в) MAX значення: %d\nЙого номер: %d\n", max, num+1);
 float averageG;
 if (mult != 1) {
 printf("б) Добуток непарних чисел: %.1d\n", mult);
 averageG = pow(mult, 1.0/count);
 printf("Середнє геометричне значення непарних чисел: %.2f\n", averageG);
 }
 else{
 puts( "ВСІ ЧИСЛА ПАРНІ, спробуйте знову! Неможливо виконати розв'язок!");
 }
 printf("a) Сума парних чисел: %d\n", sum);
 float averageA;
 if(count){
 averageA = (float)sum / count;
 }
 printf("Середнє арифметичне значення парних чисел: %.1f\n", averageA);

 return 0;
}