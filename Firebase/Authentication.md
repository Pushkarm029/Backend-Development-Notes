# Firebase Authentication

### Add and initialize the Authentication SDK

```javascript
import { initializeApp } from "firebase/app";
import { getAuth } from "firebase/auth";

// TODO: Replace the following with your app's Firebase project configuration
// See: https://firebase.google.com/docs/web/learn-more#config-object
const firebaseConfig = {
  // ...
};

// Initialize Firebase
const app = initializeApp(firebaseConfig);


// Initialize Firebase Authentication and get a reference to the service
const auth = getAuth(app);
```


### Sign up new users

```javascript
import { getAuth, createUserWithEmailAndPassword } from "firebase/auth";

const auth = getAuth();
createUserWithEmailAndPassword(auth, email, password)
  .then((userCredential) => {
    // Signed in 
    const user = userCredential.user;
    // ...
  })
  .catch((error) => {
    const errorCode = error.code;
    const errorMessage = error.message;
    // ..
  });
```


### Sign in existing users

```javascript
import { getAuth, signInWithEmailAndPassword } from "firebase/auth";

const auth = getAuth();
signInWithEmailAndPassword(auth, email, password)
  .then((userCredential) => {
    // Signed in 
    const user = userCredential.user;
    // ...
  })
  .catch((error) => {
    const errorCode = error.code;
    const errorMessage = error.message;
  });
```

### Set an authentication state observer and get user data

For each of your app's pages that need information about the signed-in user, attach an observer to the global authentication object. This observer gets called whenever the user's sign-in state changes.

Attach the observer using the onAuthStateChanged method. When a user successfully signs in, you can get information about the user in the observer.

```javascript
import { getAuth, onAuthStateChanged } from "firebase/auth";

const auth = getAuth();
onAuthStateChanged(auth, (user) => {
  if (user) {
    // User is signed in, see docs for a list of available properties
    // https://firebase.google.com/docs/reference/js/auth.user
    const uid = user.uid;
    // ...
  } else {
    // User is signed out
    // ...
  }
});
```

### Manage Users in Firebase

- [Detailed Link](https://firebase.google.com/docs/auth/web/manage-users)

### Authenticate with Firebase in JavaScript

To sign in users by email link, you must first enable the Email provider and Email link sign-in method for your Firebase project:

1. In the Firebase console, open the Auth section.
2. On the Sign in method tab, enable the Email/Password provider. Note that email/password sign-in must be enabled to use email link sign-in.
3. In the same section, enable Email link (passwordless sign-in) sign-in method.
4. Click Save.

[Email Authentication](https://firebase.google.com/docs/auth/web/email-link-auth)

[Google Authentication](https://firebase.google.com/docs/auth/web/google-signin)

[Facebook Authentication](https://firebase.google.com/docs/auth/web/facebook-login)

[GitHub Authentication](https://firebase.google.com/docs/auth/web/github-auth)

[Microsoft Authentication](https://firebase.google.com/docs/auth/web/microsoft-oauth)

[Twitter Authentication](https://firebase.google.com/docs/auth/web/twitter-login)

[Phone Authentication](https://firebase.google.com/docs/auth/web/phone-auth)

[Anonymous Authentication](https://firebase.google.com/docs/auth/web/anonymous-auth)

[Custom Authentication](https://firebase.google.com/docs/auth/web/custom-auth)

[Multi-factor Authentication](https://firebase.google.com/docs/auth/web/multi-factor-auth)