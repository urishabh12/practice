const mongoose = require("mongoose");

mongoose
  .connect("mongodb://localhost/playground")
  .then(() => console.log("Connected to MongoDB"))
  .catch(err => console.error("Could not connect to mongodb"));

const CourseSchema = mongoose.Schema({
  name: { type: String, required: true, minlength: 5, lowercase: true },
  author: String,
  category: {
    type: String,
    enum: ["one", "two", "three"],
    required: true
  },
  tags: {
    type: Array,
    validate: {
      validator: function(v) {
        return v.length > 0;
      },
      message: "Should have atlest 1 tag"
    }
  },
  date: { type: Date, default: Date.now },
  isPublished: Boolean,
  price: {
    type: Number,
    set: v => Math.round(v),
    required: function() {
      return this.isPublished;
    }
  }
});

const Course = mongoose.model("Course", CourseSchema);

async function createCourse() {
  const course = new Course({
    name: "ReactJs",
    author: "Rishabh",
    tags: ["react", "frontend"],
    isPublished: true
  });

  const result = await course.save();
  console.log(result);
}

async function getCourse() {
  //comparison
  //eq (equals)
  //ne (not equals)
  //gt (greater than)
  //gte (greater than equal to)
  //lt (less than)
  //lte (less than equal to)
  //in
  //nin
  //.find({ price: { $gte: 10 }, codelines: { $in:[10,12,13] } })

  //logical
  //or
  //and
  //.find().or([ { author:''Mosh' }, { type: 'computer' } ])

  //regular expression
  //starts with
  //.find({author: /^Rish/i})
  //ends with
  //{author: /upa$/i}
  //contains
  //{author: /.*mand.*/i}
  const result = await Course.find();
  console.log(result);
}

async function update() {
  const result = await Course.update({
    $set: {
      author: "Mosh",
      isPublished: false
    }
  });
  console.log(result);
}
getCourse();
