import os
import glob
files = glob.glob(os.path.join("src", "*.cpp"))
os.system("mkdir temp")
for file in files:
    os.system(f"g++ -std=c++17 -c {file} -o temp/{file[4:-4]}.o")
os.system("ar rcs out/libbigInt.a temp/*.o")
os.system("rm -rf temp")
os.system(f"g++ -std=c++17 -o test/test.exe test/test.cpp -Lout -lbigInt")
os.system("./test/test.exe")