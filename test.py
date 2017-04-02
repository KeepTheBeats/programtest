#coding:utf-8


if __name__ == "__main__":
	x=[]
	i=0
	while(i<=2):
		x.append(i)
		i=i+1

	x.append(4)
	x.append(5)

	i=0
	while(i<=2):
		print(x[i])
		i=i+1

	print(str(x[4]+5)+" "+str(x[3]))
	
