Python 3.6.6 (v3.6.6:4cf1f54eb7, Jun 27 2018, 03:37:03) [MSC v.1900 64 bit (AMD64)] on win32
Type "copyright", "credits" or "license()" for more information.
>>> T = int(input())
flag = 0
if(T<=3500):
	print(T)
	flag = 1
if(flag==0):
	for S in range(3600,150000,100):
		if(S>3500 and S<=5000):
			t = S - (S-3500)*0.03
			if(t==T):
				flag = 1
				break
		elif(S>5000 and S<=8000):
			t = S-1500*0.03-(S-5000)*0.1
			if(t==T):
				flag = 1
				break
		elif(S>8000 and S<=12500):
			t = S-1500*0.03-3000*0.1-(S-8000)*0.2
			if(t==T):
				flag = 1
				break
		elif(S>12500 and S<=38500):
			t = S-1500*0.03-3000*0.1-4500*0.2-(S-12500)*0.25
			if(t==T):
				flag = 1
				break
		elif(S>38500 and S<=58500):
			t = S-1500*0.03-3000*0.1-4500*0.2-26000*0.25-(S-38500)*0.3
			if(t==T):
				flag = 1
				break
		elif(S>58500 and S<=83500):
			t = S-1500*0.03-3000*0.1-4500*0.2-26000*0.25-20000*0.3-(S-58500)*0.35
			if(t==T):
				flag = 1
				break
		elif(S>83500):
			t = S-1500*0.03-3000*0.1-4500*0.2-26000*0.25-20000*0.3-25000*0.35-(S-83500)*0.45
			if(t==T):
				flag = 1
				break
	print(S)
	
SyntaxError: multiple statements found while compiling a single statement
>>> 
