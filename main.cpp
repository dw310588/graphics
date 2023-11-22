#include <GLFW/glfw3.h>

#define WIDTH 0.7 * 1920
#define HEIGHT 0.7 * 1080 

int main() {
  glfwInit();
  glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
  GLFWwindow *win;
  win = glfwCreateWindow(WIDTH,HEIGHT,"Graphics",0,0);

  while(1) ;
  return 0;
}
