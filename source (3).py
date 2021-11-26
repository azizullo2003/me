n = int(input())
dp = []

dp.append(0)
dp.append(1)
sum1 = 1
i = 1
yigindi = 1
while True:
    dp.append(0)
    dp[i + 1] = 1 + dp[i + 1 - dp[dp[i]]]
    if sum1 + dp[i + 1] > n:
        yigindi += (n - sum1) * (i + 1)
        print(yigindi)
        break
    sum1 += dp[i+1]
    yigindi += dp[i + 1] * (i + 1) 
    i += 1
