from math import factorial
import sys

def main():

	sys.stdin = open('in.txt')

	while True:
		try:
			value1 = int(input())
			value2 = int(input())

			print(value2 * value1)
		
		except EOFError:
			break

if __name__ == "__main__":
	main()