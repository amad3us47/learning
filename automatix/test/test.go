package main

import (
	"fmt"
	"io/ioutil"
	"log"
	"os"

	"gopkg.in/yaml.v2"
)

// Define struct based on your YAML structure
type Template struct {
	ID     string `yaml:"id"`
	Info   Info   `yaml:"info"`
	Requests []Request `yaml:"requests"`
}

type Info struct {
	Name      string   `yaml:"name"`
	Author    string   `yaml:"author"`
	Severity  string   `yaml:"severity"`
	Reference string   `yaml:"reference"`
	Tags      []string `yaml:"tags"`
}

type Request struct {
	Method   string   `yaml:"method"`
	Path     []string `yaml:"path"`
	MatchersCondition string `yaml:"matchers-condition"`
	Matchers []Matcher `yaml:"matchers"`
}

type Matcher struct {
	Type     string   `yaml:"type"`
	Words    []string `yaml:"words"`
	Part     string   `yaml:"part"`
	Condition string  `yaml:"condition"`
}

func main() {
	if len(os.Args) < 2 {
		fmt.Println("Usage: go run main.go <template.yaml>")
		return
	}

	filename := os.Args[1]

	data, err := ioutil.ReadFile(filename)
	if err != nil {
		log.Fatalf("Failed to read file: %v", err)
	}

	var tmpl Template
	err = yaml.Unmarshal(data, &tmpl)
	if err != nil {
		log.Fatalf("Failed to parse YAML: %v", err)
	}

	fmt.Printf("Parsed YAML:\n%+v\n", tmpl)
}

