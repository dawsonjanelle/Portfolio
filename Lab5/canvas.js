var shape="BrownRectangle"
var x = 0
var y = 0

var svgns = "http://www.w3.org/2000/svg"	

function clearActive() {
 
 	var activeShapes = document.getElementsByClassName("active")
	if(activeShapes.length > 0) {
	  var curShape = activeShapes[0]
	  curShape.setAttribute("class","shape")
	}
}

function setBrownRect() {
	
  	clearActive();
	shape = "BrownRectangle"
	var rectTool = document.getElementById("rect1")
	rectTool.setAttribute("class", "shape active");
}


function setBlueRect() {
	
  	clearActive();
	shape = "BlueRectangle"
	var rectTool = document.getElementById("rect2")
	rectTool.setAttribute("class", "shape active");
}

function setGreenCircle() {

  	clearActive();
	shape = "GreenCircle"
	var circleTool = document.getElementById("circle1")
	circleTool.setAttribute("class", "shape active");
}

function setPinkCircle() {

  	clearActive();
	shape = "PinkCircle"
	var circleTool = document.getElementById("circle2")
	circleTool.setAttribute("class", "shape active");
}


function draw(event) {

  	var canvas = document.getElementById("innerCanvas")
	var newShape = 0;

	xoff = canvas.getBoundingClientRect().left;
	yoff = canvas.getBoundingClientRect().top;

	x = event.clientX - xoff
	y = event.clientY - yoff

	if(shape == "BrownRectangle")
	{
	  	newShape = document.createElementNS(svgns, "rect") /*My brother and I figured out that these had to stay as "rect" and "circle." */
		newShape.setAttribute("x", x);
		newShape.setAttribute("y", y);
		newShape.setAttribute("width", "10");
		newShape.setAttribute("height", "10");
		newShape.setAttribute("fill", "brown");
	}
	else if(shape == "BlueRectangle")
	{
	  	newShape = document.createElementNS(svgns, "rect")
		newShape.setAttribute("x", x)
		newShape.setAttribute("y", y)
		newShape.setAttribute("width", "10")
		newShape.setAttribute("height", "10")
		newShape.setAttribute("fill", "blue")
	}
	else if(shape == "GreenCircle")
	{
		newShape = document.createElementNS(svgns, "circle")
		newShape.setAttribute("cx", x)
		newShape.setAttribute("cy", y)
		newShape.setAttribute("r", 10)
		newShape.setAttribute("fill", "green")
	}
	else if(shape == "PinkCircle")
	{
		newShape = document.createElementNS(svgns, "circle")
		newShape.setAttribute("cx", x)
		newShape.setAttribute("cy", y)
		newShape.setAttribute("r", 10)
		newShape.setAttribute("fill", "pink")
	}
	
	if (newShape != 0)
	{
	  	canvas.appendChild(newShape)
	}
}
