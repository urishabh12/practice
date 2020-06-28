var $ = require("jquery");

const obj = JSON.parse(localStorage.getItem("currDetails"));

$("#date").html(obj.date);
$("#receiptno").html(obj.receiptno);
$("#name").html(obj.name);
$("#flatno").html(obj.flatno);
$("#sf").html(obj.sf);
$("#pt").html(obj.pt);
$("#nat").html(obj.nat);
$("#wc").html(obj.wc);
$("#rc").html(obj.rc);
$("#mc").html(obj.mc);
$("#pc").html(obj.pc);
$("#noc").html(obj.noc);
$("#cec").html(obj.cec);
$("#efff").html(obj.efff);
$("#bic").html(obj.bic);
$("#lc").html(obj.lc);
$("#ac").html(obj.ac);
$("#tac").html(obj.tac);
$("#tguc").html(obj.tguc);
$("#bac").html(obj.bac);
$("#poc").html(obj.poc);
$("#iodc").html(obj.iodc);
$("#otc").html(obj.otc);
$("#bank").html(obj.bank);
$("#cheque").html(obj.cheque);
$("#total").html(obj.total);

$("#my-form").on("submit", function(e) {
  e.preventDefault();
  window.print();
});
