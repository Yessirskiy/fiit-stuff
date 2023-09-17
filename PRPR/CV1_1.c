#include <stdio.h>

void cv1(){ 
  printf("Hello, world!");
}

void cv2(){
  char a;
  scanf("%c", &a);
  printf("%c", a);
}

void cv3(){
  int a;
  int b;
  scanf("%d %d", &a, &b);
  printf("Sucet nacitanych cisiel je: %d\n", a+b);
  printf("Sucin nacitanych cisiel je je: %d", a*b);
}

void cv4(){
  int a;
  scanf("%d", &a);
  printf("Druha mocnina cisla %d je: %d", a, a*a);
}

void cv5(){
  int a;
  scanf("%d", &a);
  printf("Obvod kruhu s polomerom %d je: %f", a, 2*a*3.14);
}

void cv6(){
  printf("\\*/Toto je \"backslash\": \'\\\'\\*/");
}

void cv7(){
  int a;
  scanf("%d", &a);
  printf("Cena bez dane: %d\n", a);
  printf("Predajan cena s danou 20\%: %f", a*1.2);
}

void cv8(){
  float a;
  float b;
  float c;
  scanf("%f %f %f", &a, &b, &c);
  printf("Objem: %0.3f", a*b*c);
}


int main(){
  cv1();
  printf("\n");
  cv2();
  printf("\n");
  cv3();
  printf("\n");
  cv4();
  printf("\n");
  cv5();
  printf("\n");
  cv6();
  printf("\n");
  cv7();
  printf("\n");
  cv8();
  return 0;
}
