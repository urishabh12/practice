var $ = require("jquery");
const path = require("path");
const JSONdb = require("simple-json-db");
const db = new JSONdb("./users.json");

const user = db.get(localStorage.getItem("flatno"));
$("#name").html(user.name);

numtomonth = {
  "0": "Jan",
  "1": "Feb",
  "2": "March",
  "3": "April",
  "4": "May",
  "5": "June",
  "6": "July",
  "7": "August",
  "8": "September",
  "9": "October",
  "10": "November",
  "11": "December"
};

var months = [];
for (var i = 0; i <= 12; i++) {
  var temp = i.toString();
  if (user.hasOwnProperty(temp)) {
    months.push(temp);
  } else {
    break;
  }
}
console.log(months);
var tr;
for (var j = 0; j < months.length; j++) {
  tr = $("<tr/>");
  tr.append("<td>" + numtomonth[months[j]] + "</td>");
  tr.append(
    "<td class=" + "clickable" + " name=" + months[j] + ">" + "View" + "</td>"
  );
  $("table tbody").append(tr);
}

$("#bill").click(function(e) {
  e.preventDefault();
  window.open("./billing.html", "_self");
});

$(".clickable").click(function(e) {
  e.preventDefault();
  var month = $(this).attr("name");
  obj = user[month];
  obj.name = user.name;
  obj.flatno = localStorage.getItem("flatno");
  localStorage.setItem("currDetails", JSON.stringify(obj));
  window.open("./print.html", "_self");
});
