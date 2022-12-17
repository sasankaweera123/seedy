// hide data
const btn = document.getElementById("btn");
var humadity;
// number of plants
let n;
// value from the server side
var value;

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

// set the date and time

var dt = new Date();
document.getElementById("date-time").innerHTML = dt.toLocaleString();

btn.addEventListener("click", () => {
  const box = document.getElementById("mainContainer");
  const details = document.getElementById("container");

  humadity = document.getElementById("humidity").value;

  if (!isNaN(humadity)) {
    if (humadity > 0 && humadity <= 80) {
      box.style.display = "none";
      details.style.display = "block";
      sencondFun();
    } else {
      alert("Humidity need to be lower than 80 and Higher than 0");
    }
  } else {
    alert("Please Enter the right Value");
  }
});

function sencondFun() {
  // set the value according to the humadity
  if (humadity > 0 && humadity <= 20) value = 1;

  if (humadity >= 21 && humadity <= 40) value = 2;

  if (humadity >= 41 && humadity <= 60) value = 3;

  if (humadity >= 61 && humadity <= 80) value = 4;

  // set the number of plants
  if (value == 1) n = plantNames01.length;

  if (value == 2) n = plantNames02.length;

  if (value == 3) n = plantNames03.length;

  if (value == 4) n = plantNames04.length;

  // create the plants

  const fragment = document.createDocumentFragment();

  for (let i = 0; i < n; i++) {
    var mainDiv = document.createElement("div");
    var mainText = document.createElement("h4");
    var linkplant = document.createElement("a");
    mainDiv.className = "plant";
    mainDiv.id = "plant" + i;
    if (value == 1) mainText.textContent = plantNames01[i];
    if (value == 2) mainText.textContent = plantNames02[i];
    if (value == 3) mainText.textContent = plantNames03[i];
    if (value == 4) mainText.textContent = plantNames04[i];
    mainText.className = "plant-text";
    linkplant.onmouseenter = function () {
      changeImage("IMG/" + plantImages[value - 1] + "/img" + (i + 1) + ".jpg");
    };

    fragment.appendChild(linkplant).appendChild(mainDiv).appendChild(mainText);

    document.getElementById("inside").appendChild(fragment);
  }
}

// change the image
function changeImage(imgChange) {
  var img = document.getElementById("slider");
  img.src = imgChange;
}
