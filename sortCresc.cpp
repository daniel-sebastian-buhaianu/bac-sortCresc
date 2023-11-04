#include <fstream>
#define NMAX 100
using namespace std;
ifstream fin("numere.in");
ofstream fout("numere.out");
int f[NMAX];
int main()
{
    int x, i;
    while (fin >> x) f[x]++;
    fin.close();
    for (i = 0; i < NMAX; i++)
        while (f[i])
        {
            fout << i << ' ';
            f[i]--;
        }
    fout << '\n';
    fout.close();
    return 0;
}
