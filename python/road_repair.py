crew=[3,1,4,6,5]
job=[9,8,3,15,1]
a=len(crew)
sum=0
for i in range(a):
    min1=min(crew)
    crew.remove(min1)
    min2=min(job)
    job.remove(min2)
    sum+=abs(min1-min2)
print(sum)