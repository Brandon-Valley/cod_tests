






def            Q(x,y):
    if            x            ==            0:
        print  'y + 1 = ', y+1
        return            y+1
    if            y            ==            0:
        print 'Q(x-1,1) = ', Q(x-1,1)
        return            Q(x-1,1)
    else:
        print 'Q(x-1,Q(x,y-1)) = ', Q(x-1,Q(x,y-1))
        return            Q(x-1,Q(x,y-1))





# def            f(x):if            x            >            100:return            x            -            9else:return            f(f(x+10))


def            Q(x,y):
if            x            ==            0:
return            y+1
if            y            ==            0:
return            Q(x-1,1)
else:
return            Q(x-1,Q(x,y-1))


# import import_test
def write_text_file(file_path, line_list):
    f = open(file_path, 'w')
    # write to file
    for line in line_list:
        f.write(line + '\n')
    # cleanup
    f.close()
    
file = 'test00.py'
ll = ['print "hello"','print  "hidididi"', 'def testFunc():','    padfds', 'testFunc()']
write_text_file(file, ll)

try:
    import test00
except:
    print 'nope'