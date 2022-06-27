#include <raylib.h>

int main() {
    const int wWidth = 1280;
    const int wHeight = 720;
    
    InitWindow(wWidth, wHeight, "My Raylib Game!");
    
    while(!WindowShouldClose()) {
        BeginDrawing();
        
            ClearBackground(Color{255, 255, 255, 255});
        
        EndDrawing();
    }
}
