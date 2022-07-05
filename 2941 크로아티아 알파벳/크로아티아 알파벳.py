text = input()

count = 0

text_length=len(text)

for i in ["c=","c-","dz=","d-","lj","nj","s=","z="]:
    count = text.count(i)
    text_length-=count
    
print(text_length)
