di={'2':1,'3':25}
k=input("Enter key: ")
print("Exists" if k in di else "Not exist")

d1={'a':1, 'b':2}
d2={'c':3, 'd':4}
d1.update(d2)
print (d1)

d={'b':2, 'a':5, 'c':1}
print("Ascending: ",dict(sorted(d.items())))
print("Descending: ",dict(sorted(d.items(),reverse=True)))

d={'a':1, 'b':2, 'c':3}
inverted={v:k for k,v in d.items()}
print(inverted)