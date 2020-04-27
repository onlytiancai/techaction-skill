from functools import reduce
s = '''
流川枫 数学 98.800003
流川枫 语文 88.000000
樱木花道 数学 74.199997
樱木花道 语文 64.300003
宫城良田 语文 99.000000
'''

items = [item.split() for item in s.split('\n') if len(item.split()) == 3]
groups = reduce(lambda x, y: x.setdefault(y[0], []).append(y) or x, items, {})
avgs = [(group, sum(float(x[2]) for x in items) / len(items)) for group, items  in groups.items()]
print(max(avgs, key=lambda x: x[1]))
