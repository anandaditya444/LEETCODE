# python 2.7

t = int (raw_input())
mod = 1000000007
def fact(a,b,c,l,r):
 ans1 = r*(r+1)*(2*r+1)/6
 diff1 = (l-1)*((l-1)+1)*(2*(l-1)+1)/6
 ans1 -= diff1
 ans1 = ans1*a
 ans2 = r*(r+1)/2
 diff2 = (l-1)*((l-1)+1)/2
 ans2 -= diff2
 ans2 = ans2*b
 ans3 = (r-(l-1))*c
 return ans1+ans2+ans3
while t :
 t-=1
 a, b, c, l, r = map(int, raw_input().split())
 print fact(a,b,c,l,r)%mod
