def main():
    T = int(input())
    while T > 0:
        n = int(input())
        max = 0
        goals = list(map(int, input().split()))
        fouls = list(map(int, input().split()))
        for i in range(0,n):
            score = goals[i]*20 - fouls[i]*10
            if score < 0:
                score = 0
            if score > max:
                max = score
        print(max)
        T-=1
        
if __name__ == "__main__":
    main()