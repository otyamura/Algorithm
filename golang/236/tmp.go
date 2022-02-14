package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	in := bufio.NewReader(os.Stdin)
	out := bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var n int
	fmt.Fscan(in, &n)
	h := make([]int, n)
	for i := 0; i < n; i++ {
		var tmp int
		fmt.Fscan(in, &tmp)
		h[i] = tmp
	}

	fmt.Fprintln(out, h)
}
