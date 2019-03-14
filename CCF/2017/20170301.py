Python 3.6.6 (v3.6.6:4cf1f54eb7, Jun 27 2018, 03:37:03) [MSC v.1900 64 bit (AMD64)] on win32
Type "copyright", "credits" or "license()" for more information.
>>> n,k = map(int,input().split())
6 9
>>> a = list(map(int,intput().split()))
Traceback (most recent call last):
  File "<pyshell#1>", line 1, in <module>
    a = list(map(int,intput().split()))
NameError: name 'intput' is not defined
>>> a = list(map(int,input().split()))
2 6 5 6 3 5
>>> num = 0
>>> total = 0
>>> for i in range(n):
	total += a[i]
	if(total>=k):
		num += 1
		total = 0

		
>>> num
2
>>> if(total == 0):
	print(num)
else:
	print(num+1)

	
3
>>> 
