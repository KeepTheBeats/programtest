class people(object):
	name = ""
	age = 0
	__weitht =0
	
	def __init__(self,n,a,w):
		self.name = n
		self.age = a
		self.__weitht = w
	
	def speak(self):
		print("%s is speaking: I am %d years old." %(self.name,self.age))
		print(self.name+" is speaking: I am "+str(self.age)+" years old.")

class gay(people):
	__isgay = True
	def speak(self):
		if(self.__isgay == True):
			print("%s is speaking: I am a gay." %(self.name))
		else:
			super(gay,self).speak()
	def set__isgay(self):
		c = input("")
		if(int(c) == 1):
			self.__isgay = True
		else:
			self.__isgay = False
		

if __name__ == "__main__":
	a = people("tom",30,60)
	a.speak()
	b = gay("Lee",20,40)
	b.set__isgay();
	
	b.speak()
