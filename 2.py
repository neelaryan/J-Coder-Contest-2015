#/usr/bin/python

def display(list):
	str = ' '.join(list)
	print str

T = raw_input("No. of testcases : ")
if T.isdigit():
	T = int(T)
	if (T > 0 and T < 11):
		listA=[]
		listB=[]
		for i in range(0,T):
			tmp = raw_input("List A : ")
			listA.extend(tmp.split())
			tmp = raw_input("List B : ")
			listB.extend(tmp.split())
			list1 = list(set(listA) | set(listB))
			list2 = list(set(listA) & set(listB))
			list3 = list(set(listA) - set(listB))
	
			if list1:
				list1.sort()
				display(list1)
			else:
				print "Empty List"
			if list2:
				list2.sort()
				display(list2)
			else:
				print "Empty List"
			if list3:
				list3.sort()
				display(list3)
			else:
				print "Empty List"
	else:
		print "Invalid input! Accepted values:[1,10]"
else:
	print "Please enter a digit only!"
