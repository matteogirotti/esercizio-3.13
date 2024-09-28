#include <iostream>

int main() {
    int g1;
    int g2;
    int m1;
    int m2;
    int a1;
    int a2;
    printf("inserisci la prima data in giorni mesi anni : ");
    scanf("%d %d %d", &g1, &m1, &a1);
    printf(" inserisci la seconda data in giorni mesi anni : ");
    scanf("%d %d %d", &g2, &m2, &a2);
    if(a1>a2) {
        printf("%d %d %d", g1, m1, a1);
    } else if(a2>a1) {
        printf("%d %d %d", g2, m2, a2);
    }else {
       if(g1>g2) {
           printf("%d %d %d", g1, m1, a1);
       } else {
           printf("%d %d %d", g2, m2, a2);
       }
    }

}
