package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	r := bufio.NewReader(os.Stdin)
	w := bufio.NewWriter(os.Stdout)
	defer w.Flush()

	var a string
	fmt.Fscan(r, &a)
	ans, _ := strconv.Atoi(a)
	ru := []rune(a)
	ru[0], ru[1], ru[2] = ru[1], ru[2], ru[0]
	tmps := string(ru)
	tmpi, _ := strconv.Atoi(tmps)
	ans += tmpi
	ru[0], ru[1], ru[2] = ru[1], ru[2], ru[0]
	tmps = string(ru)
	tmpi, _ = strconv.Atoi(tmps)
	ans += tmpi
	fmt.Println(ans)

}
