# Mystery number

This little program written in C is also known as **More or Less**.  The goal is to find a "mystery" number between 1 and 100 in a minimum number of moves.

The other (and true ;D) goal of this project is to explore **Travis CI**'s "cross-compilation" features on GitHub.

# Targeted platforms

Up to day compilation works on:
- Linux (Debian 9) by using the **make** command in **bash**,  
- Windows (Windows NT) by using the **tasks.json** file in **VS Code**.

They both call **gcc**. Linux binary (see the Makefile) name is: "Mystery" and Windows: "Mystery.exe".