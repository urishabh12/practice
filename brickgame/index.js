const express = require("express");
const app = express();

app.get("/", (req, res) => {
  res.sendFile(__dirname + "/index.html");
});

app.get("/js/:name", (req, res) => {
  res.status(200).sendFile(__dirname + "/" + req.params.name);
});

const port = process.env.PORT || 2000;
app.listen(port, () => console.log(`Listening on ${port}..`));
