//objectid is of 12 bytes
//4 bytes timestamp
//3 bytes machine identifier
//2 bytes process identifier
//3 bytes counter

const mongoose = require("mongoose");

const idd = new mongoose.Types.ObjectId();
console.log(idd.getTimestamp());
