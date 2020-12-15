#Serie de Fibonacci

def fib(n):
    a =0
    b=0
    result = []
    while a<n:
        result.append(a)
        a = b 
        b = a+b
    return result


res2=fib(10)
print(res2)

# res3=fib(3,5)
# print(res3)