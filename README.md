# Custom Printf Project Readme 
## project 0x11. C - printf to create a custom printf
0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
- a function that produces output according to a format.
	- 'c' for character
	- 's' for string
	- '%' for percent

1. Education is when you read the fine print. Experience is what you get if you don't
- Handling the following conversion specifiers:
	- 'd' for decimal
	- 'i' for integers

2. With a face like mine, I do better in print
- Handling the following custom conversion specifiers:
	- 'b': the unsigned int argument is converted to binary

3. What one has not experienced, one will never understand in print
- Handling the following conversion specifiers
	- 'u' for unsigned integers
	- 'o' for octal integer
	- 'x' for Lowercase Hexadecimal Integer
	- 'X' for Uppercase Hexadecimal Integer

4. Nothing in fine print is ever good news
- Using a local buffer of 1024 chars in order to call write as little as possible.

5. My weakness is wearing too much leopard print
- Handling custom specifier:
	- 'S':prints the string.
	- Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, 
	followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print
- Handling the following conversion specifier
	- 'p' : for pointer

7. The big print gives and the small print takes away
- For handling the following flag characters for non-custom specifiers
	- +
	- space
	- #

8. Sarcasm is lost in print
- Hnadling the following  length modifiers for non-custom conversion specifiers:
	- l
	- h
- Conversion specifiers to handle: d, i, u, o, x, X

9. Print some money and give it to us for the rain forests
- Handling the field width for non-custom conversion specifiers.

10. The negative is the equivalent of the composer's score, and the print the performance
- Handling the precision for non-custom conversion specifiers.

11. It's depressing when you're still around and your albums are out of print
- Handling the 0 flag character for non-custom conversion specifiers.

12. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection
- Handling the - flag character for non-custom conversion specifiers.

13. Print is the sharpest and the strongest weapon of our party
- Handling the following custom conversion specifier:
	- 'r': prints the reversed string

14. The flood of print has turned reading into a process of gulping rather than savoring
- Handling the following custom conversion specifiers
	-	'R': prints the rot13'ed string

15. '\*'
- Using all of the above
