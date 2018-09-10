#include <iostream>

/*
 * Пирожок в столовой стоит A рублей и B копеек. Определите, сколько рублей и копеек нужно заплатить за N пирожков.
 *
 */

using namespace std;

int main()
{

    int r;
    int k;
    int x;

    cin >> r >> k >> x;

    int stoim_v_kop = (r * 100) * x + (k * x);

    cout << stoim_v_kop / 100 << " " << stoim_v_kop % 100 << endl;




    return 0;
}

