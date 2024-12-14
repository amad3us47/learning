from Wappalyzer import Wappalyzer, WebPage
wappalyzer  = Wappalyzer.latest()
webpage = WebPage.new_from_url('https://x2space.net')
wappalyzer.analyze(webpage)
