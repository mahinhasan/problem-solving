import sys


def main():

	#sys.stdin = open('in.txt')
	
	while True:
		try:
			n, a = map(int, input().split())

			res = 0
			power = 0

			for i in range(1, n + 1):
				power = a ** i
				power *= i 

				res += power
			
			print(res)

		except EOFError:
			break

if __name__ == "__main__":
	main()
