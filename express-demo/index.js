const Joi = require('joi');
const logger = require('./middleware/logger.js');
const authentication = require('./middleware/authentication');
const express = require('express');
const config = require('config');
const courses = require('./routes/courses');
const home = require('./routes/home');
const startupDebugger = require('debug')('app:startup');//Set an environment variable DEBUG=app:startup for all debug messages related to this
const dbDebugger = require('debug')('app:db');//Can also set environment variable to DEBUG=app:* for all debug messages
const app = express();


console.log(`NODE_ENV: ${process.env.NODE_ENV}`);

app.set('view engine', 'pug');
app.set('views', './views');//default

app.use('/', home);
app.use('/api/courses', courses);
app.use(express.json());
app.use(express.urlencoded({ extended: true}));
app.use(express.static('public'));
app.use(logger);
app.use(authentication);

//app.use(morgan('tiny')); loggisng package

//config.get('mail.host');

if (app.get('env') === 'development') {
    startupDebugger('RUN DEV FILES');
};


const port = process.env.PORT || 3500;
app.listen(port, () => console.log(`Listening at ${port}`));
