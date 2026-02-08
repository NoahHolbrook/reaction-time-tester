# Reaction Time Tester (C)

A simple command-line program written in C that measures how quickly a user reacts after a random delay.

## How it works
1. The program waits for the user to press Enter.
2. After a random delay (2–5 seconds), it prints "GO!".
3. The user presses Enter as fast as possible.
4. The program calculates and displays the reaction time.

## How to run
```bash
gcc reactionTime.c -o reaction
./reaction
