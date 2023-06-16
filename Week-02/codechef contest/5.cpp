vector<ll> A;
    for (ll i = 0, x; i < n; i++)
    {
        cin >> x;
        if ((x & k) == k)
            A.push_back(x);
    }
    if (!A.size())
    {
        no;
        return;
    }
    ll ans = A[0];
    for (int j = 1; j < (int)A.size(); j++)
    {
        ans = A[j] & ans;
    }
    if (ans == k)
        yes;
    else
        no;
