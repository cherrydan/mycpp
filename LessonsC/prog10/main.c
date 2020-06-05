#include <stdio.h>
#include <stdlib.h>

struct sPoint
{
    int x, y;
    float z;
};

typedef struct sPoint Point;

void showPoint(Point p)
{
    printf("p.x = %d\t p.y = %d\t p.z = %.8f\n", p.x, p.y, p.z);
}

void setPoint(Point *pPtr, int xPos, int yPos, float zPos)
{
    if(pPtr != NULL)
        {
            pPtr->x = xPos; //Оператор -> обращение к полям структуры, переданной по указателю
            pPtr->y = yPos;
            pPtr->z = zPos;
        }
}

int main()
{
    Point p;
    p.x = 3;
    p.y = 5;
    Point *pPtr = NULL;
    pPtr = &p;
    setPoint(pPtr, 11, 22, 3.1415926);
    showPoint(*pPtr);

    return 0;
}
