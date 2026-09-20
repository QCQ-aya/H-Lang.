req bas.m;

using types;
using ret case;

void print(String msg) {
    bas.print(s"{msg}");
    ret 0;
}

void main() {
    call(print("A Message"));
    ret 0;
}