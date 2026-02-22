package main

func main() {
	var f int32 = 90
	ffunc(f)
}

func ffunc(f int32) int {
	return ffunc(f)
}
