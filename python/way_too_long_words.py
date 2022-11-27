n=int(input("Enter the number of words to be checked: "))
list_of_strings=[]
for i in range(n):
    s=(input("Enter the word: "))
    s=list(s)
    list_of_strings.append(s)
for i in range(n):
    if (len(list_of_strings[i])>10):
        list_of_strings[i][1]=str(len(list_of_strings[i])-2)
        list_of_strings[i][2]=list_of_strings[i][-1]
        list_of_strings[i]=list_of_strings[i][0:3]
    list_of_strings[i]="".join(list_of_strings[i])
    print(list_of_strings[i])
