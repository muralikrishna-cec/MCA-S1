dict1={
    "a":"1",
    "b":"2"
}

dict2={
    "c":"3",
    "d":"4"
}

merge=dict1.copy()

merge.update(dict2)

print(merge)