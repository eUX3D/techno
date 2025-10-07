from array import *
def is_valid_bit_string(bit_string):
    for char in bit_string:
        if char != '0' and char != '1':
            return False
    return True

frst = input("Введите первую битную строку из 8 символов:")
while not is_valid_bit_string(frst):
    print("Cтрока должна содержать только 0 и 1")
    frst = input("Введите первую битную строку из 8 символов:")

scnd = input("Введите вторую битную строку из 8 символов:")
while not is_valid_bit_string(scnd):
    print("Cтрока должна содержать только 0 и 1")
    scnd = input("Введите первую битную строку из 8 символов:")

frst = frst.zfill(8)
scnd = scnd.zfill(8)
result = array( 'B', [0] * 8)
for i in range(8):
    if frst[i] == '1' and scnd[i] == '1':
        result[i] = 1   
    else:
        result[i] = 0  
result_str = ''.join(str(bit) for bit in result)
    
print("Первая строка: ", frst)
print("Вторая строка: ", scnd)
print("Результат конъюнкции:", result_str)
