console.log("Add user");

var $ = require("jquery");
const path = require("path");
const JSONdb = require("simple-json-db");
const db = new JSONdb("./users.json");

$("#my-form").on("submit", function(e) {
  e.preventDefault();
  let obj = new Object();

  obj.name = $("#name").val();

  db.set($("#house").val(), obj);
});
