Python 3.6.6 (v3.6.6:4cf1f54eb7, Jun 27 2018, 03:37:03) [MSC v.1900 64 bit (AMD64)] on win32
Type "copyright", "credits" or "license()" for more information.
>>> n = int(input())
8
>>> m = int(input())
3
>>> b= []
>>> for i in range(n):
	b[i] = i + 1

	
Traceback (most recent call last):
  File "<pyshell#5>", line 2, in <module>
    b[i] = i + 1
IndexError: list assignment index out of range
>>> for i in range(n):
	b.append(i + 1)

	
>>> b
[1, 2, 3, 4, 5, 6, 7, 8]
>>> for i in reversed(range(5)):
	print(i)

	
4
3
2
1
0
>>> for i in range(m):
	p,q = map(int,input().split())
	for j in range(n):
		if(b[j]==p):#第j个找到p
			if(q<0):#向左移
				for x in reversed(range(j-abs(q),j)):
					b[x+1] = b[x]
				b[x+1] = p
			if(q>0):#向右移
				for x in range(j+q):
					b[j] = b[j+1]
				b[x] = p

				
3 2
Traceback (most recent call last):
  File "<pyshell#24>", line 11, in <module>
    b[j] = b[j+1]
IndexError: list index out of range
>>> for i in range(m):
	p,q = map(int,input().split())
	for j in range(n):
		if(b[j]==p):#第j个找到p
			if(q<0):#向左移
				for x in reversed(range(j-abs(q),j)):
					b[x+1] = b[x]
				b[x+1] = p
			if(q>0):#向右移
				for x in range(j+q):
					b[x] = b[x+1]
				b[x] = p

				
3 2
Traceback (most recent call last):
  File "<pyshell#26>", line 11, in <module>
    b[x] = b[x+1]
IndexError: list index out of range
>>> for i in range(m):
	p,q = map(int,input().split())
	for j in range(n):
		if(b[j]==p):#第j个找到p
			if(q<0):#向左移
				for x in reversed(range(j-abs(q),j)):
					b[x+1] = b[x]
				b[x+1] = p
			if(q>0):#向右移
				for x in range(j,j+q):
					b[x] = b[x+1]
				b[x] = p

				
3 2
Traceback (most recent call last):
  File "<pyshell#28>", line 11, in <module>
    b[x] = b[x+1]
IndexError: list index out of range
>>> b
[2, 4, 5, 6, 7, 8, 3, 3]
>>> for i in range(n):
	b.append(i + 1)

	
>>> b
[2, 4, 5, 6, 7, 8, 3, 3, 1, 2, 3, 4, 5, 6, 7, 8]
>>> b = []
>>> for i in range(n):
	b.append(i + 1)

	
>>> b
[1, 2, 3, 4, 5, 6, 7, 8]
>>> for i in range(m):
	p,q = map(int,input().split())
	for j in range(n):
		if(b[j]==p):#第j个找到p
			if(q<0):#向左移
				for x in reversed(range(j-abs(q),j)):
					b[x+1] = b[x]
				b[x+1] = p
			if(q>0):#向右移
				for x in range(j,j+q):
					b[x] = b[x+1]
				b[x] = p

				
3 2
Traceback (most recent call last):
  File "<pyshell#38>", line 11, in <module>
    b[x] = b[x+1]
IndexError: list index out of range
>>> b
[1, 2, 4, 5, 6, 7, 8, 8]
>>> b =[]
>>> for i in range(n):
	b.append(i + 1)

	
>>> for i in range(m):
	p,q = map(int,input().split())
	for j in range(n):
		if(b[j]==p):#第j个找到p
			if(q<0):#向左移
				for x in reversed(range(j-abs(q),j)):
					b[x+1] = b[x]
				b[x+1] = p
			if(q>0):#向右移
				for x in range(j,j+q):
					b[x] = b[x+1]
				b[x] = p
			break

		
3 2
8 -3
3 -2
>>> b
[1, 2, 3, 4, 5, 8, 6, 7]
>>> b = [1,2,3,4,5,6,7,8]
>>> for i in range(2):
	p,q = map(int,input().split())
	for j in range(n):
		if(b[j]==p):#第j个找到p
			if(q<0):#向左移
				for x in reversed(range(j-abs(q),j)):
					b[x+1] = b[x]
				b[x+1] = p
			if(q>0):#向右移
				for x in range(j,j+q):
					b[x] = b[x+1]
				b[x] = p
			break

		
3 2
8 -3
>>> b
[1, 2, 4, 3, 5, 8, 6, 7]
>>> b = [1,2,3,4,5,6,7,8]
>>> for i in range(1):
	p,q = map(int,input().split())
	for j in range(n):
		if(b[j]==p):#第j个找到p
			if(q<0):#向左移
				for x in reversed(range(j-abs(q),j)):
					b[x+1] = b[x]
				b[x+1] = p
			if(q>0):#向右移
				for x in range(j,j+q):
					b[x] = b[x+1]
				b[x] = p
			break

		
3 2
>>> b
[1, 2, 4, 3, 5, 6, 7, 8]
>>> b= [1,2,3,4,5,6,7,8]
>>> for i in range(1):
	p,q = map(int,input().split())
	for j in range(n):
		if(b[j]==p):#第j个找到p
			if(q<0):#向左移
				for x in reversed(range(j-abs(q),j)):
					b[x+1] = b[x]
				b[x+1] = p
			if(q>0):#向右移
				for x in range(j,j+q):
					b[x] = b[x+1]
				b[x+1] = p
			break

		
3 2
>>> b
[1, 2, 4, 5, 3, 6, 7, 8]
>>> b= [1,2,3,4,5,6,7,8]
>>> for i in range(2):
	p,q = map(int,input().split())
	for j in range(n):
		if(b[j]==p):#第j个找到p
			if(q<0):#向左移
				for x in reversed(range(j-abs(q),j)):
					b[x+1] = b[x]
				b[x+1] = p
			if(q>0):#向右移
				for x in range(j,j+q):
					b[x] = b[x+1]
				b[x+1] = p
			break

		
3 2
8 -3
>>> b
[1, 2, 4, 5, 3, 8, 6, 7]
>>> b= [1,2,3,4,5,6,7,8]
>>> for i in range(2):
	p,q = map(int,input().split())
	for j in range(n):
		if(b[j]==p):#第j个找到p
			if(q<0):#向左移
				for x in reversed(range(j-abs(q),j)):
					b[x+1] = b[x]
				b[x] = p
			if(q>0):#向右移
				for x in range(j,j+q):
					b[x] = b[x+1]
				b[x+1] = p
			break

		
3 2
8 -3
>>> b
[1, 2, 4, 5, 8, 3, 6, 7]
>>> print(" ".join(map(str,b)))
1 2 4 5 8 3 6 7
>>> 
