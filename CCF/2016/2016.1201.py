Python 3.6.6 (v3.6.6:4cf1f54eb7, Jun 27 2018, 03:37:03) [MSC v.1900 64 bit (AMD64)] on win32
Type "copyright", "credits" or "license()" for more information.
>>> n = int(input())
5
>>> a = list(map(int,input().split()))
2 6 5 6 3 5
>>> n= 6
>>> for i in range(n):
	low = 0
	up = 0
	for j in range(n):
		if(a[i]<a[j]):
			up += 1
		if(a[i]>a[j]):
			low += 1
	if(up==low):
		b.append(a[i])

	
Traceback (most recent call last):
  File "<pyshell#14>", line 10, in <module>
    b.append(a[i])
NameError: name 'b' is not defined
>>> b = []
>>> for i in range(n):
	low = 0
	up = 0
	for j in range(n):
		if(a[i]<a[j]):
			up += 1
		if(a[i]>a[j]):
			low += 1
	if(up==low):
		b.append(a[i])

		
>>> if(len(b)==0):
	print(str(-1))
else:
	print(b[0])

	
5
>>> 
