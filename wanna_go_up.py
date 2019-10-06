a, b, v = map(int, input().split(" "))

one_day_up = a - b
before_last_day = v - a

ans = before_last_day // one_day_up
if v - ans*one_day_up > a:
    ans += 2
else:
    ans += 1

print(ans)
