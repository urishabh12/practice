var $ = require("jquery");
const path = require("path");
const JSONdb = require("simple-json-db");
const db = new JSONdb("./users.json");
const db2 = new JSONdb("./default.json");

const user = db.get(localStorage.getItem("flatno"));
const def = db2.get("default");
$("#name").val(user.name);
$("#flatno").val(localStorage.getItem("flatno"));
$("#sf").val(def.sf);
$("#pt").val(def.pt);
$("#nat").val(def.nat);
$("#wc").val(def.wc);
$("#rc").val(def.rc);
$("#mc").val(def.mc);
$("#pc").val(def.pc);
$("#noc").val(def.noc);
$("#cec").val(def.cec);
$("#efff").val(def.efff);
$("#bic").val(def.bic);
$("#lc").val(def.lc);
$("#ac").val(def.ac);
$("#tac").val(def.tac);
$("#tguc").val(def.tguc);
$("#bac").val(def.bac);
$("#poc").val(def.poc);
$("#iodc").val(def.iodc);
$("#otc").val(def.otc);
$("#total").html(def.total);

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

  obj.date = $("#date").val();
  obj.receiptno = $("#receiptno").val();
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
  obj.bank = $("#bank").val();
  obj.cheque = $("#cheque").val();
  obj.total = $("#total").val();

  location.reload();
  let date = new Date($("#date").val());
  user[date.getMonth()] = obj;
  db.set(localStorage.getItem("flatno"), user);
  obj.name = user.name;
  obj.flatno = localStorage.getItem("flatno");
  localStorage.setItem("currDetails", JSON.stringify(obj));
  window.open("./print.html", "_self");
});
