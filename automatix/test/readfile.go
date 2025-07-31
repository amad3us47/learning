package main

import(
	"fmt"
	"os"
	"time"
	"bufio"
)

func ReadFile(filename string){

	data, err := os.Open(filename)
	if err != nil {
	
		fmt.Println("Error reading file:",err)
		return 
	}
	scanner := bufio.NewScanner(data)
	for scanner.Scan(){
		time.Sleep(2 * time.Second)

		fmt.Println(scanner.Text())
	}
}

func main(){
	ReadFile("all.txt")
}
