let speech;
let speechRec;
function setup() {
  noCanvas();
  //Speech-to-Text
  //let speechRec = new p5.SpeechRec("Google हिन्दी", gotSpeech);

  //function gotSpeech() {
  //  if (speechRec.resultValue) {
  //    createP(speechRec.resultString);
  //  }
  //  console.log(speechRec);
  //}

  //Text-to-Speech
  speech = new p5.Speech(); // speech synthesis object
  speech.onLoad = voiceReady;

  function voiceReady() {
    console.log("voice ready");
  }
}

function mousePressed() {
  speech.setVoice("Google हिन्दी");
  speech.speak("This is how I speak. This is the text to speech module");
}
//window.onload = cntrl;
