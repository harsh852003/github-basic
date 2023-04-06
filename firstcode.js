let users = {
  Jay: {
    age: 20,
    online: true
  },
  Krutik: {
    age: 20,
    online: false
  },
  Sandip: {
    age: 21,
    online: true
  },
  Yash: {
    age: 19,
    online: true
  },
  Harsh: {
    age: 20,
    online: true
  }
};

function isEveryoneHere(userObj) {
  // Only change code below this line
  return userObj.hasOwnProperty("Krutik") &&
    userObj.hasOwnProperty("Jay") &&
    userObj.hasOwnProperty("Sandip") &&
    userObj.hasOwnProperty("Yash")&&
    userObj.hasOwnProperty("Harsh");
  // Only change code above this line
}

console.log(isEveryoneHere(users));