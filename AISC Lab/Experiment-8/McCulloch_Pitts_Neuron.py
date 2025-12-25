# =========================================================================================
# Terna Engineering College
# Computer Engineering Department
#
# EXPERIMENT NO. 08
#
# Name: Amey Mahendra Thakur    Roll No: 50
# Class: BE-COMPS-B             Batch: B3
# Date: 05-10-2021
#
# Repository: https://github.com/Amey-Thakur/ARTIFICIAL-INTELLIGENCE-AND-SOFT-COMPUTING-AND-ARTIFICIAL-INTELLIGENCE-AND-SOFT-COMPUTING-LAB
% Profile: https://github.com/Amey-Thakur
# =========================================================================================
#
# Subject: Artificial Intelligence and Soft Computing (AISC)
# Aim: To implement McCulloch Pitts Neuron Model for AND/OR functions.
#
# Description:
# This program implements the McCulloch-Pitts neuron model to simulate logic gates (AND/OR).
# It calculates the dot product of inputs and weights and treats it against a threshold value.
# If the dot product is greater than or equal to the threshold, the neuron fires (returns 1),
# otherwise it does not fire (returns 0).
#
# Mathematical Model:
# y = f(w1*x1 + w2*x2 - T)
# where f is the threshold function: f(net) = 1 if net >= 0, else 0.
# Equivalently, f(dot_product) = 1 if dot_product >= T, else 0.
#
# =========================================================================================

import numpy as np

def linear_threshold_gate(dot: int, T: float) -> int:
    '''Returns the binary threshold output'''
    if (dot >= T):
        return 1
    else:
        return 0

def main():
    # Matrix of inputs (Truth table inputs for 2 variables)
    # [0, 0]
    # [0, 1]
    # [1, 0]
    # [1, 1]
    input_table = np.array([
        [0,0], # both no
        [0,1], # one no, one yes
        [1,0], # one yes, one no
        [1,1]  # both yes
    ])
    
    print(f'input table:\n{input_table}')
    
    # Array of weights (Excitatory weights)
    weights = np.array([1,1])
    print(f'weights: {weights}')
    
    # Calculate dot product of inputs and weights
    dot_products = input_table @ weights
    print(f'Dot products: {dot_products}')
    
    # Input threshold value to determine the logic gate
    # T=1 for OR Gate behavior (since 0+1 >= 1, 1+0 >= 1, 1+1 >= 1)
    # T=2 for AND Gate behavior (only 1+1 >= 2)
    try:
        T = int(input("Enter threshold value: "))
    except ValueError:
        print("Invalid input. Please enter an integer.")
        return

    if(T == 1):
        print("MCCULLOCH PITTS MODEL- OR GATE")
    elif(T == 2):
        print("MCCULLOCH PITTS MODEL- AND GATE")
    else:
        print(f"Threshold {T} selected.")
        
    for i in range(0, 4):
        activation = linear_threshold_gate(dot_products[i], T)
        print(f'Activation: {activation}')

if __name__ == "__main__":
    main()
