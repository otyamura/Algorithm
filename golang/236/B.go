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
	h := make([]int, 4*n)
	m := make(map[int]int)
	for i := 0; i < 4*n-1; i++ {
		var tmp int
		fmt.Fscan(in, &tmp)
		h[i] = tmp
		m[tmp]++
	}

	for k, v := range m {
		if v != 4 {
			fmt.Fprintln(out, k)
			return
		}
	}

}
