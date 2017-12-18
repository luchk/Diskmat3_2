#include <iostream>
#include <queue>
#include "header.h"

using namespace std;


int main()
{

    int k;
    int keych;

    cout << "part 2 queue" << endl;

    while (true)
    {
        menu();

        cin >> keych;
        Swutsh(keych);

        if(keych == 4)
            break;

    }
    return 0;
}
