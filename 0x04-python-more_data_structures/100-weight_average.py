#!/usr/bin/python3
def weight_average(my_list=[]):
    if not my_list:
        return 0
    total_weight = 0
    weighted_total = 0
    for (score, weight) in my_list:
        total_weight += weight
        weighted_total += score * weight

    return weighted_total / total_weight
