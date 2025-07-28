def Plist(list,idx=0):
    if(idx == len(list)):
        return
    print(list[idx])
    Plist(list,idx+1)
fruits = ["mango","grapes","apple","watermelon"]
Plist(fruits)