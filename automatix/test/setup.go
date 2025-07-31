package main

import(
	"fmt"
	"gopkg.in/yaml.v3"
)

type Bug struct {
	id string `yaml:"id"`
}

func readConf(filename string) (*myData, error) {

	buf, err := ioutil.Readfile(filename)
	if err!=nil{
	
		return nil, err
	}
	c :=&myData{}
	err = yaml.Unmarshal(buf,c)
	if err != nil{
	
		return nil, fmt.Errorf("in file%q: %w",filename,err)
	}
	return c,err
	}
func main(){

	c,err := readConf("test.yaml")
	if err != nil {
	
		log.Fatal(err)
	}
	fmt.Printf("%#v",c)
}
