#include <fstream>
#define MODX 1000000007

using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");

int main()
{
    int n;
    int b00, b01, b10, b11;
    unsigned int i;
    long long int b[2][2] = { {1,0},{0,1} }, a[2][2] = { {1,1},{1,0} };
    fin >> n;
    if (n == 0)
    {
        fout << 0;
        return 0;
    }
    for (i = (1 << 31); !(n & i); i >>= 1);
    for (; i; i >>= 1)
    {
        b00 = b[0][0] * b[0][0] + b[0][1] * b[1][0];
        b01 = b[0][0] * b[0][1] + b[0][1] * b[1][1];
        b10 = b[1][0] * b[0][0] + b[1][1] * b[1][0];
        b11 = b[1][0] * b[0][1] + b[1][1] * b[1][1];
        b00 %= MODX, b01 %= MODX, b10 %= MODX, b11 %= MODX;
        b[0][0] = b00;
        b[0][1] = b01;
        b[1][0] = b10;
        b[1][1] = b11;
        if (n & i)
        {
            b00 = b[0][0] * a[0][0] + b[0][1] * a[1][0];
            b01 = b[0][0] * a[0][1] + b[0][1] * a[1][1];
            b10 = b[1][0] * a[0][0] + b[1][1] * a[1][0];
            b11 = b[1][0] * a[0][1] + b[1][1] * a[1][1];
            b00 %= MODX, b01 %= MODX, b10 %= MODX, b11 %= MODX;
            b[0][0] = b00;
            b[0][1] = b01;
            b[1][0] = b10;
            b[1][1] = b11;
        }
    }
    fout << b[0][1] << '\n';
}