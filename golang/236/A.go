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

	var s string
	fmt.Fscan(in, &s)
	var a, b int
	fmt.Fscan(in, &a)
	fmt.Fscan(in, &b)
	a--
	b--

	ru := []rune(s)
	ru[a], ru[b] = ru[b], ru[a]
	tmps := string(ru)

	fmt.Fprintln(out, tmps)
}
