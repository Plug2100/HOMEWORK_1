#include "common.h"
#include "Image.h"
#include "Player.h"
#include <iostream>
#include <fstream>
#define GLFW_DLL
#include <GLFW/glfw3.h>
#include <unistd.h>
constexpr GLsizei WINDOW_WIDTH = 1024, WINDOW_HEIGHT = 1024;






struct Hearth
{
  void Draw(int x, Image &screen);
};

void Hearth::Draw(int x, Image &screen)
{
  Image hearth("./resources/hearth.png");

  screen.PutPixel( 956+x, 1000, hearth.GetPixel(8, 13));

  screen.PutPixel( 955+x, 1001, hearth.GetPixel(8, 13));
  screen.PutPixel( 956+x, 1001,hearth.GetPixel(8, 13));
  screen.PutPixel( 957+x, 1001, hearth.GetPixel(8, 13));

  screen.PutPixel( 954+x, 1002,hearth.GetPixel(8, 13));
  screen.PutPixel( 956+x, 1002,hearth.GetPixel(8, 13));
  screen.PutPixel( 957+x, 1002,hearth.GetPixel(8, 13));
  screen.PutPixel( 955+x, 1002,hearth.GetPixel(8, 13));
  screen.PutPixel( 958+x, 1002,hearth.GetPixel(8, 13));


  screen.PutPixel( 954+x, 1003,hearth.GetPixel(8, 13));
  screen.PutPixel( 956+x, 1003,hearth.GetPixel(8, 13));
  screen.PutPixel( 957+x, 1003,hearth.GetPixel(8, 13));
  screen.PutPixel( 955+x, 1003,hearth.GetPixel(8, 13));
  screen.PutPixel(958+x, 1003,hearth.GetPixel(8, 13));
  screen.PutPixel( 953+x, 1003,hearth.GetPixel(8, 13));
  screen.PutPixel( 959+x, 1003, hearth.GetPixel(8, 13));



  screen.PutPixel( 954+x, 1004,hearth.GetPixel(8, 13));
  screen.PutPixel( 956+x, 1004,hearth.GetPixel(8, 13));
  screen.PutPixel( 957+x, 1004,hearth.GetPixel(8, 13));
  screen.PutPixel( 955+x, 1004,hearth.GetPixel(8, 13));
  screen.PutPixel( 958+x, 1004,hearth.GetPixel(8, 13));
  screen.PutPixel( 953+x, 1004,hearth.GetPixel(8, 13));
  screen.PutPixel( 959+x, 1004,hearth.GetPixel(8, 13));
  screen.PutPixel( 952+x, 1004,hearth.GetPixel(8, 13));
  screen.PutPixel( 960+x, 1004,hearth.GetPixel(8, 13));




  screen.PutPixel( 954+x, 1005,hearth.GetPixel(8, 13));
  screen.PutPixel( 956+x, 1005,hearth.GetPixel(8, 13));
  screen.PutPixel( 957+x, 1005,hearth.GetPixel(8, 13));
  screen.PutPixel( 955+x, 1005,hearth.GetPixel(8, 13));
  screen.PutPixel( 958+x, 1005,hearth.GetPixel(8, 13));
  screen.PutPixel( 953+x, 1005,hearth.GetPixel(8, 13));
  screen.PutPixel( 959+x, 1005,hearth.GetPixel(8, 13));
  screen.PutPixel( 952+x, 1005,hearth.GetPixel(8, 13));
  screen.PutPixel( 960+x, 1005,hearth.GetPixel(8, 13));
  screen.PutPixel( 951+x, 1005,hearth.GetPixel(8, 13));
  screen.PutPixel( 961+x, 1005,hearth.GetPixel(8, 13));



  screen.PutPixel( 954+x, 1006,hearth.GetPixel(8, 13));
  screen.PutPixel( 956+x, 1006,hearth.GetPixel(8, 13));
  screen.PutPixel( 957+x, 1006,hearth.GetPixel(8, 13));
  screen.PutPixel( 955+x, 1006,hearth.GetPixel(8, 13));
  screen.PutPixel( 958+x, 1006,hearth.GetPixel(8, 13));
  screen.PutPixel( 953+x, 1006,hearth.GetPixel(8, 13));
  screen.PutPixel( 959+x, 1006,hearth.GetPixel(8, 13));
  screen.PutPixel( 952+x, 1006,hearth.GetPixel(8, 13));
  screen.PutPixel( 960+x, 1006,hearth.GetPixel(8, 13));
  screen.PutPixel( 951+x, 1006,hearth.GetPixel(8, 13));
  screen.PutPixel( 961+x, 1006,hearth.GetPixel(8, 13));
  screen.PutPixel( 950+x, 1006,hearth.GetPixel(8, 13));
  screen.PutPixel( 962+x, 1006,hearth.GetPixel(8, 13));






  screen.PutPixel( 954+x, 1007,hearth.GetPixel(8, 13));
  screen.PutPixel( 956+x, 1007,hearth.GetPixel(8, 13));
  screen.PutPixel( 957+x, 1007,hearth.GetPixel(8, 13));
  screen.PutPixel( 955+x, 1007,hearth.GetPixel(8, 13));
  screen.PutPixel( 958+x, 1007,hearth.GetPixel(8, 13));
  screen.PutPixel( 953+x, 1007,hearth.GetPixel(8, 13));
  screen.PutPixel( 959+x, 1007,hearth.GetPixel(8, 13));
  screen.PutPixel( 952+x, 1007,hearth.GetPixel(8, 13));
  screen.PutPixel( 960+x, 1007,hearth.GetPixel(8, 13));
  screen.PutPixel( 951+x, 1007,hearth.GetPixel(8, 13));
  screen.PutPixel( 961+x, 1007,hearth.GetPixel(8, 13));
  screen.PutPixel( 950+x, 1007,hearth.GetPixel(8, 13));
  screen.PutPixel( 962+x, 1007,hearth.GetPixel(8, 13));
  screen.PutPixel( 949+x, 1007,hearth.GetPixel(8, 13));
  screen.PutPixel( 963+x, 1007,hearth.GetPixel(8, 13));




  screen.PutPixel( 954+x, 1008,hearth.GetPixel(8, 13));
  screen.PutPixel( 956+x, 1008,hearth.GetPixel(8, 13));
  screen.PutPixel( 957+x, 1008,hearth.GetPixel(8, 13));
  screen.PutPixel( 955+x, 1008,hearth.GetPixel(8, 13));
  screen.PutPixel( 958+x, 1008,hearth.GetPixel(8, 13));
  screen.PutPixel( 953+x, 1008,hearth.GetPixel(8, 13));
  screen.PutPixel( 959+x, 1008,hearth.GetPixel(8, 13));
  screen.PutPixel( 952+x, 1008,hearth.GetPixel(8, 13));
  screen.PutPixel( 960+x, 1008,hearth.GetPixel(8, 13));
  screen.PutPixel( 951+x, 1008,hearth.GetPixel(8, 13));
  screen.PutPixel( 961+x, 1008,hearth.GetPixel(8, 13));
  screen.PutPixel( 950+x, 1008,hearth.GetPixel(8, 13));
  screen.PutPixel( 962+x, 1008,hearth.GetPixel(8, 13));
  screen.PutPixel( 949+x, 1008,hearth.GetPixel(8, 13));
  screen.PutPixel( 963+x, 1008,hearth.GetPixel(8, 13));




  screen.PutPixel( 954+x, 1009,hearth.GetPixel(8, 13));
  screen.PutPixel( 956+x, 1009,hearth.GetPixel(8, 13));
  screen.PutPixel( 957+x, 1009,hearth.GetPixel(8, 13));
  screen.PutPixel( 955+x, 1009,hearth.GetPixel(8, 13));
  screen.PutPixel( 958+x, 1009,hearth.GetPixel(8, 13));
  screen.PutPixel( 953+x, 1009,hearth.GetPixel(8, 13));
  screen.PutPixel( 959+x, 1009,hearth.GetPixel(8, 13));
  screen.PutPixel( 952+x, 1009,hearth.GetPixel(8, 13));
  screen.PutPixel( 960+x, 1009,hearth.GetPixel(8, 13));
  screen.PutPixel( 951+x, 1009,hearth.GetPixel(8, 13));
  screen.PutPixel( 961+x, 1009,hearth.GetPixel(8, 13));
  screen.PutPixel( 950+x, 1009,hearth.GetPixel(8, 13));
  screen.PutPixel( 962+x, 1009,hearth.GetPixel(8, 13));
  screen.PutPixel( 949+x, 1009,hearth.GetPixel(8, 13));
  screen.PutPixel( 963+x, 1009,hearth.GetPixel(8, 13));



  screen.PutPixel( 954+x, 1010,hearth.GetPixel(8, 13));
  screen.PutPixel( 956+x, 1010,hearth.GetPixel(8, 13));
  screen.PutPixel( 957+x, 1010,hearth.GetPixel(8, 13));
  screen.PutPixel( 955+x, 1010,hearth.GetPixel(8, 13));
  screen.PutPixel( 958+x, 1010,hearth.GetPixel(8, 13));
  screen.PutPixel( 953+x, 1010,hearth.GetPixel(8, 13));
  screen.PutPixel( 959+x, 1010,hearth.GetPixel(8, 13));
  screen.PutPixel( 952+x, 1010,hearth.GetPixel(8, 13));
  screen.PutPixel( 960+x, 1010,hearth.GetPixel(8, 13));
  screen.PutPixel( 951+x, 1010,hearth.GetPixel(8, 13));
  screen.PutPixel( 961+x, 1010,hearth.GetPixel(8, 13));
  screen.PutPixel( 950+x, 1010,hearth.GetPixel(8, 13));
  screen.PutPixel( 962+x, 1010,hearth.GetPixel(8, 13));
  screen.PutPixel( 949+x, 1010,hearth.GetPixel(8, 13));
  screen.PutPixel( 963+x, 1010,hearth.GetPixel(8, 13));








  screen.PutPixel( 954+x, 1011,hearth.GetPixel(8, 13));
  screen.PutPixel( 957+x, 1011,hearth.GetPixel(8, 13));
  screen.PutPixel( 955+x, 1011,hearth.GetPixel(8, 13));
  screen.PutPixel( 958+x, 1011,hearth.GetPixel(8, 13));
  screen.PutPixel( 953+x, 1011,hearth.GetPixel(8, 13));
  screen.PutPixel( 959+x, 1011,hearth.GetPixel(8, 13));
  screen.PutPixel( 952+x, 1011,hearth.GetPixel(8, 13));
  screen.PutPixel( 960+x, 1011,hearth.GetPixel(8, 13));
  screen.PutPixel( 951+x, 1011,hearth.GetPixel(8, 13));
  screen.PutPixel( 961+x, 1011,hearth.GetPixel(8, 13));
  screen.PutPixel( 950+x, 1011,hearth.GetPixel(8, 13));
  screen.PutPixel( 962+x, 1011,hearth.GetPixel(8, 13));






  screen.PutPixel( 954+x, 1012,hearth.GetPixel(8, 13));
  screen.PutPixel( 958+x, 1012,hearth.GetPixel(8, 13));
  screen.PutPixel( 953+x, 1012,hearth.GetPixel(8, 13));
  screen.PutPixel( 959+x, 1012,hearth.GetPixel(8, 13));
  screen.PutPixel( 952+x, 1012,hearth.GetPixel(8, 13));
  screen.PutPixel( 960+x, 1012,hearth.GetPixel(8, 13));
  screen.PutPixel( 951+x, 1012,hearth.GetPixel(8, 13));
  screen.PutPixel( 961+x, 1012,hearth.GetPixel(8, 13));


}



struct InputState
{
  bool keys[1024]{}; //массив состояний кнопок - нажата/не нажата
  GLfloat lastX = 400, lastY = 300; //исходное положение мыши
  bool firstMouse = true;
  bool captureMouse         = true;  // Мышка захвачена нашим приложением или нет?
  bool capturedMouseJustNow = false;
} static Input;


GLfloat deltaTime = 0.0f;
GLfloat lastFrame = 0.0f;


void OnKeyboardPressed(GLFWwindow* window, int key, int scancode, int action, int mode)
{
	switch (key)
	{
	case GLFW_KEY_ESCAPE:
		if (action == GLFW_PRESS)
			glfwSetWindowShouldClose(window, GL_TRUE);
		break;
  case GLFW_KEY_1:
    glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);
    break;
  case GLFW_KEY_2:
    glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
    break;
	default:
		if (action == GLFW_PRESS)
      Input.keys[key] = true;
		else if (action == GLFW_RELEASE)
      Input.keys[key] = false;
	}
}

void processPlayerMovement(Player &player)
{
  if (Input.keys[GLFW_KEY_W])
    player.ProcessInput(MovementDir::UP);
  else if (Input.keys[GLFW_KEY_S])
    player.ProcessInput(MovementDir::DOWN);
  if (Input.keys[GLFW_KEY_A])
    player.ProcessInput(MovementDir::LEFT);
  else if (Input.keys[GLFW_KEY_D])
    player.ProcessInput(MovementDir::RIGHT);
}

void OnMouseButtonClicked(GLFWwindow* window, int button, int action, int mods)
{
  if (button == GLFW_MOUSE_BUTTON_RIGHT && action == GLFW_RELEASE)
    Input.captureMouse = !Input.captureMouse;

  if (Input.captureMouse)
  {
    glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
    Input.capturedMouseJustNow = true;
  }
  else
    glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);

}

void OnMouseMove(GLFWwindow* window, double xpos, double ypos)
{
  if (Input.firstMouse)
  {
    Input.lastX = float(xpos);
    Input.lastY = float(ypos);
    Input.firstMouse = false;
  }

  GLfloat xoffset = float(xpos) - Input.lastX;
  GLfloat yoffset = Input.lastY - float(ypos);

  Input.lastX = float(xpos);
  Input.lastY = float(ypos);
}


void OnMouseScroll(GLFWwindow* window, double xoffset, double yoffset)
{
  // ...
}


int initGL()
{
	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		std::cout << "Failed to initialize OpenGL context" << std::endl;
		return -1;
	}

	std::cout << "Vendor: " << glGetString(GL_VENDOR) << std::endl;
	std::cout << "Renderer: " << glGetString(GL_RENDERER) << std::endl;
	std::cout << "Version: " << glGetString(GL_VERSION) << std::endl;
	std::cout << "GLSL: " << glGetString(GL_SHADING_LANGUAGE_VERSION) << std::endl;

  std::cout << "Controls: "<< std::endl;
  std::cout << "press right mouse button to capture/release mouse cursor  "<< std::endl;
  std::cout << "W, A, S, D - movement  "<< std::endl;
  std::cout << "press ESC to exit" << std::endl;

	return 0;
}

int main(int argc, char** argv)
{
	if(!glfwInit())
    return -1;


  int M = 56;
  int **Wall_m = nullptr;
  Wall_m = new int*[M];
  for(int i = 0; i < M; i++){
    Wall_m[i] = new int[M];
  }

  for(int i = 0; i < M; i++){
    for(int j = 0; j < M; j++){
      Wall_m[i][j] = 0;
    }
  }
  int ch = 0;
//	СОЗДАЕМ ОКНО
	glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

  GLFWwindow*  window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "task1 base project", nullptr, nullptr);
	if (window == nullptr)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}
	
	glfwMakeContextCurrent(window); 
// ЗАКОНЧИЛИ СОЗДАВАТЬ ОКНО





	glfwSetKeyCallback        (window, OnKeyboardPressed);  
	glfwSetCursorPosCallback  (window, OnMouseMove); 
  glfwSetMouseButtonCallback(window, OnMouseButtonClicked);
	glfwSetScrollCallback     (window, OnMouseScroll);

	if(initGL() != 0) 
		return -1;
	
  //Reset any OpenGL errors which could be present for some reason
	GLenum gl_error = glGetError();
	while (gl_error != GL_NO_ERROR)
		gl_error = glGetError();


	Image img("../resources/tex.png");
	Image screenBuffer(WINDOW_WIDTH, WINDOW_HEIGHT, 4);

  glViewport(0, 0, WINDOW_WIDTH, WINDOW_HEIGHT);  GL_CHECK_ERRORS; // Первые 2 аргумента функции glViewport — это позиция нижнего левого угла окна. Третий и четвертый — это ширина и высота отрисовываемого окна в px
  glClearColor(0.0f, 0.0f, 0.0f, 1.0f); GL_CHECK_ERRORS;
  int action = 0;
  Image backgroung("./resources/tex.png");
  Image Wall("./resources/Wall.png");
  Image dead("./resources/dead.jpg");
  Image trap("./resources/trap.png");
  Image door("./resources/door.png");
  Image nothing("./resources/void.png");
  Image trap1("./resources/trap1.png");
  Image trap2("./resources/trap2.png");
  Image you_won("./resources/win.png");
  Image new_leve("./resources/level_up.png");
  int die = 0;
  int open_trap = 0;
  int timing = 0;
  char check;
  int count = 0;
  Player player;
  Hearth hearth;
  int room = 0;
  int blink = 0;
  int move_x = 0;
  int move_y = 0;
  //game loop  ОТРИСОВОЧКА
	while (!glfwWindowShouldClose(window))
	{
    if(player.wait != 0){
      player.wait -= 1;
    }
    if(count == 0){
      std::ifstream fin;
      std::ifstream fin1;
      fin.open("./resources/map_bild.txt");
      fin1.open("./resources/map_bild2.txt");
      for(int x = 0; x < M; ++x)
      {
        for(int y = 0; y < M; ++y)
        {
          if(room == 0){
            check = fin.get();
            if(check == '\n'){
              check = fin.get();
            }
          }
          else{
            check = fin1.get();
            if(check == '\n'){
              check = fin1.get();
            }
          }
         // std::cout << check << std::endl;
          if(check == '@'){
            move_x = (y-8)*64;
            move_y = (x-8)*64;
            Point starting_pos{.x = 8*64, .y = 8*64}; // СТАРТОВАЯ ПОЗИЦИЯ
            player.coords = starting_pos;
            std::cout << y << ' ' << x << std::endl;
            std::cout << starting_pos.x << ' ' << starting_pos.y << std::endl;
         //   std::cout << move_x << ' ' << move_y << std::endl;
          }
         // std::cout << move_x << ' ' << move_y << std::endl; 
        }
       // std::cout << move_x << ' ' << move_y << std::endl;
      }
      //std::cout << move_x << ' ' << move_y << std::endl;
      count++;
      fin.close();
      fin1.close();
    }
    //std::cout << move_x << ' ' << move_y << std::endl;
    timing++;
    if(timing == 60){
      open_trap++;
      open_trap = open_trap % 2;
      timing = 0;
    }
		GLfloat currentFrame = glfwGetTime();
		deltaTime = currentFrame - lastFrame;
		lastFrame = currentFrame;
    std::ifstream fin;
    std::ifstream fin1;
    fin.open("./resources/map_bild.txt");
    fin1.open("./resources/map_bild2.txt");
   // std::cout << move_x << ' ' << move_y << std::endl;
    for(int x = 0; x < M; ++x)
    {
      for(int y = 0; y < M; ++y)
      {
        if(room == 0){
          check = fin.get();
          if(check == '\n'){
            check = fin.get();
          }
        }
        else{
          check = fin1.get();
          if(check == '\n'){
            check = fin1.get();
          }
        }
        //std::cout << x << ' ' << y << ' ' << check << std::endl;
        if(check == '.' || check == '@'){
          Wall_m[y][x] = 2;
          for(int x1 = 0; x1 <= 64; ++x1)
          {
            for(int y1 = 0; y1 <= 64; ++y1)
            {
              //if(y == 0 || x == 0){
              if(y*64+y1 >= move_x and y*64+y1 <= 1024 + move_x and x*64+x1 >= move_y and x*64+x1 <= 1024 + move_y)
                screenBuffer.PutPixel(y*64+y1-move_x, x*64+x1 - move_y, backgroung.GetPixel(x1, y1));
              //}
            }
          }
        }



        if(check == 'X'){
          Wall_m[y][x] = 10;
          for(int x1 = 0; x1 <= 64; ++x1)
          {
            for(int y1 = 0; y1 <= 64; ++y1)
            {
              if(y*64+y1 >= move_x and y*64+y1 <= 1024 + move_x and x*64+x1 >= move_y and x*64+x1 <= 1024 + move_y)
                screenBuffer.PutPixel(y*64+y1-move_x, x*64+x1- move_y, door.GetPixel(y1,64 - x1));
            }
          }
        }

        if(check == ' '){
          for(int x1 = 0; x1 <= 64; ++x1)
          {
            for(int y1 = 0; y1 <= 64; ++y1)
            {
              if(y*64+y1 >= move_x and y*64+y1 <= 1024 + move_x and x*64+x1 >= move_y and x*64+x1 <= 1024 + move_y)
                screenBuffer.PutPixel(y*64+y1-move_x, x*64+x1- move_y, nothing.GetPixel(y1,64 - x1));
            }
          }
        }



        else if(check == '#'){
          Wall_m[y][x] = 1;

          for(int x1 = 0; x1 <= 64; ++x1)
          {
            for(int y1 = 0; y1 <= 64; ++y1)
            {
              //if(y == 0 || x == 0){
              if(y*64+y1 >= move_x and y*64+y1 <= 1024 + move_x and x*64+x1 >= move_y and x*64+x1 <= 1024 + move_y)
                screenBuffer.PutPixel(y*64+y1-move_x, x*64+x1- move_y, Wall.GetPixel(x1, y1));
              //}
            }
          }
        }



        else if(check == 'T' and open_trap == 0){
          Wall_m[y][x] = 8;

          for(int x1 = 0; x1 <= 64; ++x1)
          {
            for(int y1 = 0; y1 <= 64; ++y1)
            {
              //if(y == 0 || x == 0){
              if(y*64+y1 >= move_x and y*64+y1 <= 1024 + move_x and x*64+x1 >= move_y and x*64+x1 <= 1024 + move_y){
                if(blink < 20){
                  screenBuffer.PutPixel(y*64+y1-move_x, x*64+x1- move_y, trap1.GetPixel(y1, 64 - x1));
                  blink++;
                }
                if(blink >= 20 and blink < 40){
                  screenBuffer.PutPixel(y*64+y1-move_x, x*64+x1- move_y, trap2.GetPixel(y1, 64 - x1));
                  blink++;
                }
                if(blink >= 40){
                  screenBuffer.PutPixel(y*64+y1-move_x, x*64+x1- move_y, trap.GetPixel(y1, 64 - x1));
                  blink++;
                  if(blink == 60){
                    blink = 0;
                  }
                }
              }
              //}
            }
          }
        }
        else if(check == 'T' and open_trap == 1){
          Wall_m[y][x] = 8;

          for(int x1 = 0; x1 <= 64; ++x1)
          {
            for(int y1 = 0; y1 <= 64; ++y1)
            {
              //if(y == 0 || x == 0){
              if(y*64+y1 >= move_x and y*64+y1 <= 1024 + move_x and x*64+x1 >= move_y and x*64+x1 <= 1024 + move_y)
                screenBuffer.PutPixel(y*64+y1-move_x, x*64+x1- move_y, backgroung.GetPixel(y1, 64 - x1));
              //}
            }
          }
        }
      }
    }
    if(ch == 0){
  
      for(int i = 0; i < M; i++){
        for(int j = 0; j < M; j++){
       //   std::cout << Wall_m[j][i] << ' ';
        }
       // std::cout << std::endl;
      }
    }
    ch++;
    glfwPollEvents();



    
    if (Input.keys[GLFW_KEY_W] and Wall_m[(player.old_coords.x+move_x)/64][(player.old_coords.y +move_y +4)/64 + 1] != 1 
      and Wall_m[(player.old_coords.x + 64+move_x)/64][(player.old_coords.y+move_y  + 64+4)/64] != 1){
      player.Draw(screenBuffer,MovementDir::UP);
      processPlayerMovement(player);
      move_y += 4;
    }
    else if (Input.keys[GLFW_KEY_S] and Wall_m[(player.old_coords.x + move_x)/64][(player.old_coords.y+move_y-4)/64] != 1 
      and Wall_m[(player.old_coords.x+move_x)/64+1][(player.old_coords.y+move_y-4)/64] != 1){
      //std::cout << move_x << ' ' << move_y <<std::endl;
      player.Draw(screenBuffer,MovementDir::DOWN);
      processPlayerMovement(player);
      move_y -= 4;
    }
    else if (Input.keys[GLFW_KEY_A] and Wall_m[(player.old_coords.x+move_x-4)/64][(player.old_coords.y+move_y)/64] != 1 
      and Wall_m[(player.old_coords.x+move_x-4)/64][(player.old_coords.y+move_y )/64 + 1] != 1){
      player.Draw(screenBuffer,MovementDir::LEFT);
      processPlayerMovement(player);
      move_x -= 4;
    }
    else if (Input.keys[GLFW_KEY_D] and Wall_m[(player.old_coords.x+move_x+4)/64+1][(player.old_coords.y+move_y)/64] != 1
      and Wall_m[(player.old_coords.x +move_x+ 64+4)/64][(player.old_coords.y+move_y + 64)/64] != 1){
      player.Draw(screenBuffer,MovementDir::RIGHT);
      processPlayerMovement(player);
      move_x += 4;
    }
    else
      player.Draw(screenBuffer,MovementDir::DOWN);
    if(((Wall_m[(player.old_coords.x+move_x)/64][(player.old_coords.y+move_y)/64] == 0 
      and Wall_m[(player.old_coords.x + 32+move_x)/64][(player.old_coords.y+move_y)/64] == 0) 
      or (Wall_m[(player.old_coords.x+move_x)/64 + 1][(player.old_coords.y+move_y)/64] == 0 
      and Wall_m[(player.old_coords.x + 32+move_x)/64][(player.old_coords.y+move_y)/64] == 0)) or die == 1){
      for(int x1 = 0; x1 <= 584; ++x1)
      {
        for(int y1 = 0; y1 <= 584; ++y1)
        {
          screenBuffer.PutPixel(220+y1, 220+x1, dead.GetPixel(y1, 584 - x1));
        }
      }
      glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); GL_CHECK_ERRORS;
      glDrawPixels (WINDOW_WIDTH, WINDOW_HEIGHT, GL_RGBA, GL_UNSIGNED_BYTE, screenBuffer.Data()); GL_CHECK_ERRORS;
      glfwSwapBuffers(window);
      sleep(5);
      glfwTerminate();
      fin1.close();
      fin.close();
      for(int i = 0; i < M; i++){
        delete [] Wall_m[i];
      }
      delete [] Wall_m;
      return 0;
    }





    if(((Wall_m[(player.old_coords.x+move_x)/64][(player.old_coords.y+move_y)/64] == 8 
      and Wall_m[(player.old_coords.x+move_x + 32)/64][(player.old_coords.y+move_y)/64] == 8) 
      or (Wall_m[(player.old_coords.x+move_x)/64 + 1][(player.old_coords.y+move_y)/64] == 8 
      and Wall_m[(player.old_coords.x + 32+move_x)/64][(player.old_coords.y+move_y)/64] == 8)) and open_trap == 0 and player.wait == 0){
      player.hitpoint -= 1;
      player.wait = 30;
    }



    if(Wall_m[(player.old_coords.x+move_x)/64][(player.old_coords.y+move_y)/64] == 10
      or Wall_m[(player.old_coords.x+move_x)/64 + 1][(player.old_coords.y+move_y)/64+1] == 10
      or Wall_m[(player.old_coords.x+move_x)/64][(player.old_coords.y+move_y)/64+1] == 10
      or Wall_m[(player.old_coords.x+move_x)/64 + 1][(player.old_coords.y+move_y)/64] == 10){
      action++;
      if(room == 0){
        room++;
        count = 0;
        for(int x1 = 0; x1 <= 700; ++x1)
        {
          for(int y1 = 0; y1 <= 700; ++y1)
          {
            player.hitpoint = 4;
            screenBuffer.PutPixel(162+y1, 162+x1, new_leve.GetPixel(y1, 700 - x1));
            move_x = 0;
            move_y = 0;
          }
        }
      }
      else{
        for(int x1 = 1; x1 <= 700; ++x1)
        {
          for(int y1 = 1; y1 <= 700; ++y1)
          {
            screenBuffer.PutPixel(162+y1, 162+x1, you_won.GetPixel(y1, 700 - x1));
          }
        }
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); GL_CHECK_ERRORS;
        glDrawPixels (WINDOW_WIDTH, WINDOW_HEIGHT, GL_RGBA, GL_UNSIGNED_BYTE, screenBuffer.Data()); GL_CHECK_ERRORS;
        glfwSwapBuffers(window);
        sleep(5);
        glfwTerminate();
        fin1.close();
        fin.close();
        for(int i = 0; i < M; i++){
          delete [] Wall_m[i];
        }
        delete [] Wall_m;
        return 0;
      }
    }

    if(player.hitpoint > 0){
      for(int live = 0; live < player.hitpoint; live++){
        hearth.Draw(live*20, screenBuffer);
      }
    }
    else{
      die = 1;
    }




    //player.Draw(screenBuffer, MovementDir);

		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); GL_CHECK_ERRORS;
    glDrawPixels (WINDOW_WIDTH, WINDOW_HEIGHT, GL_RGBA, GL_UNSIGNED_BYTE, screenBuffer.Data()); GL_CHECK_ERRORS;
		glfwSwapBuffers(window);
    if(action == 1){
      sleep(2);
      action = 0;
    }
    fin1.close();
    fin.close();
	}

	glfwTerminate();
  for(int i = 0; i < M; i++){
    delete [] Wall_m[i];
  }
  delete [] Wall_m;
	return 0;
}
