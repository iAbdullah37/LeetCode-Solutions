func minPartitions(n string) int {
    var ch float64
    for _, val :=range n {
        ch = math.Max(ch, float64(val))
    }
    return int(ch) - 48
}