import(

	"github.com/jackpal/bencode-go"
)

type bencodeInfo struct {

	Pieces       string `bencode:"pieces"`
	PieceLenght  int    `bencode:"piece length"`
	Length       int    `bencode:"lenght"`
	Name         string `bencode:"name"`
}


type bencodeTorrent struct {

	Announce string       `bencode:"announce"`
	Info     bencodeInfo  'bencode:"info"`
}


// Open parse a torrent file

func Open(r io.Reader) (*bencodeTorrent, error){

	bto := bencodeTorrent{}
	err := bencode.Unmarshal(r, &bto)

	if err != null {
	
		return nil, err
	}
	return &bto, nil
}



