#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    string ordem = "CEUP";
    map<char, vector<int>> histogram;

    int valor = 0;

    for (int i = 0; i < s.size(); i += 3)
    {
        int valor = stoi(s.substr(i, 2));
        histogram[s[i + 2]].emplace_back(valor);
    }

    for (auto c : ordem)
    {
        sort(histogram[c].begin(), histogram[c].end());
        auto it = unique(histogram[c].begin(), histogram[c].end());
        bool duplicadas = it != histogram[c].end();
        cout << (duplicadas ? string("erro") : to_string(13 - (it - histogram[c].begin()))) << '\n';
    }

    return 0;
}