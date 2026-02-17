package main

import "fmt"

func main() {
	s := make([]int, 0, 1)

	for i := 0; i < i+1; i++ {
		oldCap := cap(s)
		s = append(s, i)
		newCap := cap(s)

		if oldCap != newCap {
			fmt.Printf("Добавили %d: cap изменился %d → %d (рост в %.2f раз)\n",
				i, oldCap, newCap, float64(newCap)/float64(oldCap))
		}
	}
}