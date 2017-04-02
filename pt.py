#coding=utf-8
import time 
from splinter.browser import Browser

def ter(a,b,c,d):
	
	abc.visit("http://www.baidu.com/")
	abc.find_by_id(u"kw").fill(u"akb48")
	abc.find_by_value(u"百度一下").click()
	return

if __name__ == '__main__':
	global abc;
	abc = Browser("chrome")
	a = "chrome"
	b = "http://www.baidu.com/"
	c = "bdvSearchInput"
	d = "su"

	ter(a,b,c,d)


#	bb = Browser(a)
#	bb.visit(b)
#	bb.find_by_text(u"视频").click()
#	bb.find_by_id(c).fill("akb48")
#	bb.find_by_value("百度一下").click()
