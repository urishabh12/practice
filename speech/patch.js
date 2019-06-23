function setup() {
    noCanvas();
    let speechRec = new p5.SpeechRec('en-IN', gotSpeech);
    let continous = true;
    let interim = false;
    speechRec.start(continous, interim);

    function gotSpeech() {
        if (speechRec.resultValue){
            createP(speechRec.resultString);
        }
        console.log(speechRec);
    }
}