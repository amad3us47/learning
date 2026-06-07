package main

import (
	"fmt"
	"log"

	"github.com/anacrolix/torrent"
)

func main() {
	// 1. Provide your magnet link
	magnetURI := "magnet:?xt=urn:btih:2d8e613f81559e83cf33887c34f31c26f047e12e&dn=Ubuntu+24.04+Desktop"

	// 2. Configure and start a local torrent client engine
	// Passing nil uses default settings (allocates a random port, starts DHT background routines)
	client, err := torrent.NewClient(nil)
	if err != nil {
		log.Fatalf("Error creating torrent client: %v", err)
	}
	defer client.Close() // Cleanly disconnect from peers when done

	// 3. Register the magnet link with the engine
	t, err := client.AddMagnet(magnetURI)
	if err != nil {
		log.Fatalf("Error adding magnet link: %v", err)
	}

	fmt.Println("Searching the P2P network for torrent metadata... (This might take a moment)")

	// 4. BLOCKING STEP: Wait until the client connects to peers 
	// and successfully downloads the 'info' metadata section.
	<-t.GotInfo()

	fmt.Println("\n--- Metadata successfully retrieved! ---")
	fmt.Printf("Torrent Name: %s\n", t.Name())
	fmt.Printf("Total Size:   %.2f GB\n\n", float64(t.Length())/(1024*1024*1024))

	// 5. Read and list the file paths and sizes contained inside the magnet link
	fmt.Println("Files inside this torrent:")
	for _, file := range t.Files() {
		fmt.Printf(" - %s (%d bytes)\n", file.DisplayPath(), file.Length())
	}
}
