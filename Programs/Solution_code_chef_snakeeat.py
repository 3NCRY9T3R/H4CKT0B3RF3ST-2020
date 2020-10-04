import bisect as bs

for _ in range(int(input())):

	n, q = map(int, input().split())

	l = list(map(int, input().split()))

	l.sort()

	S = [0] * n

	S[0] = l[0]

	for i in range(1, n):

		S[i] = S[i-1] + l[i]

	for __ in range(q):

		k = int(input())

		p= bs.bisect_left(l, k)

		le, ri = 0, p

		while le < ri:

			m = le + (ri - le) // 2

			need = k * (p - m) - (S[p-1] - S[m-1])

			if need <= m:

				ri = m

			else:

				le = m + 1

		print(n - ri)
