package main

import "automatix/src"    // it takes all the files and function calls
import "automatix/test"

func main(){

	src.StatusCode("https://amazon.com")     // "src." is needed before the function call
	test.ReadoFile()
}
