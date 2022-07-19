void solve() {
    vector<int> ans;
    vector<int> neko({ 4,8,15,16,23,42 });
    for (int q = 2; q < 6; ++q) {
        cout << "? 1 " << q << endl;
        int b;
        cin >> b;
        ans.push_back(b);
    }
    do {
        int ok = 1;
        for (int q = 1; q < 5; ++q) {
            if (neko[q] * neko[0] != ans[q-1]) {
                ok = 0;
            }
        }
        if (ok == 1) {
            cout << "!";
            REP(i, 6) {
                cout << " " << neko[i];
            }
            cout << endl;
            return;
        }
    } while (next_permutation(ALL(neko)));
}