[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=19863661&assignment_repo_type=AssignmentRepo)
# Fibonacci

## Obiectiv
Scrieți, în fișierul `main.cpp`, programul care, citind din fișierul `input.txt` un număr `n`, va scrie în fișierul `output.txt` al `n`-lea termen al șirului lui Fibonacci, modulo `1000000007`.

## Precizări
Șirul lui Fibonacci se definește drept:
```math
F_n = 
\begin{cases}
0, \quad pentru \; n = 0\\
1, \quad pentru \; n = 1\\
F_{n-1} + F_{n-2}, \quad pentru \; n > 1\\
\end{cases}
```

Așadar, șirul lui Fibonacci este:
`0 1 1 2 3 5 8 13 21`

## Input
Se citește din fișierul `input.txt` numărul n.

## Output
Se scrie în fișierul `output.txt` numărul $F_n % 1000000007$.

## Restricții
0 < n < 2000000000

## Exemplu
### Input
```
8
```
### Output
```
21
```
