// create the plants

const fragment = document.createDocumentFragment();

for (let i = 0; i < 5; i++) {
  var mainDiv = document.createElement("div");
  var mainText = document.createElement("h4");
  var linkplant = document.createElement("a");
  mainDiv.className = "plant";
  mainDiv.id = "plant" + i;
  mainText.textContent = "Plant " + (i + 1);
  mainText.className = "plant-text";
  linkplant.onmouseenter = function () {
    changeImage("IMG/img" + (i + 1) + ".jpg");
  };

  fragment.appendChild(linkplant).appendChild(mainDiv).appendChild(mainText);

  document.getElementById("inside").appendChild(fragment);
}

// set the date and time

var dt = new Date();
document.getElementById("date-time").innerHTML = dt.toLocaleString();

function changeImage(imgChange) {
  var img = document.getElementById("slider");
  img.src = imgChange;
}
