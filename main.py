import pint
ureg = pint.UnitRegistry()

while True:
    in1 = input('Конвертировать: ').split()
    in2 = input('В единицу: ')

    print('Результат: ' + str(ureg.convert(float(in1[0]), in1[1], in2)) + ' ' + in2)