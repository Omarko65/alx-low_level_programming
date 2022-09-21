      Project: 0x1C. C - Makefiles | Lagos Intranet          Cookies.set('timezone', (new Date()).getTimezoneOffset() / -60.0); 
0x1C. C - Makefiles
===================

#### In a nutshell…

*   **Auto QA review:** 33.8/52 mandatory & 0.0/13 optional
*   **Altogether:**  **65.0%**
    *   Mandatory: 65.0%
    *   Optional: 0.0%
    *   Calculation:  65.0% + (65.0% \* 0.0%)  == **65.0%**

![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/273/giphy-2.gif)

  

Resources
---------

**Read or watch**:

*   [Makefile](/rltoken/moIpBFMN3sJcVMNn5VIFlA "Makefile")

Learning Objectives
-------------------

At the end of this project, you are expected to be able to [explain to anyone](/rltoken/u_RzOFqA4lSt5AdGRAfQ_w "explain to anyone"), **without the help of Google**:

### General

*   What are `make`, Makefiles
*   When, why and how to use Makefiles
*   What are rules and how to set and use them
*   What are explicit and implicit rules
*   What are the most common / useful rules
*   What are variables and how to set and use them

### Copyright - Plagiarism

*   You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
*   You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
*   You are not allowed to publish any content of this project.
*   Any form of plagiarism is strictly forbidden and will result in removal from the program.

Requirements
------------

### General

*   Allowed editors: `vi`, `vim`, `emacs`
*   OS: Ubuntu 20.04 LTS
*   Version of `gcc`: 9.3.0
*   Version of `make`: GNU Make 4.2.1
*   All your files should end with a new line
*   A `README.md` file, at the root of the folder of the project, is mandatory

More Info
---------

### Files

In the following tasks, we are going to use [these files](https://github.com/holbertonschool/0x1B.c "these files"). We want to compile these only.

Tasks
-----

### 0\. make -f 0-Makefile

mandatory

Score: 0% (Checks completed: 0%)

Create your first Makefile.

Requirements:

*   name of the executable: `school`
*   rules: `all`
    *   The `all` rule builds your executable
*   variables: none

    julien@ubuntu:~/0x1C. Makefiles$ make -f 0-Makefile 
    gcc main.c school.c -o school
    julien@ubuntu:~/0x1C. Makefiles$ ./school 
    j#0000000000000000000000000000000000000
    j#000000000000000000@Q**g00000000000000
    j#0000000000000000*]++]4000000000000000
    j#000000000000000k]++]++*N#000000000000
    j#0000000000000*C+++]++]++]J*0000000000
    j#00000000000@+]++qwwwp=]++++]*00000000
    j#0000000000*+++]q#0000k+]+]++]4#000000
    j#00000000*C+]+]w#0000*]+++]+]++0000000
    j#0000we+]wW000***C++]++]+]++++40000000
    j#000000000*C+]+]]+]++]++]++]+q#0000000
    j#0000000*]+]+++++++]++]+++]+++J0000000
    j#000000C++]=]+]+]+]++]++]+]+]+]=000000
    j#00000k+]++]+++]+]++qwW0000000AgW00000
    j#00000k++]++]+]+++qW#00000000000000000
    j#00000A]++]++]++]++J**0000000000000000
    j#000000e]++]+++]++]++]J000000000000000
    j#0000000A]++]+]++]++]++000000000000000
    j#000000000w]++]+]++]+qW#00000000000000
    j#00000000000w]++++]*0##000000000000000
    j#0000000000000Ag]+]++*0000000000000000
    j#00000000000000000we]+]Q00000000000000
    j#0000000000000@@+wgdA]+J00000000000000
    j#0000000000000k?qwgdC=]4#0000000000000
    j#00000000000000w]+]++qw#00000000000000
    "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    julien@ubuntu:~/0x1C. Makefiles$ 
    

**Repo:**

*   GitHub repository: `alx-low_level_programming`
*   Directory: `0x1C-makefiles`
*   File: `0-Makefile`

Done?! Help

×

#### Students who are done with "0. make -f 0-Makefile"

Check your code

×

#### Correction of "0. make -f 0-Makefile"

Start a new test Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

Get a sandbox QA Review

×

#### 0\. make -f 0-Makefile

##### Commit used:

*   **User:** \---
*   **URL:** Click here
*   **ID:** `---`
*   **Author:** \---
*   **Subject:** _\---_
*   **Date:** \---

### 1\. make -f 1-Makefile

mandatory

Score: 0% (Checks completed: 0%)

Requirements:

*   name of the executable: `school`
*   rules: `all`
    *   The `all` rule builds your executable
*   variables: `CC`, `SRC`
    *   `CC`: the compiler to be used
    *   `SRC`: the `.c` files

    julien@ubuntu:~/0x1C. Makefiles$ make -f 1-Makefile
    gcc main.c school.c -o school
    julien@ubuntu:~/0x1C. Makefiles$ make -f 1-Makefile
    gcc main.c school.c -o school
    julien@ubuntu:~/0x1C. Makefiles$
    

**Repo:**

*   GitHub repository: `alx-low_level_programming`
*   Directory: `0x1C-makefiles`
*   File: `1-Makefile`

Done?! Help

×

#### Students who are done with "1. make -f 1-Makefile"

Check your code

×

#### Correction of "1. make -f 1-Makefile"

Start a new test Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

Get a sandbox QA Review

×

#### 1\. make -f 1-Makefile

##### Commit used:

*   **User:** \---
*   **URL:** Click here
*   **ID:** `---`
*   **Author:** \---
*   **Subject:** _\---_
*   **Date:** \---

### 2\. make -f 2-Makefile

mandatory

Score: 0% (Checks completed: 0%)

Create your first useful Makefile.

Requirements:

*   name of the executable: `school`
*   rules: `all`
    *   The `all` rule builds your executable
*   variables: `CC`, `SRC`, `OBJ`, `NAME`
    *   `CC`: the compiler to be used
    *   `SRC`: the `.c` files
    *   `OBJ`: the `.o` files
    *   `NAME`: the name of the executable
*   The `all` rule should recompile only the updated source files
*   You are not allowed to have a list of all the `.o` files

    julien@ubuntu:~/0x1C. Makefiles$ make -f 2-Makefile
    gcc    -c -o main.o main.c
    gcc    -c -o school.o school.c
    gcc main.o school.o -o school
    julien@ubuntu:~/0x1C. Makefiles$ make -f 2-Makefile
    gcc main.o school.o -o school
    julien@ubuntu:~/0x1C. Makefiles$ echo "/* School */" >> main.c
    julien@ubuntu:~/0x1C. Makefiles$ make -f 2-Makefile
    gcc    -c -o main.o main.c
    gcc main.o school.o -o school
    julien@ubuntu:~/0x1C. Makefiles$ 
    

**Repo:**

*   GitHub repository: `alx-low_level_programming`
*   Directory: `0x1C-makefiles`
*   File: `2-Makefile`

Done?! Help

×

#### Students who are done with "2. make -f 2-Makefile"

Check your code

×

#### Correction of "2. make -f 2-Makefile"

Start a new test Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

Get a sandbox QA Review

×

#### 2\. make -f 2-Makefile

##### Commit used:

*   **User:** \---
*   **URL:** Click here
*   **ID:** `---`
*   **Author:** \---
*   **Subject:** _\---_
*   **Date:** \---

### 3\. make -f 3-Makefile

mandatory

Score: 0% (Checks completed: 0%)

Requirements:

*   name of the executable: `school`
*   rules: `all`, `clean`, `oclean`, `fclean`, `re`
    *   `all`: builds your executable
    *   `clean`: deletes all Emacs and Vim temporary files along with the executable
    *   `oclean`: deletes the object files
    *   `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
    *   `re`: forces recompilation of all source files
*   variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`
    *   `CC`: the compiler to be used
    *   `SRC`: the `.c` files
    *   `OBJ`: the `.o` files
    *   `NAME`: the name of the executable
    *   `RM`: the program to delete files
*   The `all` rule should recompile only the updated source files
*   The `clean`, `oclean`, `fclean`, `re` rules should never fail
*   You are not allowed to have a list of all the `.o` files

    julien@ubuntu:~//0x1C. Makefiles$ ls -1
    0-Makefile
    1-Makefile
    2-Makefile
    3-Makefile
    school.c
    main.c
    main.c~
    m.h
    julien@ubuntu:~/0x1C. Makefiles$ make -f 3-Makefile
    gcc    -c -o main.o main.c
    gcc    -c -o school.o school.c
    gcc main.o school.o -o school
    julien@ubuntu:~/0x1C. Makefiles$ make all -f 3-Makefile
    gcc main.o school.o -o school
    julien@ubuntu:~/0x1C. Makefiles$ ls -1
    0-Makefile
    1-Makefile
    2-Makefile
    3-Makefile
    school
    school.c
    school.o
    main.c
    main.c~
    main.o
    m.h
    julien@ubuntu:~/0x1C. Makefiles$ make clean -f 3-Makefile 
    rm -f *~ school
    julien@ubuntu:~/0x1C. Makefiles$ make oclean -f 3-Makefile 
    rm -f main.o school.o
    julien@ubuntu:~/0x1C. Makefiles$ make fclean -f 3-Makefile 
    rm -f *~ school
    rm -f main.o school.o
    julien@ubuntu:~/0x1C. Makefiles$ make all -f 3-Makefile
    gcc    -c -o main.o main.c
    gcc    -c -o school.o school.c
    gcc main.o school.o -o school
    julien@ubuntu:~/0x1C. Makefiles$ make all -f 3-Makefile
    gcc main.o school.o -o school
    julien@ubuntu:~/0x1C. Makefiles$ make re -f 3-Makefile
    rm -f main.o school.o
    gcc    -c -o main.o main.c
    gcc    -c -o school.o school.c
    gcc main.o school.o -o school
    julien@ubuntu:~/0x1C. Makefiles$ 
    

**Repo:**

*   GitHub repository: `alx-low_level_programming`
*   Directory: `0x1C-makefiles`
*   File: `3-Makefile`

Done?! Help

×

#### Students who are done with "3. make -f 3-Makefile"

Check your code

×

#### Correction of "3. make -f 3-Makefile"

Start a new test Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

Get a sandbox QA Review

×

#### 3\. make -f 3-Makefile

##### Commit used:

*   **User:** \---
*   **URL:** Click here
*   **ID:** `---`
*   **Author:** \---
*   **Subject:** _\---_
*   **Date:** \---

### 4\. A complete Makefile

mandatory

Score: 0% (Checks completed: 0%)

Requirements:

*   name of the executable: `school`
*   rules: `all`, `clean`, `fclean`, `oclean`, `re`
    *   `all`: builds your executable
    *   `clean`: deletes all Emacs and Vim temporary files along with the executable
    *   `oclean`: deletes the object files
    *   `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
    *   `re`: forces recompilation of all source files
*   variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`
    *   `CC`: the compiler to be used
    *   `SRC`: the `.c` files
    *   `OBJ`: the `.o` files
    *   `NAME`: the name of the executable
    *   `RM`: the program to delete files
    *   `CFLAGS`: your favorite compiler flags: `-Wall -Werror -Wextra -pedantic`
*   The `all` rule should recompile only the updated source files
*   The `clean`, `oclean`, `fclean`, `re` rules should never fail
    
*   You are not allowed to have a list of all the `.o` files
    

    julien@ubuntu:~/0x1C. Makefiles$ make all -f 4-Makefile
    gcc -Wall -Werror -Wextra -pedantic   -c -o main.o main.c
    gcc -Wall -Werror -Wextra -pedantic   -c -o school.o school.c
    gcc main.o school.o -o school
    julien@ubuntu:~/0x1C. Makefiles$ 
    

**Repo:**

*   GitHub repository: `alx-low_level_programming`
*   Directory: `0x1C-makefiles`
*   File: `4-Makefile`

Done?! Help

×

#### Students who are done with "4. A complete Makefile"

Check your code

×

#### Correction of "4. A complete Makefile"

Start a new test Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

Get a sandbox QA Review

×

#### 4\. A complete Makefile

##### Commit used:

*   **User:** \---
*   **URL:** Click here
*   **ID:** `---`
*   **Author:** \---
*   **Subject:** _\---_
*   **Date:** \---

### 5\. Island Perimeter

mandatory

Score: 0% (Checks completed: 0%)

**Technical interview preparation**:

*   You are not allowed to google anything
*   Whiteboard first

Create a function `def island_perimeter(grid):` that returns the perimeter of the island described in `grid`:

*   `grid` is a list of list of integers:
    *   0 represents a water zone
    *   1 represents a land zone
    *   One cell is a square with side length 1
    *   Grid cells are connected horizontally/vertically (not diagonally).
    *   Grid is rectangular, width and height don’t exceed 100
*   Grid is completely surrounded by water, and there is one island (or nothing).
*   The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).

Requirements:

*   First line contains `#!/usr/bin/python3`
*   You are not allowed to import any module
*   Module and function must be documented

    guillaume@ubuntu:~/0x1C$ cat 5-main.py
    #!/usr/bin/python3
    """
    5-main
    """
    island_perimeter = __import__('5-island_perimeter').island_perimeter
    
    if __name__ == "__main__":
        grid = [
            [0, 0, 0, 0, 0, 0],
            [0, 1, 0, 0, 0, 0],
            [0, 1, 0, 0, 0, 0],
            [0, 1, 1, 1, 0, 0],
            [0, 0, 0, 0, 0, 0]
        ]
        print(island_perimeter(grid))
    
    guillaume@ubuntu:~/0x1C$ 
    guillaume@ubuntu:~/0x1C$ ./5-main.py
    12
    guillaume@ubuntu:~/0x1C$ 
    

**Repo:**

*   GitHub repository: `alx-low_level_programming`
*   Directory: `0x1C-makefiles`
*   File: `5-island_perimeter.py`

Done?! Help

×

#### Students who are done with "5. Island Perimeter"

Check your code

×

#### Correction of "5. Island Perimeter"

Start a new test Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

Get a sandbox QA Review

×

#### 5\. Island Perimeter

##### Commit used:

*   **User:** \---
*   **URL:** Click here
*   **ID:** `---`
*   **Author:** \---
*   **Subject:** _\---_
*   **Date:** \---

[Done with the mandatory tasks? Unlock 1 advanced task now!](/projects/273/unlock_optionals)

×

#### Recommended Sandbox

Copyright © 2022 ALX, All rights reserved.

×

#### Markdown Guide

#### Emphasis

\*\***bold**\*\*
\*_italics_\*
~strikethrough~~

#### Headers

\# Big header
## Medium header
### Small header
#### Tiny header

#### Lists

\* Generic list item
\* Generic list item
\* Generic list item

1. Numbered list item
2. Numbered list item
3. Numbered list item

#### Links

\[Text to display\](http://www.example.com)

#### Quotes

\> This is a quote.
> It can span multiple lines!

#### Images

CSS style available: `width, height, opacity`

!\[\](http://www.example.com/image.jpg)
!\[\](http://www.example.com/image.jpg | width: 200px)
!\[\](http://www.example.com/image.jpg | height: 124px | width: 80px | opacity: 0.6)

#### Tables

| Column 1 | Column 2 | Column 3 |
| -------- | -------- | -------- |
| John     | Doe      | Male     |
| Mary     | Smith    | Female   |

_Or without aligning the columns..._

| Column 1 | Column 2 | Column 3 |
| -------- | -------- | -------- |
| John | Doe | Male |
| Mary | Smith | Female |

#### Displaying code

\`var example = "hello!";\`

_Or spanning multiple lines..._

\`\`\`
var example = "hello!";
alert(example);
\`\`\`

(function(i,s,o,g,r,a,m){i\['GoogleAnalyticsObject'\]=r;i\[r\]=i\[r\]||function(){ (i\[r\].q=i\[r\].q||\[\]).push(arguments)},i\[r\].l=1\*new Date();a=s.createElement(o), m=s.getElementsByTagName(o)\[0\];a.async=1;a.src=g;m.parentNode.insertBefore(a,m) })(window,document,'script','//www.google-analytics.com/analytics.js','ga'); ga('create', 'UA-67152800-9', 'auto', { userId: '26582' } ); ga('send', 'pageview'); $(document).ready(function() { ga(function(tracker) { var clientId = tracker.get('clientId'); $('.ga-client-id').val(clientId); }); });
