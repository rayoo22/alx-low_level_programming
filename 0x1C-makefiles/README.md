0x1C. Makefiles

This directory contains several Makefile tasks as part of the ALX Low-Level Programming curriculum. Each task builds upon the previous one, adding complexity and additional functionality to the Makefile. Below is a description of each task and its requirements:
Task 0: Create Your First Makefile

File: 0-Makefile

    Executable Name: school
    Rules:
        all: Builds the executable
    Variables: None

Example Usage:

bash

make -f 0-Makefile

Task 1: Adding Variables

File: 1-Makefile

    Executable Name: school
    Rules:
        all: Builds the executable
    Variables:
        CC: The compiler to be used (e.g., gcc)
        SRC: The .c files

Example Usage:

bash

make -f 1-Makefile

Task 2: Adding Object Files and Dependencies

File: 2-Makefile

    Executable Name: school
    Rules:
        all: Builds the executable
    Variables:
        CC: The compiler to be used
        SRC: The .c files
        OBJ: The .o files
        NAME: The name of the executable
    Requirements:
        The all rule should recompile only the updated source files
        No list of all the .o files

Example Usage:

bash

make -f 2-Makefile

Task 3: Adding Cleaning Rules

File: 3-Makefile

    Executable Name: school
    Rules:
        all: Builds the executable
        clean: Deletes all Emacs and Vim temporary files along with the executable
        oclean: Deletes the object files
        fclean: Deletes all Emacs and Vim temporary files, the executable, and the object files
        re: Forces recompilation of all source files
    Variables:
        CC: The compiler to be used
        SRC: The .c files
        OBJ: The .o files
        NAME: The name of the executable
        RM: The program to delete files

Example Usage:

bash

make -f 3-Makefile
make clean -f 3-Makefile
make oclean -f 3-Makefile
make fclean -f 3-Makefile
make re -f 3-Makefile

Task 4: Adding Compiler Flags

File: 4-Makefile

    Executable Name: school
    Rules:
        all: Builds the executable
        clean: Deletes all Emacs and Vim temporary files along with the executable
        oclean: Deletes the object files
        fclean: Deletes all Emacs and Vim temporary files, the executable, and the object files
        re: Forces recompilation of all source files
    Variables:
        CC: The compiler to be used
        SRC: The .c files
        OBJ: The .o files
        NAME: The name of the executable
        RM: The program to delete files
        CFLAGS: Compiler flags (-Wall -Werror -Wextra -pedantic)

Example Usage:

bash

make all -f 4-Makefile
make clean -f 4-Makefile
make oclean -f 4-Makefile
make fclean -f 4-Makefile
make re -f 4-Makefile

Task 5: Island Perimeter

File: 5-island_perimeter.py

    Function:

    python

    def island_perimeter(grid):

    Description:
        Returns the perimeter of the island described in grid.
        grid is a list of lists of integers where 0 represents water and 1 represents land.
        The grid cells are connected horizontally/vertically.
        The grid is rectangular, width and height do not exceed 100.
        The island is surrounded by water, with no lakes.

Example Usage:

bash

./5-main.py

Task 6: Advanced Makefile

File: 100-Makefile

    Executable Name: school
    Rules:
        all: Builds the executable
        clean: Deletes all Emacs and Vim temporary files along with the executable
        oclean: Deletes the object files
        fclean: Deletes all Emacs and Vim temporary files, the executable, and the object files
        re: Forces recompilation of all source files
    Variables:
        CC: The compiler to be used
        SRC: The .c files
        OBJ: The .o files
        NAME: The name of the executable
        RM: The program to delete files
        CFLAGS: Compiler flags (-Wall -Werror -Wextra -pedantic)
    Additional Requirements:
        Use $(RM) for the cleaning up rules, but only set it twice
        Do not use the string $(CC) more than once
        Do not use the string $(CFLAGS)
        The Makefile should work even if there is a file in the folder with the same name as one of the rules
        The Makefile should not compile if the header file m.h is missing

Example Usage:

bash

make all -f 100-Makefile
make clean -f 100-Makefile
make oclean -f 100-Makefile
make fclean -f 100-Makefile
make re -f 100-Makefile

Repository

    GitHub repository: alx-low_level_programming
    Directory: 0x1C-makefiles

Files

    0-Makefile
    1-Makefile
    2-Makefile
    3-Makefile
    4-Makefile
    5-island_perimeter.py
    100-Makefile
    Additional source files: main.c, school.c, m.h
