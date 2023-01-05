Janelle Dawson



This is a simple dragon escape game assigned by Dr. Robert Marmorstein and updated by
his students. My updated version relies heavily on the SSDL library by Dr. Will Briggs, 
which must be installed for this software to work.




What did I change?
	- I printed the game to the screen using SSDL.
	- I created images for the different characters/items (player, dragons, and 
	  treasure), as well as a checkered image to represent grass.
	- I had to make the 30x30 pixel characters go into a random 30x30 block of
	  grass.
	- I added music that plays during the game, as well as when you die from a 
	  dragon. (All music is from FreeSounds).
	- I added a window title, which is what I decided to name this verison of
	  the game.
	- The screen now refreshes each time the player is moved.
	- I added more dragons into the game.




HOW TO PLAY:

	- compile: make
	- run: ./Dragon
	
	- To play this game, you will need to move your character
	  using N, S, E, W, while dodging the dragons! Be sure
	  that you use all uppercase letters! Try your best to
	  collect as much treasure as you can by picking up the
	  treasure chests!

	Note: There are some glitches in the game. If a dragon travels over the chest,
	      the treasure will appear to have disappeared from its spot. It is still
	      there, the image has just disappeared. 
	      If you move your character to a spot a dragon was previously standing at,
	      it will look like your character has disapeared. Your character is still
	      there, just move them again and the image will reappear.
