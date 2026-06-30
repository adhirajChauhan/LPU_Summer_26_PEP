/*
Time complexity -> how much time an algorithm takes as input size increases

Big O -> represents the upper bound of running time, it gives the worst-case scanerio of an algorithm, it describes the maximum time an algorithm can take

1. -> O(1) -> Contant time -> the time taken doesn't depend on input size, the algorithm always runs in same time

cout << "Hello"

for(int i = 0; i < 5; i++){
}

2. -> O(logn) -> Logarathmic time -> this grows logarithmically as input size increases, often seen in algos that divide the input in half, like binary search
 

3 -> O(n) - Linear time - the time grows directly proportional to input size
for(int i = 0; i < n; i++){
    for(int j = 0; j < 5; j++){
    }
}

4. -> O(nlogn) -> Linearithmic time - a mix of logarathmic and linear

5. O(n^2) - quadratic time 
time grows proportionally to square of input size


*/