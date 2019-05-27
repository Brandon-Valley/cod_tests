# #hw1
# 
# 
# print "#3"
# 
# def f3(n):
#     if n <= 1:
#         return 0
#     else:
#         return f3(n-1) + n**3 + n
#     
# print f3(3)
#  
# print '#1e\n'
#  
# for i in range(1,11):
#     print 1.0/i
#      
#      
#      
# print '\n#2\n'
# def fermatCheck(a,b,c,n):
#     if n > 2 and ((a**n) + (b**n) == (c**n) ):
#         print 'Fermat was wrong!'
#     else:
#         print 'That does not work'
#          
# fermatCheck(3987,4365,4472,12)        
#          
# # 398712+436512= 447212
#  
# print "\n#3\n"
#  
# def altDif(i_list):
#     i = i_list.pop()
#     for num in i_list[::-1]:
#         i = num - i
#     return i
#  
# print altDif([7,6,9,10])
#  
#  
# print "\n#4\n"
#  
#  
# # (0),f(-9),f(45),f(99),f(100),andf(250)
#   
#  
# def f(x):
#     if            x            >            100:
#         return            x            -            9
#     else:
#         return            f(f(x+10))
#  
#  
# print f(0)
# print f(-9)
# print f(45)
# print f(99)
# print f(100)
# print f(250)
#  
# print "/n"
#  
# def f(x):
#     if x > 100:
#         return x - 9
#     else:
#         return 92
#  
#  
# print f(0)
# print f(-9)
# print f(45)
# print f(99)
# print f(100)
# print f(250)
#  
# 
# 
# # [[1,9],[5,[6,2]],3]theoutputlistshouldb e[3,[[2,6],5],[9,1]]
# print '\n\n'
#   
# def SuperReverse(i_list):
#     for pos in range( len(i_list) ):
#         e = i_list[pos]
#         if type(e) == list:
#             i_list[pos] = SuperReverse(e)
#     return i_list[::-1]
#    
# print SuperReverse([[1,9],[5,[6,2]],3])
#     
# 
# def            Q(x,y):
#     if            x            ==            0:
#         return            y+1
#     if            y            ==            0:
#         return            Q(x-1,1)
#     else:
#         return            Q(x-1,Q(x,y-1))
#  
#  
# print Q(2,2)



print 'hi'



def f(ilist, olist = []):
#     print olist
    if len( ilist ) == 0:
        return olist
    else:
        olist.append(ilist.pop())
        return f(ilist, olist)

print f([1,2,3,4,5])

a = [1,2,3]
print a.popfront()


























