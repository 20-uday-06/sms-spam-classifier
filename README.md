# SMS Spam Classifier

A machine learning project to classify SMS messages as spam or not spam (ham). This repository includes both a Jupyter Notebook for model development and a Streamlit web application for easy interaction.

[GitHub Repository Link](https://github.com/20-uday-06/sms-spam-classifier)

---

## Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Project Structure](#project-structure)
- [Contributing](#contributing)
- [License](#license)

---

## Overview

This project provides an end-to-end solution for SMS spam detection using machine learning techniques. It includes:
- Data preprocessing and exploratory analysis
- Model training and evaluation
- An interactive web interface built with Streamlit for real-time predictions

---

## Features

- Detects whether a given SMS is spam or ham
- Clean and modular codebase
- Jupyter Notebook for step-by-step experimentation
- Streamlit web app for user-friendly interaction

---

## Installation

1. **Clone the repository:**
git clone https://github.com/20-uday-06/sms-spam-classifier.git
cd sms-spam-classifier


2. **Install required packages:**
pip install numpy pandas nltk seaborn string matplotlib collections sklearn streamlit


---

## Usage

### 1. Notebook (Model Training & Evaluation)

- Open the Jupyter Notebook (`.ipynb` file) in your preferred environment.
- **Run all the cells** sequentially to preprocess data, train the model, and evaluate performance.

### 2. Web UI (Streamlit App)

- Make sure you have Streamlit installed (`pip install streamlit` if needed).
- From the project directory, run:

streamlit run app.py

- This will launch the web interface in your browser, where you can enter SMS messages and get instant predictions.

---

## Project Structure
sms-spam-classifier/
├── app.py # Streamlit web application
├── notebook.ipynb # Jupyter Notebook for data analysis and modeling
├── requirements.txt # (Optional) List of dependencies
└── README.md # Project documentation


---

## Contributing

Contributions are welcome! Please fork the repository and submit a pull request.

---

## License

This project is licensed under the MIT License.

---

**Repository:** [https://github.com/20-uday-06/sms-spam-classifier](https://github.com/20-uday-06/sms-spam-classifier)

---
