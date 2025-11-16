# Mind Reading Card Game (Magic Number Guessing Game)

This is a C-based Mind Reading Card Game that magically guesses the number you selected from a set of cards.
The logic is based on binary mathematics and card-based prediction.

## How the Game Works
You choose any one number between 1 and 63 (secretly).
The program displays 6 cards.
For each card:
If your number appears in the card → type 'y'
If not → type 'n'
Based on your answers, the program calculates your number using hidden binary logic.
Your number is revealed at the end.

## Game Logic (Simple Explanation)
Each card represents a binary position:

| Card | Binary Value |
|------|--------------|
| Card 1 | 1 |
| Card 2 | 2 |
| Card 3 | 4 |
| Card 4 | 8 |
| Card 5 | 16 |
| Card 6 | 32 |

If you say 'yes', the value of that card is added.
This sum exactly equals your chosen secret number.

## Features
- 6 dynamically displayed number cards
- User-friendly yes/no input
- Hidden binary number prediction
- Works for all numbers 1 to 63
- Clean output and easy gameplay

## How to Run the Program
1. Save the file as `main.c`
2. Compile using: `gcc main.c -o game`
3. Run using: `./game`
4. Follow the on-screen instructions

## Sample Output

------------Welcome to the card game------------

Rule to play this game:

Select any 1 number from the first card and keep it in mind.
You will be shown cards. If your number appears, type 'y'. If not, type 'n'.
Your number will be revealed based on your answers.

------Here is the first card--------

2 3 6 7 10 11 14 15 18 19 22 23 26 27 30 31 34 35 38 39 42 43 46 47 50 51 54 55 58 59 62 63

Is the number in this card (y/n): y

------Here is your 2 card--------
...

Your number is : 27


## Author
Kanishka Jain
