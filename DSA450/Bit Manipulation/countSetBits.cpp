int setBits(int N)
{

    unsigned int n = N;
    int count = 0;

    while (n > 0)
    {
        if (n & 1)
            count++;
        n = n >> 1;
    }

    return count;
}