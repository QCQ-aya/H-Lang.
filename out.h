req bas.m;

using types;
using ret case;

int add(int a; int b) (
    out:v :: a + b;
    ret 0;
);

void ss() (
    int res :: add.out.v;
    bas.print(v"{res}");
)