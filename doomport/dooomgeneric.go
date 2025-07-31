package doomgeneric

import(

	"os"

)

var {

	MyArgc int // replacing MyArgc in argc in c
	MyArgv []string

	DGScreenBuffer []uint32
}

const(
	DOOMGENERIC_REX = 320   // screen buffer resolution
	DOOMGENERIC_RESY = 200
)



func main(){

	
	while(1)
	{
		doomgeneric_Tick()
		DG_ScreenBuffer = 
	}


}
