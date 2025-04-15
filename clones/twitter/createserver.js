var http = require('http'); // we need the http module

var server = http.createServer((req,res) => {
	console.log("joined");
	const url = req.url;
	if(url == "/profile"){
		res.setHeader('Content-Type','text/html');
		res.write('<p>This is the profile page</p>');
		return res.end();
	}
	
	res.setHeader('Content-Type','text/html');
	res.write('<p>Burger</p>');
	return res.end();


})
server.listen(3000);
