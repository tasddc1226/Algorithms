#-*- coding:utf-8 -*-
# ���� �˰���
# ������ ���̵� ���� -> ���̵� ������ ���� ���� -> �ȶ��� ���̵� ���� -> ���� -> �������� ����


import random
import string

# ��й�ȣ�� ���̸�ŭ �������� �����Ѵ�.
def generate_word(length):
    result = ""
    x = "".join(random.sample(string.ascii_letters + string.digits, k=length))
    return x

# ù��° ���밡 �¾. 
def generate_population(size, min_len, max_len):
    population = [] # �� ����Ʈ ����
    for i in range(size): # size ��ŭ loop�� ���鼭
        # generate words with balanced length
        # �ּ� ���̺��� �ִ� ���̱��� �뷱���ϰ� �������� �����Ѵ�.
        length = i % (max_len - min_len + 1) + min_len
        population.append(generate_word(length))
    return population

# fitness ���� (���� ���� �ܰ�)
def fitness(password, test_word):
    score = 0 # �ʱ� ������ 0������ �ʱ�ȭ.

    # ���̰� �ٸ��� 0�� return
    if len(password) != len(test_word):
        return score
    
    # ���̰� ������ 0.5���� �����ش�.
    len_score = 0.5
    score += len_score

    # ������ ��й�ȣ�� ���Ͽ� �ش� ���ڿ��� �ִ��� ������ 1���� �����ش�.
    for i in range(len(password)):
        if password[i] == test_word[i]:
            score += 1
    
    # ���� ������ �������� ����Ѵ�. (���� ����)
    return score / (len(password) + len_score) * 100

# print(fitness('abcdE', 'abcde')) # ������ ��й�ȣ�� ���Ͽ��� �� ������ 81.81��)

def compute_performance(population, password):
    performance_list = [] # population�� ���� ������� �����ϱ� ���ؼ� list ����.
    for individual in population:
        # ������ �ڽĵ��� ������ �����Ѵ�.
        score = fitness(password, individual)

        # ��й�ȣ�� ���̸� ������ �� �ִ�.
        if score > 0: # ������ 0���� ũ�ٴ� ���� ��й�ȣ�� ���̴� ����ٴ� �ǹ��̴�.
            pred_len = len(individual) # ���� ���̸� pred_len ������ �����Ѵ�.
        performance_list.append([individual, score])

    # list�� �����ϴµ� key(����)�� �������� ������������ �����Ѵ�.
    population_sorted = sorted(performance_list, key=lambda x: x[1], reverse=True)
    return population_sorted, pred_len

# ��Ƴ��� ���̵��� select�� �Լ��̴�.
def select_survivors(population_sorted, best_sample, lucky_few, password_len):
    next_generation = []

    # best_sample �� ��ŭ �̾Ƽ� ���� ����� ������.
    for i in range(best_sample):
        if population_sorted[i][1] > 0:
            next_generation.append(population_sorted[i][0])
    
    # �������� ���� ���� �ڽĵ��� �츰��.
    lucky_survivors = random.sample(population_sorted, k=lucky_few)
    for I in lucky_survivors:
        next_generation.append(I[0])

    # ���� ������ ���̵��� ���� ������ �� �ֱ� ������ �������� �����Ͽ� ä���ִ� �κ��̴�.
    if len(next_generation) < best_sample + lucky_few:
        next_generation.append(generate_word(length=password_len))

    # ���� ������ ���̵� ����Ʈ�� ������ ������ ���´�.
    random.shuffle(next_generation)
    return next_generation

# password = generate_word(length=10) # ���̰� 10�� ������ ���ڿ� ����
# print("password is ", password)
# # �ּұ��̰� 2�̰� �ִ���̰� 10�� ���ڿ��� 100�� ����
# min_len = 2
# max_len = 10
# pop = generate_population(size=100, min_len=min_len, max_len=max_len) 
# # print(pop)

# pop_sorted, pred_len = compute_performance(pop, password)
# print(pop_sorted)
# # 100���� �ڽĵ� �߿��� ������ ����� 20��� ���� ���� 20���� �����Ѵ�.
# survivors = select_survivors(pop_sorted, best_sample=20, lucky_few=20, password_len=pred_len)

# print('password length must be %s' % pred_len)
# print(survivors)

# Create Children (��Ƴ��� ���̵��� �����Ų��.)
# individual1 : ����
# individual2 : �ƺ�
def create_child(individual1, individual2):
    child = ''
    # �� ª�� ������ �����ڿ� ���缭 ����.
    min_len_ind = min(len(individual1), len(individual2))
    for i in range(min_len_ind):
        if (int(100*random.random()) < 50): # 50%�� Ȯ���� ������ �����ڸ� ȹ��
            child += individual1[i]
        else:
            child += individual2[i] # ������ 50% Ȯ���� �ƺ��� �����ڸ� ȹ��
    return child

def create_children(parents, n_child):
    next_population = []
    for i in range(int(len(parents)/2)):
        for j in range(n_child):
            next_population.append(create_child(parents[i], parents[len(parents) -1 -i]))
    return next_population

# survivors : ������ �������̵� 20��, �������� ���̵� 20�� �̹Ƿ� ���̴� 40
# ��Ƴ��� ���̵��� ���� 5�� ���̸� ���´�.
# 40���� �θ� = 20Ŀ��
# 5�� ���̸� ������ 20 X 5 = 100��
# children = create_children(survivors, 5)
# print("---------------children---------------\n", children)

# �������� ����
def mutate_word(word):
    # ��й�ȣ���� ������ idx ���� �����Ѵ�
    idx = int (random.random() * len(word)) 
    
    # ������ idx ���� ������ ���� �ִ´�.
    if (idx == 0):
        word = random.choice(string.ascii_letters + string.digits) + word[1:]
    else:
        word = word[:idx] + random.choice(string.ascii_letters + string.digits) + word[idx+1:]
    return word

# 100���� ���̵� �߿��� 10% Ȯ���� �������̸� �����Ѵ�.
def mutate_population(population, chance_of_mutation):
    for i in range(len(population)):
        if random.random() * 100 < chance_of_mutation:
            population[i] = mutate_word(population[i])
    return population

# new_generation = mutate_population(population=children, chance_of_mutation=10)
# print("---------------new generation--------------\n", new_generation)

if __name__ == "__main__":

    # ��й�ȣ�� �ִ�, �ּ� �ڸ����� �����س���.
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

    # �� 300 ���븦 �����ϸ鼭 �ݺ��Ѵ�.
    for g in range(n_generation):
        
        pop_sorted, pred_len = compute_performance(population=pop, password=password)

        # pop_sorted���� ù ��°�� ������ 100���̸� ��й�ȣ ã��.  
        if int(pop_sorted[0][1]) == 100:
            print("SUCCESS! The password is %s" % (pop_sorted[0][0]))
            break
    
        survivors = select_survivors(population_sorted=pop_sorted, best_sample=best_sample, lucky_few=lucky_few, password_len=pred_len)

        children = create_children(parents=survivors, n_child=n_child)

        new_generation = mutate_population(population=children, chance_of_mutation=chance_of_mutation)

        pop = new_generation

        print("===========%sth generation==========" %(g+1))
        print(pop_sorted[0])











