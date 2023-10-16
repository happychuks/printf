# 0x11. C - printf

## An ALX team project written by Happy Chukwuma and Adioz Daniel

😇😇

## TEST FILES ONLY

* All the test files are kept in this directory

### Architecture layout testing file

* This file helps test layout the architecture and skeleton testing for the team
* The rest of the features are plug and play; only if this test file works with the architecture

***main.c***

* To compile this file, use:

```gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format main.c ../*.c -o printf```

**NOTE:** -Wno-format suppresses printf ```unknown conversion type character``` error while testing

* To run this file, use: ```./printf```
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

## 2. With a face like mine, I do better in print

* Handling the following custom conversion specifiers:
  * ```b```: the unsigned int argument is converted to binary
* Test this conversion specifier with the ```2-main.c``` file
* To compile this file, use: ```gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format 2-main.c ../*.c```
* To run this test use: ```./a.out```

**Expected Output:**

```B
1100010
```

## 4. Nothing in fine print is ever good news

* In this section, we use a local buffer of 1024 chars in order to minimize write function calls.

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
