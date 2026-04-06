package main

import (

	"fmt"
	"github.com/gocolly/colly"
)

func main() {

	fmt.Println("hello world")
	c := colly.NewCollector(
			colly.AllowedDomains("allmanga.to"),
	)
	c.Visit("https://allmanga.to/search-anime?tr=sub&cty=ALL&query=your%20name")
}
