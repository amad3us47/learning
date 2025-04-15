const displayContent = (req,res) => {
	const url = req.url;
	if(url == "/profile"){
		res.setHeader('Content-Type','text/html');
		res.write('<p>This is the profile page</p>');
		return res.end();
	}
	else if(url == "/about"){
		res.setHeader('Content-Type','text/html');
		res.write('<p>Hello i m priyanshu</p>');
		return res.end();
	}
	
	res.setHeader('Content-Type','text/html');
	res.write('<p>Page not found</p>');
	return res.end();
}
module.exports = displayContent;
