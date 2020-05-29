#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>
int main()
{
    //так вот посчиталось неправильно
    int x = -100;
    unsigned int y = 10U;
    long long int z = x + y;
    printf("Неправильно! z = %lld\n", z);

    //так вот можно помочь автоматическому приведению типов, и привести беззнаковое к знаковому
       //так вот посчиталось неправильно
    int x_ = -100;
    unsigned int y_ = 10U;
    long long int z_ = x_ + (signed)y_;
    printf("Привести вручную беззнаковое к знаковому и, вуаля! z_ = %lld\n", z_);

    //а вот так посчиталось правильно
    int8_t X = -100;
    uint8_t Y = 10U;
    int64_t Z = X + Y;
    printf("Правильно (использовать inttypes) Z = %" PRId64 "\n", Z);

    //игрульки с char, он по умолчанию знаковый, поэтому можно ничего не делать
    char c = -81;
    int d = c * 10;
    printf("(Знаковый char, знаковый int, всё чотко по умолчанию)\nd = %d\n", d);

    return 0;
}
