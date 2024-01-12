def max_ndigit_palindrome(n):
    highndigit_num = (10**n) - 1
    minndigit_num = 1 + (highndigit_num // 10)
    max_product = 0;

    for i in range(highndigit_num, (minndigit_num - 1), -1):
        for j in range(i, (minndigit_num - 1), -1):
            product = i * j
            if product < max_product:
                break
            if str(product) == str(product)[::-1] and product > max_product:
                max_product = product
                print(product,"=",i,"*",j)

    return max_product

print(max_ndigit_palindrome(3))
