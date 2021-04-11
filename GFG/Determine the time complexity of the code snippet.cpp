Determine the time complexity of the code snippet

void function(int n)
{
    int p = 0;
    for (int i=0; i<=n; i++)
        for (int j=n/2; j<=n; j = j++)
            for (int k=1; k<=n; k = k * 2)
                p++;
}

Answer: O{N2}*Log{N}
