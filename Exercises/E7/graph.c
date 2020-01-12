#include <stdio.h>
#include <stdlib.h>

struct node{
    char name;
    int size;
    struct node ** connections;//NULL if none
};

    struct node a, b, c, d, e, f, g, h, i, j, k, l, m, n, o;

void main(){
    a.name = 'a';
    a.connections = (struct node **)malloc(3*sizeof(struct node *));
    a.connections[0] = &a;
    a.connections[1] = &b;
    a.connections[2] = &c;
    a.size = 3;
    b.name = 'b';
    b.connections = (struct node **)malloc(2*sizeof(struct node *));
    b.connections[0] = &d;
    b.connections[1] = &f;
    b.size = 2;
    c.name = 'c';
    c.connections = (struct node **)malloc(2*sizeof(struct node *));
    c.connections[0] = &c;
    c.connections[1] = &e;
    c.size = 2;
    d.name = 'd';
    d.connections = NULL;
    d.size = 0;
    e.name = 'e';
    e.connections = (struct node **)malloc(2*sizeof(struct node *));
    e.connections[0] = &a;
    e.connections[1] = &g;
    e.size = 2;
    f.name = 'f';
    f.connections = (struct node **)malloc(3*sizeof(struct node *));
    f.connections[0] = &b;
    f.connections[1] = &h;
    f.connections[2] = &i;
    f.size = 3;
    g.name = 'g';
    g.connections = (struct node **)malloc(2*sizeof(struct node *));
    g.connections[0] = &b;
    g.connections[1] = &k;
    g.size = 2;
    h.name = 'h';
    h.connections = (struct node **)malloc(1*sizeof(struct node *));
    h.connections[0] = &i;
    h.size = 1;
    i.name = 'i';
    i.connections = (struct node **)malloc(3*sizeof(struct node *));
    i.connections[0] = &g;
    i.connections[1] = &h;
    i.connections[2] = &o;
    i.size = 3;
    j.name = 'j';
    j.connections = (struct node **)malloc(2*sizeof(struct node *));
    j.connections[0] = &l;
    j.connections[1] = &n;
    j.size = 2;
    k.name = 'k';
    k.connections = (struct node **)malloc(3*sizeof(struct node *));
    k.connections[0] = &g;
    k.connections[1] = &j;
    k.connections[2] = &o;
    k.size = 3;
    l.name = 'l';
    l.connections = (struct node **)malloc(2*sizeof(struct node *));
    l.connections[0] = &g;
    l.connections[1] = &m;
    l.size = 2;
    m.name = 'm';
    m.connections = (struct node **)malloc(2*sizeof(struct node *));
    m.connections[0] = &g;
    m.connections[1] = &l;
    m.size = 2;
    n.name = 'n';
    n.connections = (struct node **)malloc(2*sizeof(struct node *));
    n.connections[0] = &c;
    n.connections[1] = &j;
    n.size = 2;
    o.name = 'o';
    o.connections = (struct node **)malloc(2*sizeof(struct node *));
    o.connections[0] = &f;
    o.connections[1] = &k;
    o.size = 2;
    //your function here
    // example from class printf("%c %d", (*(a).connections[1]).name, (*(a).connections[1]).size);
    free(a.connections);
    free(b.connections);
    free(c.connections);
    free(d.connections);
    free(e.connections);
    free(f.connections);
    free(g.connections);
    free(h.connections);
    free(i.connections);
    free(j.connections);
    free(k.connections);
    free(l.connections);
    free(m.connections);
    free(n.connections);
    free(o.connections);
}