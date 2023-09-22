func isSubsequence(s string, t string) bool {
    id := 0;
    for i := 0; i < len(t); i++ {
        if (id < len(s) && s[id] == t[i]) {
            id++
        }
    }
    return id == len(s)
}