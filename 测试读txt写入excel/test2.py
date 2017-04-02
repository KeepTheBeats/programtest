#coding: utf-8

from xlutils.copy import copy
from xlrd import open_workbook

if __name__ == "__main__":
	rb = open_workbook('20个请求的需求表.xls')
	wb = copy(rb)
	ws = wb.get_sheet(0)
	ws.write(1,2,'改')
	wb.save('111.xls')
