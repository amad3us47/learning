package main

import (
	"fmt"
	"io/ioutil"
	"log"
	"os"
	"gopkg.in/yaml.v2"
)

// Define only needed parts
type Template struct {
	Requests []Request `yaml:"requests"`
}

type Request struct {
	Path []string `yaml:"path"`
}



func  param() {
	if len(os.Args) < 2 {
		fmt.Println("Usage: go run main.go <template.yaml>")
		return
	}

	data, err := ioutil.ReadFile(os.Args[1])
	if err != nil {
		log.Fatalf("Error reading file: %v", err)
	}

	var tmpl Template
	err = yaml.Unmarshal(data, &tmpl)
	if err != nil {
		log.Fatalf("Error parsing YAML: %v", err)
	}

	for _, req := range tmpl.Requests {
		for _, path := range req.Path {
			fmt.Println(path)
		}
	}
}


func main(){
	param()
}
