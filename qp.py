﻿#coding:utf-8
from splinter.browser import Browser
from time import sleep
import traceback

username = u"18638272869"
#passwd = u""

starts = u"%u798F%u5DDE%2CFZS"
ends = u"%u90D1%u5DDE%2CZZF"

dtime = u"2017-01-16"

order = 1

pa = u"张为凡"

login_url = "https://kyfw.12306.cn/otn/login/init"
initmy_url = "https://kyfw.12306.cn/otn/index/initMy12306"
ticket_url = "https://kyfw.12306.cn/otn/leftTicket/init"

def login():
	b.find_by_text(u"登录").click()
	sleep(3)
	b.find_by_id(u"username").fill(username)
#	b.find_by_id(u"password").fill(passwd)
	print ("等待输入验证码。")
	while(b.url != initmy_url):
		pass
	return


def huoche():
	global b
	b = Browser("chrome")
	b.visit(ticket_url)

	while b.is_text_present(u"登录"):
		sleep(1)
		login()
		if b.url == initmy_url:
			break

	b.visit(ticket_url)
	b.cookies.add({"_jc_save_fromStation":starts})
	b.cookies.add({"_jc_save_toStation":ends})
	b.cookies.add({"_jc_save_fromDate":dtime})

	b.reload()
	b.find_by_id("sf2").click()
	
	sleep(2)
	count = 0
	while b.url == ticket_url:
		b.find_by_id("query_ticket").click()
		count+=1
		print("循环点击查询第%s次"%count)
		sleep(2)
		if(b.find_by_id("ZE_58000G190201")[1] != "无"):
			b.find_by_id("ZE_58000G190201")[1].click()
		sleep(5)



	return

#def login():
#	b.find_by_text("登录").click()	
#	sleep(3)
	


if __name__ == "__main__":
	huoche()

