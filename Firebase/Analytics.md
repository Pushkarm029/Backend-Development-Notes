# Firebase Analytics

- Detailed link for Analytics: https://firebase.google.com/docs/analytics/get-started?platform=web

Google Analytics collects usage and behavior data for your web app. The SDK logs two primary types of information:

- **Events**: What is happening in your app, such as user actions, system events, or errors.

- **User properties**: Attributes you define to describe segments of your user base, such as language preference or geographic location.

Analytics automatically logs some [events](https://support.google.com/analytics/answer/9268042) and [user properties](https://support.google.com/analytics/answer/9234069). you don't need to add any code to enable them.

### Before you begin

If you haven't already, add Firebase to your JavaScript project and make sure that Google Analytics is enabled in your Firebase project:

- If you're creating a new Firebase project, enable Google Analytics during the project creation workflow.

- If you're using an existing Firebase project that doesn't have Google Analytics enabled, go to the Integrations tab of your settings > Project settings to enable it.

### Add the Analytics SDK

1. Check that your Firebase config object in your code contains measurementId. This ID is automatically created when you enable Analytics in your Firebase project and register a web app, and it's required to use Analytics.

   - If your app uses Firebase Hosting and uses reserved URLs for the Firebase SDKs:

   Firebase automatically handles configuring your application. To complete setup, add the scripts from the Your apps card in your Project settings to the <body> tag of your app, if you haven't already.

   - If your app does not use reserved URLs: If you're working with an existing web app, update the Firebase config object in your code to ensure the measurementId field is present. The config object should look similar to the following example:

   ```javascript
   // For Firebase JavaScript SDK v7.20.0 and later, `measurementId` is an optional field
   const firebaseConfig = {
     apiKey: "AIzaSyCGQ0tYppWFJkuSxBhOpkH0xVDmX245Vdc",
     authDomain: "project-id.firebaseapp.com",
     databaseURL: "https://project-id.firebaseio.com",
     projectId: "project-id",
     storageBucket: "project-id.appspot.com",
     messagingSenderId: "637908496727",
     appId: "2:637908496727:web:a4284b4c99e329d5",
     measurementId: "G-9VP01NDSXJ",
   };
   ```

2. Add the Analytics JS SDK and initialize Analytics:

```javascript
import { initializeApp } from "firebase/app";
import { getAnalytics } from "firebase/analytics";

// TODO: Replace the following with your app's Firebase project configuration
// See: https://firebase.google.com/docs/web/learn-more#config-object
const firebaseConfig = {
  // ...
};

// Initialize Firebase
const app = initializeApp(firebaseConfig);


// Initialize Analytics and get a reference to the service
const analytics = getAnalytics(app);

```

### Start logging events
After you have initialized the Analytics service, you can begin to log events with the logEvent() method.


```javascript
import { getAnalytics, logEvent } from "firebase/analytics";

const analytics = getAnalytics();
logEvent(analytics, 'notification_received');
```

example:

```javascript
import { getAnalytics, logEvent } from "firebase/analytics";

const analytics = getAnalytics();
logEvent(analytics, 'select_content', {
  content_type: 'image',
  content_id: 'P12453'
});

```

- Custom Parameters - Do this via: Analytics > Events > Manage Custom Definitions > Create Custom Dimensions.......  
- value parameter: value is a general purpose parameter that is useful for accumulating a key metric that pertains to an event. Examples include revenue, distance, time, and points.

```javascript
import { getAnalytics, logEvent } from "firebase/analytics";

const analytics = getAnalytics();
logEvent(analytics, 'goal_completion', { name: 'lever_puzzle'});
```


## **You can access this data from the [Events](https://console.firebase.google.com/project/_/analytics/events) dashboard in the Firebase console.**

### Set user properties
- Create a custom definition for the user property in the [Custom Definitions page](https://console.firebase.google.com/project/_/analytics/userproperty?_gl=1*j23gxi*_ga*MzUwNzM0MjEzLjE2ODc3NTgxOTg.*_ga_CW55HF8NVT*MTY4Nzc1ODE5Ny4xLjEuMTY4Nzc2MTk0MS4wLjAuMA..) of Analytics in the Firebase console. For more information, see Custom dimensions and metrics.
- Set a user property in your app with the [setUserProperty()](https://firebase.google.com/docs/reference/js/analytics#setuserproperties) method.

```javascript
import { getAnalytics, setUserProperties } from "firebase/analytics";

const analytics = getAnalytics();
setUserProperties(analytics, { favorite_food: 'apples' });
```

### Debug Events

Detailed link: https://firebase.google.com/docs/analytics/debugview#web

### Measure Screenviews
Google Analytics tracks screen transitions and attaches information about the current screen to events, enabling you to track metrics such as user engagement or user behavior per screen.

Link - https://firebase.google.com/docs/analytics/screenviews#web-modular-api

### Measure Ecommerce
 
Link - https://firebase.google.com/docs/analytics/measure-ecommerce#web-modular-api_1

### Measure Ad-revenue

Link - https://firebase.google.com/docs/analytics/measure-ad-revenue

### Error Codes

Link - https://firebase.google.com/docs/analytics/errors