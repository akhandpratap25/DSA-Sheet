#include <stdio.h>
#include <stdlib.h>

struct Term {
    int coeff, exp;
    struct Term* next;
};
void addTerm(struct Term** poly, int c, int e) {
    while (*poly) poly = &((*poly)->next);
    *poly = malloc(sizeof(struct Term));
    (*poly)->coeff = c;
    (*poly)->exp = e;
    (*poly)->next = NULL;
}
void display(struct Term* poly) {
    while (poly) {
        printf("%dx^%d %s", poly->coeff, poly->exp, poly->next ? "+ " : "\n");
        poly = poly->next;
    }
}

int main() {
    struct Term* poly = NULL;

    addTerm(&poly, 5, 3);
    addTerm(&poly, 4, 2);
    addTerm(&poly, 2, 0);

    display(poly);
    return 0;
}
