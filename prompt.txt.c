What is the purpose of this program?

Answer:
This program simulates a simple 2D graphics editor using a character-based canvas. Users can draw rectangles, lines, circles, and triangles on a 20×60 grid and display the result on the console.

Q2. Why is a 2D array used?

Answer:
The screen[ROWS][COLS] array represents the drawing canvas. Each element stores a character that acts like a pixel on the screen.

char screen[ROWS][COLS];
Q3. What does clearScreen() do?

Answer:
It initializes every position of the canvas with the '.' character, creating a blank drawing area.

screen[i][j] = '.';
Q4. How is the canvas displayed?

Answer:
The showScreen() function traverses the entire 2D array and prints each character to the console.

printf("%c ", screen[i][j]);
Q5. How is a rectangle drawn?

Answer:
The program draws the top, bottom, left, and right borders using the '#' character. It does not fill the inside of the rectangle.

Q6. Why are boundary checks used?

Answer:
Boundary checks prevent the program from accessing invalid array indices and causing runtime errors.

Example:

if(i>=0 && i<COLS && y>=0 && y<ROWS)
Q7. How is a line drawn?

Answer:
The lineShape() function draws a horizontal line by placing '*' characters from x1 to x2 at a fixed row y.

for(int i=x1;i<=x2;i++)
Q8. How is the circle created?

Answer:
The circle uses the mathematical equation:

x
2
+y
2
≤r
2

Every point satisfying this condition is marked with '@'.

Q9. Why is the circle filled instead of hollow?

Answer:
The condition uses <= r*r, so all points inside the radius are drawn. To make it hollow, points near the boundary only should be drawn.

Q10. How is the triangle drawn?

Answer:
The triangle is created using nested loops. Each row contains one more '+' character than the previous row, forming a right-angled triangle.

Q11. What symbols are used for different shapes?
Shape	Character
Rectangle	#
Line	*
Circle	@
Triangle	+
Empty Space	.
Q12. Can multiple shapes be displayed together?

Answer:
Yes. The canvas is not cleared after drawing a shape, so multiple shapes can coexist until the user selects "Clear Canvas."

Q13. What happens when shapes overlap?

Answer:
The most recently drawn shape overwrites the previous character at overlapping positions.

Q14. Why is exit(0) used?

Answer:
It immediately terminates the program successfully when the user selects option 7.

exit(0);
Q15. What are the limitations of this program?

Answer:

Fixed canvas size (20 × 60)
Coordinates are hardcoded
Only horizontal lines are supported
Shapes are drawn using ASCII characters
No mouse or graphical interface
Q16. How can this project be improved?

Answer:

Accept user-defined coordinates.
Support vertical and diagonal lines.
Add color support.
Implement shape deletion.
Save and load drawings from files.
Create a GUI using graphics libraries such as:
SDL
OpenGL
SFML
Q17. What is the time complexity of drawing a circle?

Answer:
The nested loops run from -r to +r for both x and y directions, so the complexity is approximately:

O(r
2
)

where r is the radius of the circle.

Q18. Why are nested loops used extensively?

Answer:
Graphics operations require visiting multiple points on the canvas. Nested loops allow the program to check and update every required position efficiently.

Q19. What programming concepts are demonstrated in this project?

Answer:

Arrays
Functions
Loops
Conditional statements
Coordinate systems
Basic computer graphics concepts
Menu-driven programming
Q20. Is this a real graphics editor?

Answer:
Not exactly. It is a text-based simulation of a graphics editor. Instead of pixels on a graphical window, it uses characters on the console to represent shapes.
