# -*- coding:utf-8 -*-


if __name__ == "__main__":

	file = open("c:\\Users\Takamina\\Desktop\需要\\我做的论文\\第一篇\\评估\\实验图片\\经典拓扑\\同样的带宽和开销用很多次\\Google B4 开销3-15容量带宽10-40需求带宽10-30\FCF\\14.txt","r")

	tar = ""
	ln=0
	ml = ""
	while(1):
		ml = file.readline()
		if(not ml):
			break
		ln = ln+1
	
	file.close()
	file = open("c:\\Users\Takamina\\Desktop\需要\\我做的论文\\第一篇\\评估\\实验图片\\经典拓扑\\同样的带宽和开销用很多次\\Google B4 开销3-15容量带宽10-40需求带宽10-30\FCF\\14.txt","r")

	ll=0
	while(1):
		ml = file.readline()
		if(ll==ln-1):
			print(ml)
			break
		ll = ll + 1
	
	file.close()

	print(len(ml))

	print(ml[len(ml)-2])

	f1 = ml.find("rw:")
	print(f1)

	if(f1+6 == len(ml)):
		print(str(ml[f1+3])+str(ml[f1+4]))
	else:
		print(str(ml[f1+3]))
