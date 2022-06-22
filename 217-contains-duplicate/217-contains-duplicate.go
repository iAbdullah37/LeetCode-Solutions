func containsDuplicate(nums []int) bool {
    mp := make(map[int]bool)
    for _, val := range nums {
        if mp[val] == true {
            return true
        }
        mp[val] = true
    }
    return false
}