Bora and Yaşar have reached the finals of Hacettepe University's 55th Traditional Bowling 
Tournament, and decide to play a different type of bowling to determine the tournament champion. 
In this game, the tenpins will be arranged in a square instead of triangular way.

A side of the square is n and the game will be played on an nxn field. Shots will be made from 
the desired side of the square and the shot directions will be given as following:

    0 -> from East to West
    1 -> from South to North 'e
    2 -> from West to East 'ya
    3 -> from North to South

The ball will always hit the aimed tenpin initially and continue to bring down the tenpins by the 
following rule

A tenpin hit by the shot will bring down the tenpin in the direction of the shot and 2 tenpins 
across from it, that is, when 1 tenpin is brought down, it brings down 3 more tenpins. (its left-
corner, right-corner and front) Every tenpin that is brought down will also bring down other 
tenpins behind them.

Note: Any tenpin can be hit at the start of the game. This tenpin could be in the corner or it could 
be in the middle of the board.

----------------------
Input Format
----------------------

The first line contains an integer n, which is the number of pins at a side of the square pin 
field. The second line contains two integers x and y, which are the coordinates of the 
shooter. These integers are given as 0-indexed.

The third line contains an integer d, which is the shot direction.

----------------------
Output Format
----------------------

The number of total tenpins that are brought down.

----------------------
Constraints
----------------------

1≤n≤10^4

----------------------
Sample Input 1
----------------------

3
2 1
1

----------------------
Sample Output 1
----------------------

7

----------------------
Explanation 1
----------------------

A ball thrown from the 1st direction (from south to north) to x = 2, y = 1 will bring down the 
tenpin located at (2,1). Then, that tenpin will bring down 3 more tenpins indicated by the arrows 
behind it. These 3 brought down tenpins also bring down the tenpins indicated by the arrows behind them.
A total of 7 clubs are brought down in the end.