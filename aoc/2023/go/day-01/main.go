package main

import (
	"bufio"
	"fmt"
	"log"
	"os"
	"unicode"
)

func main() {
	f, err := os.Open("input")
	if err != nil {
		log.Fatal(err)
	}
	defer f.Close()

	sc := bufio.NewScanner(f)
	sum := 0

	for sc.Scan() {
		first, last := 0, 0

		line := []rune(sc.Text())

		// find first
		for i := range line {
			c := line[i]
			if unicode.IsDigit(c) {
				first = int(c)
				break
			}
		}

		// find last
		for i := range line {
			c := line[len(line)-1-i]
			if unicode.IsDigit(c) {
				last = int(c)
				break
			}
		}
		sum += first*10 + last
	}
	fmt.Println(sum)
}
