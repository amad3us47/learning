package main

import(
	"fmt"
	"log"
	"net/http"
	"strconv"
)

const (
	Red = "\033[31m"
	Green= "\033[32m"
	Reset = "\033[0m"
)

func StatusCode(URL string){

	resp,err := http.Get(URL)
	if err != nil{
	
		log.Fatal(err)
	}
	if resp.StatusCode == 200{

		fmt.Println("Response:",Green+strconv.Itoa(resp.StatusCode)+Reset)
	
	}else{ 
		fmt.Println("Response:",Red+strconv.Itoa(resp.StatusCode)+Reset)
	}


}

func main(){
}
