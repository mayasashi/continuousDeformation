//
//  main.cpp
//  continuousDeformation_project
//
//  Created by 鶴拳 on 2018/04/04.
//  Copyright © 2018年 mayasashi. All rights reserved.
//

#include <iostream>
#include <GL/glfw3.h>   //must create folder named GL under usr_local_include or usr_include
#include <OpenGL/gl3.h>


int main(int argc, const char * argv[]) {
    if(!glfwInit()){
        printf("failed to init glfw."); return 0;
    }
    
    glfwTerminate();
    std::cout << "Hello, World!\n";
    return 0;
}