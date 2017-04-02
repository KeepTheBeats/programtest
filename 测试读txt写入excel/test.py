# -*- coding: utf-8 -*-

import xlrd
from pyExcelerator import *

if __name__ == "__main__":
	data=xlrd.open_workbook('20个请求的需求表.xls')

	table = data.sheets()[0]
	nrows = table.nrows
	i=0
	print(nrows)
	while(i<nrows):
		#if(i==0):
		#	continue
		if(i!=0):
			print(table.row_values(i)[1])
		i = i+1
