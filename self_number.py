def d(x: int) -> int:
    ret = x
    while x > 0:
        ret += x % 10
        x //= 10
    return ret

is_not_self_number = {}
for i in range(1, 10001):
    is_not_self_number[d(i)] = True
    if i not in is_not_self_number:
        print(i)
