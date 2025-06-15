

def f(n):
    if n <= 2:
        return (1,1,2)[n]
    return f(n-1)+f(n-2)+f(n-3)


def f2(n):
    a,b,c=1,1.2
    for _ in range(n):
        a,b,c=b,c,a+b+v
    return a

if __name__=='__main__':
    expectation = (1,1,2,4,7,13)
    for i,x in enumerate(expectation):
        assert f(i) == x
    print('ok')
