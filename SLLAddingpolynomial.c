#include <stdio.h>
#include <stdlib.h>

struct Term { int c, e; struct Term* next; };

void ins(struct Term** p, int c, int e) {
    while (*p) p = &((*p)->next);
    *p = malloc(sizeof(struct Term));
    **p = (struct Term){c, e, NULL};
}

int main() {
    struct Term *p1 = NULL, *p2 = NULL, *r = NULL;

    ins(&p1, 5, 2); ins(&p1, 4, 1);
    ins(&p2, 3, 2); ins(&p2, 2, 0);
    struct Term *a = p1, *b = p2;
    while (a || b) {
        if (a && (!b || a->e > b->e)) { ins(&r, a->c, a->e); a = a->next; }
        else if (b && (!a || b->e > a->e)) { ins(&r, b->c, b->e); b = b->next; }
        else { ins(&r, a->c + b->c, a->e); a = a->next; b = b->next; }
    }
    for (struct Term* t = r; t; t = t->next) 
        printf("%dx^%d %s", t->c, t->e, t->next ? "+ " : "\n");

    return 0;
}