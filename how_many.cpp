#include<stdio.h>
#include<string.h>

int main() {
    FILE *fi = fopen("input.txt", "r");
    int x1, y =1;

    char str[50], c;
    char month[12] = {};
    int calendar[30][12] = {0};

    if(fi == NULL) {
        printf("Error");
    }
    //                    11:42 AM 21-Nov-18
    while(!feof(fi)) {

        fscanf(fi, "%d %c %d %s %d %s", &x1, &c, &x1, str, &x1, str);

        printf("%d %s\n", x1, str);



    }


}
