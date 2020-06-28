var $ = require("jquery");
const path = require("path");
const JSONdb = require("simple-json-db");
const db = new JSONdb("./default.json");

var tot;
$("input").change(function() {
  var arr = document.getElementsByName("qty");
  tot = 0;
  for (var i = 0; i < arr.length; i++) {
    if (parseInt(arr[i].value)) tot += parseInt(arr[i].value);
  }
  $("#total").html(tot);
});

$("#my-form").on("submit", function(e) {
  e.preventDefault();
  let obj = new Object();

  obj.sf = $("#sf").val();
  obj.pt = $("#pt").val();
  obj.nat = $("#nat").val();
  obj.wc = $("#wc").val();
  obj.rc = $("#rc").val();
  obj.mc = $("#mc").val();
  obj.pc = $("#pc").val();
  obj.noc = $("#noc").val();
  obj.cec = $("#cec").val();
  obj.efff = $("#efff").val();
  obj.bic = $("#bic").val();
  obj.lc = $("#lc").val();
  obj.ac = $("#ac").val();
  obj.tac = $("#tac").val();
  obj.tguc = $("#tguc").val();
  obj.bac = $("#bac").val();
  obj.poc = $("#poc").val();
  obj.iodc = $("#iodc").val();
  obj.otc = $("#otc").val();
  obj.total = tot;
  db.set("default", obj);
  location.reload();
});
