layers_output=[4.8,1.21,2.385]

E=2.718577

exp_values=[]
expo=[]
for output in layers_output:
    exp_values.append(E**output)
total_sum=sum(exp_values)

total_be_1=[]

for x in exp_values:
    total_be_1.append(x/total_sum)

print(exp_values)
print(total_be_1)
print(sum(total_be_1))

