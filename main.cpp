#include "main.hpp";

int main()
{
	// Initialise the window and set the target FPS
	InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Hello World");
	SetTargetFPS(TARGET_FPS);

	// While the window is not signalling it is being closed
	while (!WindowShouldClose())
	{
		// Clear the screen with a white background
		BeginDrawing();
		ClearBackground(WHITE);
		// Write hello world in gray text
		DrawText("Hello World!", 12, 12, 64, DARKGRAY);
		EndDrawing();
	}
	// This will occur once the close button is pressed on the window
	CloseWindow();
}
