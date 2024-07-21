import java.util.*;

public class MazeGenerator {
    private final int width;
    private final int height;
    private final int[][] maze;
    private final Random rand = new Random();

    public MazeGenerator(int width, int height) {
        this.width = width;
        this.height = height;
        this.maze = new int[height][width];
        generateMaze(0, 0);
    }

    private void generateMaze(int x, int y) {
        maze[y][x] = 0;  // Mark the current cell as a grass block

        // Directions array for moving up, down, left, right
        int[] dx = {1, -1, 0, 0};
        int[] dy = {0, 0, 1, -1};

        // Shuffle the directions to ensure randomness
        Integer[] directions = {0, 1, 2, 3};
        Collections.shuffle(Arrays.asList(directions), rand);

        for (int i = 0; i < 4; i++) {
            int direction = directions[i];
            int newX = x + dx[direction] * 2;
            int newY = y + dy[direction] * 2;

            if (isValidMove(newX, newY)) {
                maze[y + dy[direction]][x + dx[direction]] = 0; // Knock down the wall
                generateMaze(newX, newY);
            }
        }
    }

    private boolean isValidMove(int x, int y) {
        return x >= 0 && x < width && y >= 0 && y < height && maze[y][x] == 1;
    }

    public void printMaze() {
        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {
                System.out.print(maze[y][x] == 1 ? "█" : " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int width = 21;  // Must be odd to ensure proper wall and path alternation
        int height = 21; // Must be odd to ensure proper wall and path alternation
        MazeGenerator generator = new MazeGenerator(width, height);
        generator.printMaze();
    }
}
