// POINTERS...

req bas.m;

using types;
using ret case;
using "*"; // IS OPTIONAL

int x :: 20;
pointer p;

p->x;

define *p :: [p]; // IS OPTIONAL

void main() {
    bas.print(p"{*p}");
    ret 0;
}