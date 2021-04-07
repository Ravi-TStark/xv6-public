#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{

    int x = 0;
    for (int i = 0; i < 9999999999; i++)
    {
        x = x + i;
    }

    exit();
}