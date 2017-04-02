# -*- coding:utf-8 -*-

from xlutils.copy import copy
from xlrd import open_workbook

if (__name__ == "__main__"):

	rb = open_workbook("20个请求的需求表.xls");
	wb = copy(rb);
	ws = wb.get_sheet(0);

	i = 1;
	while(i<=20):
		if(i<10):
			file = open("c:\\Users\\Takamina\\Desktop\\需要\\我做的论文\\第一篇\\评估\\实验图片\\经典拓扑\\同样的带宽和开销用很多次\\Google B4 开销3-15容量带宽10-40需求带宽10-30\\FCF\\0"+str(i)+".txt","r");
		else:
			file = open("c:\\Users\\Takamina\\Desktop\\需要\\我做的论文\\第一篇\\评估\\实验图片\\经典拓扑\\同样的带宽和开销用很多次\\Google B4 开销3-15容量带宽10-40需求带宽10-30\\FCF\\"+str(i)+".txt","r");
		
		ml = "";
		num1 = 0;
		while(1):
			ml = file.readline();
			if(not ml):
				break;
			num1 = num1 + 1;

		file.close();


		if(i<10):
			file = open("c:\\Users\\Takamina\\Desktop\\需要\\我做的论文\\第一篇\\评估\\实验图片\\经典拓扑\\同样的带宽和开销用很多次\\Google B4 开销3-15容量带宽10-40需求带宽10-30\\FCF\\0"+str(i)+".txt","r");
		else:
			file = open("c:\\Users\\Takamina\\Desktop\\需要\\我做的论文\\第一篇\\评估\\实验图片\\经典拓扑\\同样的带宽和开销用很多次\\Google B4 开销3-15容量带宽10-40需求带宽10-30\\FCF\\"+str(i)+".txt","r");
		
		num2 = 0;
		while(1):
			ml = file.readline();
			if(num2 == num1 -1):
				break;
			num2 = num2 + 1;
		
		file.close;
		
#		print(ml);

		f1 = ml.find("rw:");

		if(f1+6 == len(ml)):
			aa = str(ml[f1+3])+str(ml[f1+4]);
#			print(str(ml[f1+3])+str(ml[f1+4]));
		else:
			aa = str(ml[f1+3]);
#			print(str(ml[f1+3]));
		print(aa);

		ws.write(i,2,int(aa))


		i=i+1;


	i = 1;
	while(i<=20):
		if(i<10):
			file = open("c:\\Users\\Takamina\\Desktop\\需要\\我做的论文\\第一篇\\评估\\实验图片\\经典拓扑\\同样的带宽和开销用很多次\\Internet2 OS3E 开销3-15容量带宽10-40需求带宽10-30\\FCF\\0"+str(i)+".txt","r");
		else:
			file = open("c:\\Users\\Takamina\\Desktop\\需要\\我做的论文\\第一篇\\评估\\实验图片\\经典拓扑\\同样的带宽和开销用很多次\\Internet2 OS3E 开销3-15容量带宽10-40需求带宽10-30\\FCF\\"+str(i)+".txt","r");
		
		ml = "";
		num1 = 0;
		while(1):
			ml = file.readline();
			if(not ml):
				break;
			num1 = num1 + 1;

		file.close();


		if(i<10):
			file = open("c:\\Users\\Takamina\\Desktop\\需要\\我做的论文\\第一篇\\评估\\实验图片\\经典拓扑\\同样的带宽和开销用很多次\\Internet2 OS3E 开销3-15容量带宽10-40需求带宽10-30\\FCF\\0"+str(i)+".txt","r");
		else:
			file = open("c:\\Users\\Takamina\\Desktop\\需要\\我做的论文\\第一篇\\评估\\实验图片\\经典拓扑\\同样的带宽和开销用很多次\\Internet2 OS3E 开销3-15容量带宽10-40需求带宽10-30\\FCF\\"+str(i)+".txt","r");
		
		num2 = 0;
		while(1):
			ml = file.readline();
			if(num2 == num1 -1):
				break;
			num2 = num2 + 1;
		
		file.close;
		
#		print(ml);

		f1 = ml.find("rw:");

		if(f1+6 == len(ml)):
			aa = str(ml[f1+3])+str(ml[f1+4]);
#			print(str(ml[f1+3])+str(ml[f1+4]));
		else:
			aa = str(ml[f1+3]);
#			print(str(ml[f1+3]));
		print(aa);

		ws.write(i,3,int(aa))


		i=i+1;

#	ws.write(1,2,"改");
	wb.save("111.xls");



