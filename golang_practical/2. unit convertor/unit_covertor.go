package main
import (
	"fmt"
	"flag"
)

var flagvar int 

func main(){

	flag.IntVar(&flagvar,"kg",0,"enter the kg")
	flag.Parse()
	lbs:= float64(flagvar)*2.20462
	fmt.Println("the values in lbs is: ",lbs)
}
