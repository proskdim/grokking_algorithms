package binary_search

binsearch :: proc(nums: []int, dest: int) -> int {
	start := 0
	end := len(nums) - 1

	for start <= end {
		pos := (start + end) / 2
		num := nums[pos]

		if num == dest {
			return pos
		} else if (num > dest) {
			end = pos - 1
		} else {
			start = pos + 1
		}
	}
	
	return -1
}
