#include <stdio.h>

#define MAX_TERMS 1000

typedef struct {
    int start;
    int finish;
} Polynomial;

Polynomial polynomials[MAX_TERMS];
int avail = 0;

void compactPolynomials() {
    int newAvail = 0;

    for (int i = 0; i < avail; i++) {
        if (polynomials[i].finish != 0) {
            if (i != newAvail) {
                polynomials[newAvail] = polynomials[i];
            }
            newAvail++;
        }
    }

    avail = newAvail;
}

void printPolynomials() {
    for (int i = 0; i < avail; i++) {
        printf("Polynomial %d: start=%d, finish=%d\n", i, polynomials[i].start, polynomials[i].finish);
    }
}

int main() {
    polynomials[0].start = 1; polynomials[0].finish = 5;
    polynomials[1].start = 2; polynomials[1].finish = 0;
    polynomials[2].start = 3; polynomials[2].finish = 6;

    avail = 3;

    printf("Before compaction:\n");
    printPolynomials();

    compactPolynomials();

    printf("\nAfter compaction:\n");
    printPolynomials();

    return 0;
}
