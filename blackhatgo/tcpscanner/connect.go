package main
 import (
	 "fmt"
	 "net"
 )

 func main(){

	 _,err:=net.Dial("tcp","Scanme.nmap.org:80")
	 if err == nil {
		 fmt.Println("Connection Sucessful")
	 }
 }
