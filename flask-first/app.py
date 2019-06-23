from flask import Flask, send_from_directory, render_template, request, redirect, url_for

app = Flask(__name__)
app.config['SEND_FILE_MAX_AGE_DEFAULT'] = 0
blog = {'name': 'My awesome blog', 'posts': {}}


@app.route("/")
def home():
    return render_template('home.html', blog=blog)


@app.route("/js/<path:path>")
def js(path):
    return send_from_directory('js', path)


@app.route("/post/<int:post_id>")
def post(post_id):
    post = blog['posts'].get(post_id)
    return render_template('post.html', post=post)


@app.route('/post/create', methods=['GET', 'POST'])
def create():
    if request.method == "POST":
        title = request.form.get('title')
        content = request.form.get('content')
        post_id = len(blog['posts'])
        blog['posts'][post_id] = {'title': title, 'content': content}
        return redirect(url_for('post', post_id=post_id))
    return render_template('create.html')


app.run()