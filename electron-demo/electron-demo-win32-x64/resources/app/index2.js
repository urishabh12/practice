var $ = require("jquery");

$(".button").click(function(e) {
  e.preventDefault();
  let value = $(this).attr("value");
  localStorage.setItem("flatno", value);
  window.open("./user.html", "_self");
});
