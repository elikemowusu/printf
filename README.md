# printf 
> We created a mini version of **C** `printf`.
 
> `printf` is found in the `stdio.h` library. 

> The function allows to print formatted strings
> by interpolation of data of different types. 

## Table of Contents
* [Technologies Used](#technologies-used)
* [Features](#features)
* [Setup](#setup)
* [Usage](#usage)
* [Project Status](#project-status)
* [Room for Improvement](#room-for-improvement)
* [Acknowledgements](#acknowledgements)
* [Authors](#authors)


## Technologies Used
- C programming language
- gcc compiler
- Ubuntu 20.04 LTS


## Features
Ready features here:
- Handles `%c`, `%s`, `%i` and `%d` in a minimal way
- Not yet support field width, precision or flag characters


## Setup
On ubuntu and using gcc:
`(terminal)$ git clone https://github.com/MelissaN/printf.git`
`(terminal)$ cd printf`

## Usage
```
int main(void)
{
	int len;

	len = _printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
    return (0);
}
======================================
(terminal)$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c -o print
(terminal)$ ./print
Length:[39, 39]
(terminal)$
```


## Project Status
Project is: _in progress_


## Room for Improvement
Areas that could be improved

Room for improvement:
- Improvement to be done 1
- Improvement to be done 2

To do:
- Feature to be added 1
- Feature to be added 2


## Acknowledgements
- This project was based on [the secrets to printf()](https://www.example.com).


## Authors
Derrick Owusu [@elikemowusu](https://github.com/elikemowusu) 
&& Gideon Quainoo [@sequainoo](https://github.com/sequainoo)
