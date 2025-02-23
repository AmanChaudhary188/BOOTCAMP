#include<stdio.h>

int main(){
    int side1,side2,side3;

    printf("Enter the sides: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 > 0 && side2 > 0 && side3 > 0 && (side1 + side2 + side3 == 180)) {
        printf("Triangle is valid\n");
    } else {
        printf("Triangle is not valid\n");
    }
    return 0;
}