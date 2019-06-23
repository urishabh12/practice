console.log("Before");
getUser(1, getRepo);
console.log("After");

// Callbacks
// Promises
// Async/await

function getRepo(user) {
  getRepositories(user.gitHubUsername, displayRepo);
}

function displayRepo(repos) {
  console.log("Repos", repos);
}

function getUser(id, callback) {
  setTimeout(() => {
    console.log("Reading File");
    callback({ id: id, gitHubUsername: "mosh" });
  }, 2000);
}

function getRepositories(username, callback) {
  setTimeout(() => {
    console.log("Calling Github Repo");
    callback(["repo1", "repo2", "repo3"]);
  }, 2000);
}
