#include <stdio.h>
#include <stdlib.h>

int side(int arg);
void print(char* arg);
float part(int arg);

static int conv;     // Переменная общая для всех функций

int main(int argc, char *argv[]){
conv = atof(argv[argc - 1]);     // Конвертируем строку в число
print(__FILE__);
}

void print(char* param){
int sqrt;
sqrt = side(conv);   
printf("%s: %f\n",param, part(sqrt));
}

float part(int param){
return (1.0/param); // Квадратная часть
}

int side(int param){
return param * param; // Квадрат
}