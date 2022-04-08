def solution(price, money, count):    
    total_price = 0
    for i in range(1, count+1):
        total_price += i * price
    
    return 0 if (total_price == money or total_price < money) else abs(money-total_price)

print(solution(3, 20, 4))