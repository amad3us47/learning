package main

import (

	"flag"
	"log"
	"time"
	"github.com/cenkalti/rain/v2/torrent"
)

func main(){

	magnetLin := flag.String("l","","Magnet link to download")
	flag.parse()
}

if *magnetLink == "" {

	log.Fatal("Magnet link -l")
}

ses,err := torrent.NewSession(torrent.DefaultConfig)

if err != nil {

	log.Fatal("Failed",err)
}
defer ses.Close()

tor, err := ses.AddURI(*magnetLink, nil)
if err != nil {

	log.Fatal("Failed to add torrent:",err)
}

log.Printf("OK",*magnetLink)

for range time.Tick(time.Second) {

	s := tor.Stats()
	log.Printf(
}
