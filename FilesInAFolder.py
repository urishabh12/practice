from os import listdir
from os.path import isfile, join
onlyfiles = [f for f in listdir(
    "/home/xtro/practice") if isfile(join("/home/xtro/practice", f))]
print(onlyfiles)
