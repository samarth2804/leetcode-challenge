// Number of Wonderful Substrings (Leetcode 1915)
// Problem Link: https://leetcode.com/problems/number-of-wonderful-substrings/

long long wonderfulSubstrings(string word) {
    long cnt[1024] = { 1 }, mask = 0, res = 0;
    for (auto ch : word) {
        mask ^= 1 << (ch - 'a');
        res += cnt[mask];
        for (auto n = 0; n < 10; ++n)
            res += cnt[mask ^ (1 << n)];
        ++cnt[mask];
    }
    return res;
}