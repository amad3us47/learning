class MyRange:

    def __init__(self,end):
        self.i=0
        self.end=end
    
    def _iter__(self):
        return self

    def __next__(self):
        ret=self.n
        self.n+=1
        return ret


for x in MyRange(10):
    print(x)
