N, d, ap1, ap2 = map(int, input().split())

v1 = [False] * N
v2 = [False] * N

p1 = p2 = 0
v1[0] = v2[0] = True

dist1 = dist2 = 0
meet = 1
pass_cnt = 0

c1 = c2 = 1
turn = 0

while c1 < N or c2 < N:
    if turn == 0 and c1 < N:
        cur = p1
        skipped = 0
        while True:
            cur = (cur + 1) % N
            dist1 += d
            skipped += 1
            landing = skipped > ap1 and not v1[cur]
            if not landing and cur == p2:
                pass_cnt += 1
            if landing:
                break
        p1 = cur
        v1[p1] = True
        c1 += 1
        if p1 == p2:
            meet += 1
        turn = 1

    elif turn == 1 and c2 < N:
        cur = p2
        skipped = 0
        while True:
            cur = (cur - 1) % N
            dist2 += d
            skipped += 1
            landing = skipped > ap2 and not v2[cur]
            if not landing and cur == p1:
                pass_cnt += 1
            if landing:
                break
        p2 = cur
        v2[p2] = True
        c2 += 1
        if p1 == p2:
            meet += 1
        turn = 0
    else:
        turn ^= 1

print(dist1, dist2, meet, pass_cnt)
