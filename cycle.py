from typing import List
import itertools

class Solution:
    def containsCycle(self, grid: List[List[str]]) -> bool:
        answer = False
        n = len(grid)
        m = len(grid[0])
        visits = [[False for _ in range(m)] for _ in range(n)]
        directions = [[-1, 0], [1, 0], [0, -1], [0, 1]]  # up down left right
        while not all(itertools.chain(*visits)):
            flag = False
            for i in range(n):
                if flag: break
                for j in range(m):
                    if not visits[i][j]:
                        start_v = [i, j]
                        flag = True
                        break
            start_flag = True
            start_count = 0
            stack = []
            stack.append(start_v)
            while stack:
                now_v = stack.pop()
                if visits[now_v[0]][now_v[1]]:
                    continue
                start_count += 1
                if start_count > 3:
                    start_flag = False
                visits[now_v[0]][now_v[1]] = True
                for d in directions:
                    check_v = [now_v[0]+d[0], now_v[1]+d[1]]
                    if 0 <= check_v[0] < n and 0 <= check_v[1] < m:
                        if grid[now_v[0]][now_v[1]] == grid[check_v[0]][check_v[1]]:
                            if not start_flag and check_v == start_v:
                                answer = True
                                break
                            else:
                                stack.append(check_v)
        return answer


sol = Solution()
example = [["a","a","a","a"],["a","b","b","a"],["a","b","b","a"],["a","a","a","a"]]
ans = sol.containsCycle(example)
print(ans)  # True
example = [["a","b","b"],["b","z","b"],["b","b","a"]]
ans = sol.containsCycle(example)
print(ans)  # False
example = [
    ["b","a","c"],
    ["c","a","c"],
    ["d","d","c"],
    ["b","c","c"]]
ans = sol.containsCycle(example)
print(ans)  # False
example = [
    ["c","a","d"],
    ["a","a","a"],
    ["a","a","d"],
    ["a","c","d"],
    ["a","b","c"]]
ans = sol.containsCycle(example)
print(ans)  # True
