#include <bits/stdc++.h>

int main()
{
    int t, n, k, x, y;

    std::cin>> t;
    for(int i = 0; i < t; i++)
    {
        std::cin >> n >> k >> x >> y;
        if(x == y)
        {
            std::cout << std::endl << "YES";
            continue;
        }
        if(k == 0)
        {
            std::cout << std::endl << "NO";
            continue;
        }
        int virus_at = (x+k)%n;
        while(virus_at != x)
        {
            if(virus_at == y)
            {
                std::cout << std::endl << "YES";
                break;
            }
            virus_at = (virus_at + k)%n;
        }
        if(virus_at == x)
            std::cout << std::endl << "NO";
    }
}
