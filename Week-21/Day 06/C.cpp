ll last_val = a[n - 1];
vector<ll> track;
int i = 0, j = n - 1, k = 0;
while (true)
{
    int y = pow(2, k);
    if (x < y)
        break;
    track.push_back(y);
    k++;
}
reverse(track.begin(), track.end());

while (i < j and k != track.size())
{
    if (a[i] != x and a[j] != x)
    {
        a[i] += track[k];
        a[j] -= track[k];
        k++;
    }
    if (a[i] == x)
        i++;
    if (a[j] == x)
        j++;
    // if(k==track.size())
}
for (auto i : a)
    cout << i << " ";
}