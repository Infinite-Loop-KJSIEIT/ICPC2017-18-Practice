# Author: Amey.
def gcd(a, b):
    if(a > b):
        a, b = b, a;
    if(a == 0):
        return(0);
    while(b != 0):
        t = a % b
        a = b
        b = t;
    return(a);
    
def lcm(a, b):
    return(a * b / gcd(a, b));

T = int(input())
while(T > 0):
    [n, a, b, k] = map(int, input().split())
    if(n // a + n // b - (2 *   (n // lcm(a, b) )   ) >= k):
        print("Win");
    else:
        print("Lose");
    T -= 1;
