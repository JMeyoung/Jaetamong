import sys

try:
    data = sys.stdin.read().split()
    if len(data) < 2:
        sys.exit()
    total = int(data[0])
    diff = int(data[1])
except:
    sys.exit()

clara = (total + diff) // 2
natalia = total - clara

print(clara)
print(natalia)