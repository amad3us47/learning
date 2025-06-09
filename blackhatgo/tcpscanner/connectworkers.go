package main
 import (
	 "fmt"
	 "net"
	 "sync"
 )

 func workers(port chan int,wg *sync.WaitGroup){

	 for p:=range ports{
		 fmt.Println(p)
		 wg.Done()
 }
 }

 func main(){
	 port:=make(chan int,100)
	 var wg sync.WaitGroup
	 for i:=0;i<=cap(ports);i++ {
		 go workers(port,&wg)
	 }
	 for i:=0;i<=1024;i++{
		 wg.Add(1)
		 ports<-i
	 }
  wg.Wait()
  close(ports)
 }
 }
