#ifndef NC_H
#define NC_H

unsigned long long int NC(unsigned long long int N, unsigned int b) {
    /*
     * Алгоритм:
     * 1. Разделить данное число на основание новой системы счисления: остаток от
     * деления — младший разряд нового числа;
     * 2. Если частное от деления не равно нулю, продолжать деление, как указано
     * в п.1.
     */
    unsigned long long int P, S;

    for(S = 0, P = 1; N != 0; S+=N%b*P, P*=10, N/=b);

    return S;
}

#endif // NC_H

