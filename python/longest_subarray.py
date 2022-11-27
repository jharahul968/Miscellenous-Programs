arr=[0,1,2,1,2,3]
# output=4 for 1,2,1,2
# ans=0
# arr2=[]
# for i in range(len(arr)):
#     arr2.append(arr[i])
#     for j in range(i+1,len(arr)):
#         if abs(arr[i]-arr[j])<2:
#             if ((not arr[j] in arr2) or (arr[j]-arr[j-1]==1)):
#                 if (len(arr2)==2):
#                     break;
#                 else:
#                     arr2.append(arr[j])
#             else:
#                 break
#         if (len(arr2)==2):
#             ans=j-i
#             arr2.clear()
#         else:
#             arr2.clear()
# print(ans)

if len(arr)<2:
    print(len(arr))
best=1
bestLower=1
bestHigher=1
for i in range(1,len(arr)):
    if arr[i]==arr[i-1]:
        bestLower+=1
        bestHigher+=1
    elif arr[i]-1==arr[i-1]:
        bestLower=1+bestHigher
        bestHigher=1
    elif arr[i]+1==arr[i-1]:
        bestHigher=1+bestLower
        bestLower=1
    else:
        bestLower=1
        bestHigher=1
    best=max(best,bestLower,bestHigher)
print(best)