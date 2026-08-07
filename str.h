req bas.m;

using types;
using ret case;

void bark() (
    bas.print("au au!");
);

String obey(String command) (
    if:sit:command == "sit":(
        out:com :: "seated.";
        bas.print(val"obey.sit.out.com");
    );

    elsif:shk:command == "shake hands":(
        out:com :: "gave its paw.";
        bas.print(val"obey.shk.out.com");
    );

    else:unk:(
        out:com :: "unknown command";
        bas.print(val"obey.unk.out.com");
    )
);

struct dog::(
    bark(),
    obey();
);

void main() (

);