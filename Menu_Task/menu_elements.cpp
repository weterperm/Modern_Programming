//
// Created by alicee on 06.12.2023.
//
#include "menu_elements.h"
#include "element_functions.h"
// title; (*itemfunction); *parent; *children; children_count;

const alicee::MenuItem alicee::MAIN_LEVEL0{
    "Top lev", element_show_menu, nullptr, nullptr, 2
};