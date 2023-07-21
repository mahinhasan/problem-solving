import sys
def main():
   # sys.stdin = open('input.txt')
    n = int(input())
    while(n>0):
        x,y = input().split()
        z = x[::-1]
        m = y[::-1]
        r = (int(z)+int(m))
        res = str(r)
        l = (res[::-1])
        print(int(l))
        n = n-1
if __name__ == "__main__":
    main()
