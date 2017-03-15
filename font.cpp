#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <string>
#include "font.hpp"
std::string custchar[35][8] = {
 {
   "00110", // 1
   "01010",
   "10010",
   "00010",
   "00010",
   "00010",
   "00010",
   "00010"
 }, {
   "01100", //2
   "10010",
   "00001",
   "00010",
   "00100",
   "01000",
   "10000",
   "11111"
 }, {
   "01110", //3
   "10001",
   "00001",
   "00111",
   "00001",
   "00001",
   "10001",
   "01110"
 }, {
   "00011",
   "00101", //4
   "01001",
   "10001",
   "11111",
   "00001",
   "00001",
   "00001"
 }, {
   "11111",
   "10000", //5
   "10000",
   "11110",
   "00001",
   "00001",
   "00001",
   "11111"
 }, {
   "00111",
   "01000", //6
   "10000",
   "10000",
   "11111",
   "10001",
   "10001",
   "01110"
 }, {
   "11111",
   "00001",
   "00010",
   "00100",
   "00100",
   "01000",
   "01000",
   "10000"
 }, {
   "01110",
   "10001",
   "10001",
   "01110",
   "10001",
   "10001",
   "10001",
   "01110"
 }, {
   "01110",
   "10001",
   "10001",
   "01110",
   "00001",
   "00001",
   "00001",
   "01110"
		 }, {
   "00100",
   "00100",
   "01010",
   "01010",
   "01010",
   "11111",
   "10001",
   "10001"
 }, {
   "11110",
   "10001",
   "10001",
   "10001",
   "11110",
   "10001",
   "10001",
   "11111"
 } , {
   "01110",
   "10001",
   "10000",
   "10000",
   "10000",
   "10000",
   "10001",
   "01110"
 }, {
   "11100",
   "10010",
   "10010",
   "10001",
   "10001",
   "10010",
   "10010",
   "11100"
 } , {
   "01111",
   "10000",
   "10000",
   "11111",
   "10000",
   "10000",
   "10000",
   "01111"
 } , {
   "01111",
   "10000",
   "10000",
   "10000",
   "11111",
   "10000",
   "10000",
   "10000"
 } , {
   "00111",
   "01000",
   "10000",
   "10000",
   "10110",
   "10010",
   "10010",
   "01110"
 } , {
   "10001",
   "10001",
   "10001",
   "11111",
   "10001",
   "10001",
   "10001",
   "10001"
 }, {
   "00100",
   "00000",
   "00100",
   "00100",
   "00100",
   "00100",
   "00100",
   "00100"
 }, {
   "00111",
   "00001",
   "00001",
   "00001",
   "00001",
   "10001",
   "01101",
   "00110" }
 , {
   "10001",
   "10010",
   "10100",
   "11000",
   "11000",
   "10100",
   "10010",
   "10001" }
 , {
   "10000",
   "10000",
   "10000",
   "10000",
   "10000",
   "10000",
   "10000",
   "11111"
 }, {
   "11011",
   "11011",
   "10101",
   "10001",
   "10001",
   "10001",
   "10001",
   "10001"
 }, {
   "11001",
   "11001",
   "11001",
   "10101",
   "10101",
   "10101",
   "10011",
   "10011"
 }, {
   "11111",
   "10001",
   "10001",
   "10001",
   "10001",
   "10001",
   "10001",
   "11111" }
 , {
   "11111",
   "10001",
   "10001",
   "11111",
   "10000",
   "10000",
   "10000",
   "10000"
 }, {
   "11111",
   "10001",
   "10001",
   "10001",
   "10001",
   "10001",
   "11111",
   "00001"
} , {
   "11111",
   "10001",
   "10001",
   "11111",
   "11000",
   "10100",
   "10010",
   "10001"
 } , {
   "00011",
   "01100",
   "10000",
   "10000",
   "01100",
   "00011",
   "10001",
   "01111"
 } , {
   "11111",
   "00100",
   "00100",
   "00100",
   "00100",
   "00100",
   "00100",
   "00100"
 } , {
   "10001",
   "10001",
   "10001",
   "10001",
   "10001",
   "10001",
   "10001",
   "01110"
 } , {
   "10001",
   "10001",
   "01010",
   "01010",
   "01010",
   "01010",
   "00100",
   "00100"
 } , {
   "10101",
   "10101",
   "10101",
   "10101",
   "11111",
   "01010",
   "01010",
   "01010"
 } , {
   "10001",
   "10001",
   "01010",
   "01010",
   "01100",
   "01100",
   "10010",
   "10001"
 } , {
   "10001",
   "10001",
   "01010",
   "01010",
   "00100",
   "00100",
   "00100",
   "00100"
 } , {
   "11111",
   "00001",
   "00001",
   "00010",
   "00100",
   "01000",
   "10000",
   "11111"
 }















};
