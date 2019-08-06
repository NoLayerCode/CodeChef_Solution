# cook your dish here
def main():
    T = int(input())
    while T > 0:
        # n = list(map(int, input().split()))
        n, k = map(int, input().split())
        if (k == 1) or (k == 1 and n == 1):
            print("NO")
        elif (n/k) == k:
            print("NO")
        elif (n/k) < k:
            print("YES")
        T -= 1
    
if __name__== "__main__":
    main()