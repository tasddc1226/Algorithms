#-*- coding:utf-8 -*-
# 유전 알고리즘
# 최초의 아이들 생성 -> 아이들 유전자 성능 측정 -> 똑똑한 아이들 선발 -> 교배 -> 돌연변이 생성


import random
import string

# 비밀번호를 길이만큼 랜덤으로 생성한다.
def generate_word(length):
    result = ""
    x = "".join(random.sample(string.ascii_letters + string.digits, k=length))
    return x

# 첫번째 세대가 태어남. 
def generate_population(size, min_len, max_len):
    population = [] # 빈 리스트 생성
    for i in range(size): # size 만큼 loop를 돌면서
        # generate words with balanced length
        # 최소 길이부터 최대 길이까지 밸런스하게 랜덤으로 생성한다.
        length = i % (max_len - min_len + 1) + min_len
        population.append(generate_word(length))
    return population

# fitness 측정 (성능 측정 단계)
def fitness(password, test_word):
    score = 0 # 초기 점수는 0점으로 초기화.

    # 길이가 다르면 0점 return
    if len(password) != len(test_word):
        return score
    
    # 길이가 같으면 0.5점을 더해준다.
    len_score = 0.5
    score += len_score

    # 설정한 비밀번호와 비교하여 해당 문자열이 있는지 있으면 1점을 더해준다.
    for i in range(len(password)):
        if password[i] == test_word[i]:
            score += 1
    
    # 백점 만점에 몇점인지 계산한다. (성능 측정)
    return score / (len(password) + len_score) * 100

# print(fitness('abcdE', 'abcde')) # 설정한 비밀번호와 비교하였을 때 점수는 81.81점)

def compute_performance(population, password):
    performance_list = [] # population을 점수 순서대로 정렬하기 위해서 list 생성.
    for individual in population:
        # 각각의 자식들의 점수를 측정한다.
        score = fitness(password, individual)

        # 비밀번호의 길이를 예측할 수 있다.
        if score > 0: # 점수가 0보다 크다는 뜻은 비밀번호의 길이는 맞췄다는 의미이다.
            pred_len = len(individual) # 예상 길이를 pred_len 변수에 저장한다.
        performance_list.append([individual, score])

    # list를 정렬하는데 key(점수)를 기준으로 내림차순으로 정렬한다.
    population_sorted = sorted(performance_list, key=lambda x: x[1], reverse=True)
    return population_sorted, pred_len

# 살아남은 아이들을 select할 함수이다.
def select_survivors(population_sorted, best_sample, lucky_few, password_len):
    next_generation = []

    # best_sample 수 만큼 뽑아서 다음 세대로 보낸다.
    for i in range(best_sample):
        if population_sorted[i][1] > 0:
            next_generation.append(population_sorted[i][0])
    
    # 랜덤으로 운이 좋은 자식들을 살린다.
    lucky_survivors = random.sample(population_sorted, k=lucky_few)
    for I in lucky_survivors:
        next_generation.append(I[0])

    # 다음 세대의 아이들의 수가 부족할 수 있기 때문에 랜덤으로 생성하여 채워넣는 부분이다.
    if len(next_generation) < best_sample + lucky_few:
        next_generation.append(generate_word(length=password_len))

    # 다음 세대의 아이들 리스트를 랜덤한 순으로 섞는다.
    random.shuffle(next_generation)
    return next_generation

# password = generate_word(length=10) # 길이가 10인 임의의 문자열 생성
# print("password is ", password)
# # 최소길이가 2이고 최대길이가 10인 문자열을 100개 생성
# min_len = 2
# max_len = 10
# pop = generate_population(size=100, min_len=min_len, max_len=max_len) 
# # print(pop)

# pop_sorted, pred_len = compute_performance(pop, password)
# print(pop_sorted)
# # 100명의 자식들 중에서 성능이 우수한 20명과 운이 좋은 20명을 선발한다.
# survivors = select_survivors(pop_sorted, best_sample=20, lucky_few=20, password_len=pred_len)

# print('password length must be %s' % pred_len)
# print(survivors)

# Create Children (살아남은 아이들을 교배시킨다.)
# individual1 : 엄마
# individual2 : 아빠
def create_child(individual1, individual2):
    child = ''
    # 더 짧은 길이의 유전자에 맞춰서 생성.
    min_len_ind = min(len(individual1), len(individual2))
    for i in range(min_len_ind):
        if (int(100*random.random()) < 50): # 50%의 확률로 엄마의 유전자를 획득
            child += individual1[i]
        else:
            child += individual2[i] # 나머지 50% 확률로 아빠의 유전자를 획득
    return child

def create_children(parents, n_child):
    next_population = []
    for i in range(int(len(parents)/2)):
        for j in range(n_child):
            next_population.append(create_child(parents[i], parents[len(parents) -1 -i]))
    return next_population

# survivors : 성능이 좋은아이들 20명, 운이좋은 아이들 20명 이므로 길이는 40
# 살아남은 아이들이 각각 5명씩 아이를 낳는다.
# 40명의 부모 = 20커플
# 5명씩 아이를 낳으면 20 X 5 = 100명
# children = create_children(survivors, 5)
# print("---------------children---------------\n", children)

# 돌연변이 생성
def mutate_word(word):
    # 비밀번호에서 임의의 idx 값을 추출한다
    idx = int (random.random() * len(word)) 
    
    # 추출한 idx 값에 랜덤한 값을 넣는다.
    if (idx == 0):
        word = random.choice(string.ascii_letters + string.digits) + word[1:]
    else:
        word = word[:idx] + random.choice(string.ascii_letters + string.digits) + word[idx+1:]
    return word

# 100명의 아이들 중에서 10% 확률로 돌연변이를 생성한다.
def mutate_population(population, chance_of_mutation):
    for i in range(len(population)):
        if random.random() * 100 < chance_of_mutation:
            population[i] = mutate_word(population[i])
    return population

# new_generation = mutate_population(population=children, chance_of_mutation=10)
# print("---------------new generation--------------\n", new_generation)

if __name__ == "__main__":

    # 비밀번호의 최대, 최소 자릿수를 지정해놓음.
    password = 'T4As2Dc39i'
    min_len = 2
    max_len = 10
    n_generation = 300
    population = 100
    best_sample = 20
    lucky_few = 20
    n_child = 5
    chance_of_mutation = 10

    pop = generate_population(size=population, min_len=min_len, max_len=max_len)

    # 총 300 세대를 생성하면서 반복한다.
    for g in range(n_generation):
        
        pop_sorted, pred_len = compute_performance(population=pop, password=password)

        # pop_sorted에서 첫 번째의 점수가 100점이면 비밀번호 찾음.  
        if int(pop_sorted[0][1]) == 100:
            print("SUCCESS! The password is %s" % (pop_sorted[0][0]))
            break
    
        survivors = select_survivors(population_sorted=pop_sorted, best_sample=best_sample, lucky_few=lucky_few, password_len=pred_len)

        children = create_children(parents=survivors, n_child=n_child)

        new_generation = mutate_population(population=children, chance_of_mutation=chance_of_mutation)

        pop = new_generation

        print("===========%sth generation==========" %(g+1))
        print(pop_sorted[0])











