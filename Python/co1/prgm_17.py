bio={
    "name":"murali",
     "age":"24",
     "qual":"mca",
     "type":"men" 
}

print(bio)
asc=dict(sorted(bio.items()))
print(asc)
dsc=dict(sorted(bio.items() ,reverse=True))
print(dsc)