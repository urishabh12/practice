const express = require('express');
const router = express.Router();

const courses = [
    { id:1, name:'Course 1'},
    { id:2, name:'Course 2'},
    { id:3, name:'Course 3'}, 
];

router.get('/', (req, res) => {
    res.send(courses);
});

router.post('/', (req, res) => {
    const { error } = validateString(req.body);
    if (error) {
        res.status(400).send(result.error.details[0].message);
        return;
    }
    
    const course = { 
        id: courses.length + 1,
        name: req.body.name
    };
    courses.push(course);
    res.send(course);
});

router.put('/:id', (req, res) => {
    const course = courses.find(c => c.id === parseInt(req.params.id));
    if (!course) return res.status(404).send('The course id was not found'); 

    const { error } = validateString(req.body);
    if (error) {
        res.status(400).send(result.error.details[0].message);
        return;
    }

    course.name = req.body.name;
    res.send(course); 
});

router.delete('/:id', (req, res) => {
    const course = courses.find(c => c.id === parseInt(req.params.id));
    if (!course) return res.status(404).send('The course id was not found');

    const index = courses.indexOf(course);
    courses.splice(index, 1);

    res.send(course)
});

router.get('/:id', (req, res) => {
    const course = courses.find(c => c.id === parseInt(req.params.id));
    if (!course) return res.status(404).send('The course id was not found');
    res.send(course);
    //req.query;
});

function validateString(course) {
    const schema = {
        name: Joi.string().min(3).required()
    };
    return Joi.validate(course, schema);
};

module.exports = router;