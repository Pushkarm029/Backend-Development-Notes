# Firestore

[Detailed](https://firebase.google.com/docs/firestore/quickstart)

### Create a Cloud Firestore database

1. Navigate to the Cloud Firestore section of the Firebase console. You'll be prompted to select an existing Firebase project. Follow the database creation workflow.


2. Select a starting mode for your Cloud Firestore Security Rules:

- **Test mode** allows anyone to read and overwrite your data. This is useful for getting started quickly, but it's important to [configure more secure rules](https://firebase.google.com/docs/firestore/security/get-started) before launching your app.


- **Locked Mode** prevents all reads and writes from your database. This is useful if you want to start from a clean slate and import data into Cloud Firestore using [Firebase Import](https://firebase.google.com/docs/firestore/manage-data/export-import).

3. Select a [location](https://firebase.google.com/docs/firestore/locations#types) for your database.

- This location setting is your project's default Google Cloud Platform (GCP) resource location. Note that this location will be used for GCP services in your project that require a location setting, specifically, your default Cloud Storage bucket and your App Engine app (which is required if you use Cloud Scheduler).

- If you aren't able to select a location, then your project already has a default GCP resource location. It was set either during project creation or when setting up another service that requires a location setting.