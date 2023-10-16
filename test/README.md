# 0x11. C - printf

## An ALX team project written by Happy Chukwuma and Adioz Daniel

😇😇

## TEST FILES ONLY

* All the test files are kept in this directory

### Architecture layout testing file

* This file helps test layout the architecture and skeleton testing for the team
* The rest of the features are plug and play; only if this test file works with the architecture

***main.c***

```C
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
```

* To compile this file, use:

```C gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format main.c ../*.c -o printf```

**NOTE:** -Wno-format suppresses printf ```B unknown conversion type character``` error while testing

* To run this file, use: ```B ./printf```
**Expected output:**

```C
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
```

* At this stage, it does not support all the modifiers. But it should support most of them.

## Copyright protected (c) 2023

* Though this is a public repo, All rights are reserved
* This software is the property of the two contributors and is protected by copyright laws.
* Thus, Unauthorized reproduction or distribution of this software, or any portion of it, may result to:
  * Severe civil and criminal penalties.
  * Prosecution to the maximum extent possible under the law.
* This software is a sole effort of the two contributors for educational purposes only.
* This directory constitutes works from contributor(s) and the Alx Team.

### Disclaimer

* This software can only be manipulated or checked, otherwise reviewed by **Alx Team**
* Most of the materials in this **test** folder are a property of **Alx Team**
**Thank you for finding interest to check out our awesome project**
