#!/usr/bin/python3

import glitterpy
import cgi

def main():

  glitterpy.header("Fashion Fabulous!")
  form = cgi.FieldStorage()

  #Helped by Andrew - I was confused on how to get the value of a Radio Button. I also got help from you
  hat = form.getvalue("hat", "Cap")
  top = form.getvalue("fit", "Blue")
  bottom = form.getvalue("bottom", "Jeans")


  #Blue and Jeans w/ Hat	
  if top == "Blue" and bottom == "Jeans" and hat == "Cap":
  	print('<img src="BlueJeans_Cap" alt="Girl wearing blue shirt with jeans and baseball cap." />')
  if top == "Blue" and bottom == "Jeans" and hat == "Bow":
  	print('<img src="BlueJeans_Bow" alt="Girl wearing blue shirt with jeans and pink bow." />')
  if top == "Blue" and bottom == "Jeans" and hat == "Beanie":
  	print('<img src="BlueJeans_Beanie" alt="Girl wearing blue shirt with jeans and beanie." />')
  if top == "Blue" and bottom == "Jeans" and hat == "None":
  	print('<img src="BlueJeans" alt="Girl wearing blue shirt with jeans." />')
  if top == "Blue" and bottom == "Jeans" and hat == "Cowboy":
  	print('<img src="BlueJeans_Cowboy" alt="Girl wearing blue shirt with jeans and a cowboy hat." />')

 
  #Blue and Shorts w/ Hat	
  if top == "Blue" and bottom == "Shorts" and hat == "Cap":
  	print('<img src="BlueShorts_Cap" alt="Girl wearing blue shirt with shorts and baseball cap." />')
  if top == "Blue" and bottom == "Shorts" and hat == "Bow":
  	print('<img src="BlueShorts_Bow" alt="Girl wearing blue shirt with shorts and pink bow." />')
  if top == "Blue" and bottom == "Shorts" and hat == "Beanie":
  	print('<img src="BlueShorts_Beanie" alt="Girl wearing blue shirt with shorts and beanie." />')
  if top == "Blue" and bottom == "Shorts" and hat == "None":
  	print('<img src="BlueShorts" alt="Girl wearing blue shirt with shorts." />')
  if top == "Blue" and bottom == "Shorts" and hat == "Cowboy":
  	print('<img src="BlueShorts_Cowboy" alt="Girl wearing blue shirt with shorts and a cowboy hat." />')


  #Blue and Leggings w/ Hat	
  if top == "Blue" and bottom == "Leggings" and hat == "Cap":
  	print('<img src="BlueLeggings_Cap" alt="Girl wearing blue shirt with leggings and baseball cap." />')
  if top == "Blue" and bottom == "Leggings" and hat == "Bow":
  	print('<img src="BlueLeggings_Bow" alt="Girl wearing blue shirt with leggings and pink bow." />')
  if top == "Blue" and bottom == "Leggings" and hat == "Beanie":
  	print('<img src="BlueLeggings_Beanie" alt="Girl wearing blue shirt with leggings and beanie." />')
  if top == "Blue" and bottom == "Leggings" and hat == "None":
  	print('<img src="BlueLeggings" alt="Girl wearing blue shirt with leggings." />')
  if top == "Blue" and bottom == "Leggings" and hat == "Cowboy":
  	print('<img src="BlueLeggings_Cowboy" alt="Girl wearing blue shirt with leggings and a cowboy hat." />')


  #Blue and Skirt w/ Hat	
  if top == "Blue" and bottom == "Skirt" and hat == "Cap":
  	print('<img src="BlueSkirt_Cap" alt="Girl wearing blue shirt with skirt and baseball cap." />')
  if top == "Blue" and bottom == "Skirt" and hat == "Bow":
  	print('<img src="BlueSkirt_Bow" alt="Girl wearing blue shirt with skirt and pink bow." />')
  if top == "Blue" and bottom == "Skirt" and hat == "Beanie":
  	print('<img src="BlueSkirt_Beanie" alt="Girl wearing blue shirt with skirt and beanie." />')
  if top == "Blue" and bottom == "Skirt" and hat == "None":
  	print('<img src="BlueSkirt" alt="Girl wearing blue shirt with skirt." />')
  if top == "Blue" and bottom == "Skirt" and hat == "Cowboy":
  	print('<img src="BlueSkirt_Cowboy" alt="Girl wearing blue shirt with skirt and a cowboy hat." />')


#.....................................................................................................................................


  #Green and Jeans w/ Hat	
  if top == "Green" and bottom == "Jeans" and hat == "Cap":
  	print('<img src="GreenJeans_Cap" alt="Girl wearing green shirt with jeans and baseball cap." />')
  if top == "Green" and bottom == "Jeans" and hat == "Bow":
  	print('<img src="GreenJeans_Bow" alt="Girl wearing green shirt with jeans and pink bow." />')
  if top == "Green" and bottom == "Jeans" and hat == "Beanie":
  	print('<img src="GreenJeans_Beanie" alt="Girl wearing green shirt with jeans and beanie." />')
  if top == "Green" and bottom == "Jeans" and hat == "None":
  	print('<img src="GreenJeans" alt="Girl wearing green shirt with jeans." />')
  if top == "Green" and bottom == "Jeans" and hat == "Cowboy":
  	print('<img src="GreenJeans_Cowboy" alt="Girl wearing green shirt with jeans and a cowboy hat." />')

 
  #Green and Shorts w/ Hat	
  if top == "Green" and bottom == "Shorts" and hat == "Cap":
  	print('<img src="GreenShorts_Cap" alt="Girl wearing green shirt with shorts and baseball cap." />')
  if top == "Green" and bottom == "Shorts" and hat == "Bow":
  	print('<img src="GreenShorts_Bow" alt="Girl wearing green shirt with shorts and pink bow." />')
  if top == "Green" and bottom == "Shorts" and hat == "Beanie":
  	print('<img src="GreenShorts_Beanie" alt="Girl wearing green shirt with shorts and beanie." />')
  if top == "Green" and bottom == "Shorts" and hat == "None":
  	print('<img src="GreenShorts" alt="Girl wearing green shirt with shorts." />')
  if top == "Green" and bottom == "Shorts" and hat == "Cowboy":
  	print('<img src="GreenShorts_Cowboy" alt="Girl wearing green shirt with shorts and a cowboy hat." />')


  #Green and Leggings w/ Hat	
  if top == "Green" and bottom == "Leggings" and hat == "Cap":
  	print('<img src="GreenLeggings_Cap" alt="Girl wearing green shirt with leggings and baseball cap." />')
  if top == "Green" and bottom == "Leggings" and hat == "Bow":
  	print('<img src="GreenLeggings_Bow" alt="Girl wearing green shirt with leggings and pink bow." />')
  if top == "Green" and bottom == "Leggings" and hat == "Beanie":
  	print('<img src="GreenLeggings_Beanie" alt="Girl wearing green shirt with leggings and beanie." />')
  if top == "Green" and bottom == "Leggings" and hat == "None":
  	print('<img src="GreenLeggings" alt="Girl wearing green shirt with leggings." />')
  if top == "Green" and bottom == "Leggings" and hat == "Cowboy":
  	print('<img src="GreenLeggings_Cowboy" alt="Girl wearing green shirt with leggings and a cowboy hat." />')


  #Green and Skirt w/ Hat	
  if top == "Green" and bottom == "Skirt" and hat == "Cap":
  	print('<img src="GreenSkirt_Cap" alt="Girl wearing green shirt with skirt and baseball cap." />')
  if top == "Green" and bottom == "Skirt" and hat == "Bow":
  	print('<img src="GreenSkirt_Bow" alt="Girl wearing green shirt with skirt and pink bow." />')
  if top == "Green" and bottom == "Skirt" and hat == "Beanie":
  	print('<img src="GreenSkirt_Beanie" alt="Girl wearing green shirt with skirt and beanie." />')
  if top == "Green" and bottom == "Skirt" and hat == "None":
  	print('<img src="GreenSkirt" alt="Girl wearing green shirt with skirt." />')
  if top == "Green" and bottom == "Skirt" and hat == "Cowboy":
  	print('<img src="GreenSkirt_Cowboy" alt="Girl wearing green shirt with skirt and a cowboy hat." />')


#.....................................................................................................................................


  #Purple and Jeans w/ Hat	
  if top == "Purple" and bottom == "Jeans" and hat == "Cap":
  	print('<img src="PurpleJeans_Cap" alt="Girl wearing purple shirt with jeans and baseball cap." />')
  if top == "Purple" and bottom == "Jeans" and hat == "Bow":
  	print('<img src="PurpleJeans_Bow" alt="Girl wearing purple shirt with jeans and pink bow." />')
  if top == "Purple" and bottom == "Jeans" and hat == "Beanie":
  	print('<img src="PurpleJeans_Beanie" alt="Girl wearing purple shirt with jeans and beanie." />')
  if top == "Purple" and bottom == "Jeans" and hat == "None":
  	print('<img src="PurpleJeans" alt="Girl wearing purple shirt with jeans." />')
  if top == "Purple" and bottom == "Jeans" and hat == "Cowboy":
  	print('<img src="PurpleJeans_Cowboy" alt="Girl wearing purple shirt with jeans and a cowboy hat." />')

 
  #Purple and Shorts w/ Hat	
  if top == "Purple" and bottom == "Shorts" and hat == "Cap":
  	print('<img src="PurpleShorts_Cap" alt="Girl wearing purple shirt with shorts and baseball cap." />')
  if top == "Purple" and bottom == "Shorts" and hat == "Bow":
  	print('<img src="PurpleShorts_Bow" alt="Girl wearing purple shirt with shorts and pink bow." />')
  if top == "Purple" and bottom == "Shorts" and hat == "Beanie":
  	print('<img src="PurpleShorts_Beanie" alt="Girl wearing purple shirt with shorts and beanie." />')
  if top == "Purple" and bottom == "Shorts" and hat == "None":
  	print('<img src="PurpleShorts" alt="Girl wearing purple shirt with shorts." />')
  if top == "Purple" and bottom == "Shorts" and hat == "Cowboy":
  	print('<img src="PurpleShorts_Cowboy" alt="Girl wearing purple shirt with shorts and a cowboy hat." />')


  #Purple and Leggings w/ Hat	
  if top == "Purple" and bottom == "Leggings" and hat == "Cap":
  	print('<img src="PurpleLeggings_Cap" alt="Girl wearing purple shirt with leggings and baseball cap." />')
  if top == "Purple" and bottom == "Leggings" and hat == "Bow":
  	print('<img src="PurpleLeggings_Bow" alt="Girl wearing purple shirt with leggings and pink bow." />')
  if top == "Purple" and bottom == "Leggings" and hat == "Beanie":
  	print('<img src="PurpleLeggings_Beanie" alt="Girl wearing purple shirt with leggings and beanie." />')
  if top == "Purple" and bottom == "Leggings" and hat == "None":
  	print('<img src="PurpleLeggings" alt="Girl wearing purple shirt with leggings." />')
  if top == "Purple" and bottom == "Leggings" and hat == "Cowboy":
  	print('<img src="PurpleLeggings_Cowboy" alt="Girl wearing purple shirt with leggings and a cowboy hat." />')


  #Purple and Skirt w/ Hat	
  if top == "Purple" and bottom == "Skirt" and hat == "Cap":
  	print('<img src="PurpleSkirt_Cap" alt="Girl wearing purple shirt with skirt and baseball cap." />')
  if top == "Purple" and bottom == "Skirt" and hat == "Bow":
  	print('<img src="PurpleSkirt_Bow" alt="Girl wearing purple shirt with skirt and pink bow." />')
  if top == "Purple" and bottom == "Skirt" and hat == "Beanie":
  	print('<img src="PurpleSkirt_Beanie" alt="Girl wearing purple shirt with skirt and beanie." />')
  if top == "Purple" and bottom == "Skirt" and hat == "None":
  	print('<img src="PurpleSkirt" alt="Girl wearing purple shirt with skirt." />')
  if top == "Purple" and bottom == "Skirt" and hat == "Cowboy":
  	print('<img src="PurpleSkirt_Cowboy" alt="Girl wearing purple shirt with skirt and a cowboy hat." />')


#...................................................................................................................................
	
  #Sundress and Leggings w/ Hat	
  if top == "Dress" and bottom == "Leggings" and hat == "Cap":
  	print('<img src="SundressLeggings_Cap" alt="Girl wearing yellow sundress with hearts on it with leggings and baseball cap." />')
  if top == "Dress" and bottom == "Leggings" and hat == "Bow":
  	print('<img src="SundressLeggings_Bow" alt="Girl wearing yellow sundress with hearts on it with leggings and pink bow." />')
  if top == "Dress" and bottom == "Leggings" and hat == "Beanie":
  	print('<img src="SundressLeggings_Beanie" alt="Girl wearing yellow sundress with hearts on it with leggings and beanie." />')
  if top == "Dress" and bottom == "Leggings" and hat == "None":
  	print('<img src="SundressLeggings" alt="Girl wearing yellow sundress with hearts on it with leggings." />')
  if top == "Dress" and bottom == "Leggings" and hat == "Cowboy":
  	print('<img src="SundressLeggings_Cowboy" alt="Girl wearing yellow sundress with hearts on it with leggings and a cowboy hat." />')


  #Sundress w/ Hat	
  if top == "Dress" and bottom == "Jeans" and hat == "Cap":
  	print('<img src="Sundress_Cap" alt="Girl wearing yellow sundress with hearts on it with and baseball cap." />')
  if top == "Dress" and bottom == "Jeans" and hat == "Bow":
  	print('<img src="Sundress_Bow" alt="Girl wearing yellow sundress with hearts on it and pink bow." />')
  if top == "Dress" and bottom == "Jeans" and hat == "Beanie":
  	print('<img src="Sundress_Beanie" alt="Girl wearing yellow sundress with hearts on it and beanie." />')
  if top == "Dress" and bottom == "Jeans" and hat == "None":
  	print('<img src="Sundress" alt="Girl wearing yellow sundress with hearts on it." />')
  if top == "Dress" and bottom == "Jeans" and hat == "Cowboy":
  	print('<img src="Sundress_Cowboy" alt="Girl wearing yellow sundress with hearts on it and a cowboy hat." />')


  #Sundress w/ Hat	
  if top == "Dress" and bottom == "Shorts" and hat == "Cap":
  	print('<img src="Sundress_Cap" alt="Girl wearing yellow sundress with hearts on it with and baseball cap." />')
  if top == "Dress" and bottom == "Shorts" and hat == "Bow":
  	print('<img src="Sundress_Bow" alt="Girl wearing yellow sundress with hearts on it and pink bow." />')
  if top == "Dress" and bottom == "Shorts" and hat == "Beanie":
  	print('<img src="Sundress_Beanie" alt="Girl wearing yellow sundress with hearts on it and beanie." />')
  if top == "Dress" and bottom == "Shorts" and hat == "None":
  	print('<img src="Sundress" alt="Girl wearing yellow sundress with hearts on it." />')
  if top == "Dress" and bottom == "Shorts" and hat == "Cowboy":
  	print('<img src="Sundress_Cowboy" alt="Girl wearing yellow sundress with hearts on it and a cowboy hat." />')


  #Sundress w/ Hat	
  if top == "Dress" and bottom == "Skirt" and hat == "Cap":
  	print('<img src="Sundress_Cap" alt="Girl wearing yellow sundress with hearts on it with and baseball cap." />')
  if top == "Dress" and bottom == "Skirt" and hat == "Bow":
  	print('<img src="Sundress_Bow" alt="Girl wearing yellow sundress with hearts on it and pink bow." />')
  if top == "Dress" and bottom == "Skirt" and hat == "Beanie":
  	print('<img src="Sundress_Beanie" alt="Girl wearing yellow sundress with hearts on it and beanie." />')
  if top == "Dress" and bottom == "Skirt" and hat == "None":
  	print('<img src="Sundress" alt="Girl wearing yellow sundress with hearts on it." />')
  if top == "Dress" and bottom == "Skirt" and hat == "Cowboy":
  	print('<img src="Sundress_Cowboy" alt="Girl wearing yellow sundress with hearts on it and a cowboy hat." />')


  #Sundress w/ Hat	
  if top == "Dress" and bottom == "Dress" and hat == "Cap":
  	print('<img src="Sundress_Cap" alt="Girl wearing yellow sundress with hearts on it with and baseball cap." />')
  if top == "Dress" and bottom == "Dress" and hat == "Bow":
  	print('<img src="Sundress_Bow" alt="Girl wearing yellow sundress with hearts on it and pink bow." />')
  if top == "Dress" and bottom == "Dress" and hat == "Beanie":
  	print('<img src="Sundress_Beanie" alt="Girl wearing yellow sundress with hearts on it and beanie." />')
  if top == "Dress" and bottom == "Dress" and hat == "None":
  	print('<img src="Sundress" alt="Girl wearing yellow sundress with hearts on it." />')
  if top == "Dress" and bottom == "Dress" and hat == "Cowboy":
  	print('<img src="Sundress_Cowboy" alt="Girl wearing yellow sundress with hearts on it and a cowboy hat." />')
main()
glitterpy.footer()
