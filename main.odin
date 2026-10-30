package main

import "core:fmt"
import bs "./binary_search"


main :: proc() {
	nums := []int{1, 3, 5, 7, 9};
	
	r := bs.binsearch(nums, 3)
	
	fmt.println(r)
}