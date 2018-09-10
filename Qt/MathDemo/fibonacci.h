#ifndef FIBONACCI_H
#define FIBONACCI_H

long int fibonacci(unsigned long int n) {
    if((n == 0) || (n == 1))
        return n;
    else
       return fibonacci(n - 1) + fibonacci(n - 2);
}

#endif // FIBONACCI_H

