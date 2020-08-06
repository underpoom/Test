#include <bits/stdc++.h>
using namespace std;
int _hash(string k)
{
    int weight_hash = 0;
    for (int i = 0; i < k.size(); i++)
        weight_hash += pow(26, k.size() - i - 1) * (k[i] - 'a' + 1);
    return weight_hash;
}
string re_hash(int n)
{
    stack<char> c;
    do
    {
        if (n % 26 == 0)
        {
            c.push('z');
            n -= 1;
        }
        else
            c.push(char((n % 26) + 'a' - 1));
        n /= 26;
    } while (n > 0);
    while (!c.empty())
    {
        cout << c.top();
        c.pop();
    }
}
int main()
{
    cout << _hash("zzzzz");
}
