#include <stdio.h> 
#include <limits.h> 
#include <locale>

int main() {
    setlocale(LC_ALL, "");
    int n = 10;
    int i;
    float a = 0;
    int* array = (int*)malloc(n * sizeof(int));

    srand((unsigned int)time(NULL));
    for (i = 0; i < n; i++) {
        array[i] = rand() % 201 - 100;
        a += array[i];
        printf("%d\n", array[i]);
    }
    printf("Сума елементiв масиву: %f\n", a);
    return 0;
}