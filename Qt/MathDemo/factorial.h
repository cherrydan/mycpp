#ifndef FACTORIAL_H
#define FACTORIAL_H

long int factorial(int n) {
    if(n <= 1)
        return n;
        else
        return n*factorial(n - 1);

}

#endif // FACTORIAL_H

