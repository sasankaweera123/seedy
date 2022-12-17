// value from the server side
const value = 1;

// number of plants
let n;

// plant image directory
const plantImages = ["01", "02", "03", "04"];

// plant names

const plantNames01 = [
  "Agave",
  "Cactus",
  "Sedum",
  "Yarrow",
  "Yucca",
  "Potentilla",
  "Rugosa_rose",
];

const plantNames02 = [];
const plantNames03 = [];

const plantNames04 = [
  "Bald_Cypress",
  "Dawn_Redwood",
  "Dogwood",
  "Elderberry",
  "Swamp_white_oak",
  "Tamarack",
  "Willow",
  "Lobellia",
  "Marsh_marigold",
  "Meadow_rue",
  "Sedges",
  "Cranberry",
];

// set the number of plants
if (value == 1) {
  n = plantNames01.length;
}

if (value == 2) {
  n = plantNames02.length;
}

if (value == 3) {
  n = plantNames03.length;
}

if (value == 4) {
  n = plantNames04.length;
}

// create the plants

const fragment = document.createDocumentFragment();

for (let i = 0; i < n; i++) {
  var mainDiv = document.createElement("div");
  var mainText = document.createElement("h4");
  var linkplant = document.createElement("a");
  mainDiv.className = "plant";
  mainDiv.id = "plant" + i;
  mainText.textContent = plantNames01[i];
  mainText.className = "plant-text";
  linkplant.onmouseenter = function () {
    changeImage("IMG/" + plantImages[value - 1] + "/img" + (i + 1) + ".jpg");
  };

  fragment.appendChild(linkplant).appendChild(mainDiv).appendChild(mainText);

  document.getElementById("inside").appendChild(fragment);
}

// set the date and time

var dt = new Date();
document.getElementById("date-time").innerHTML = dt.toLocaleString();

// change the image

function changeImage(imgChange) {
  var img = document.getElementById("slider");
  img.src = imgChange;
}
