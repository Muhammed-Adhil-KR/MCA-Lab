from flask import Flask, render_template, request

app = Flask(__name__)


# -------------------------------------
# BMI Classification Function
# -------------------------------------
def get_bmi_category(bmi):
    if bmi < 18.5:
        return "Underweight", "You are below the healthy weight range. Consider improving your diet with nutritious, calorie-rich foods."
    elif 18.5 <= bmi < 25:
        return "Normal", "You are within the healthy BMI range. Keep up the good lifestyle!"
    elif 25 <= bmi < 30:
        return "Overweight", "You are above the healthy weight range. Consider regular exercise and balanced meals."
    else:
        return "Obese", "Your BMI indicates obesity. A structured diet plan and exercise routine is recommended."


# -------------------------------------
# Routes
# -------------------------------------
@app.route('/')
def home():
    return render_template("index.html")


@app.route('/calculate', methods=['POST'])
def calculate():
    try:
        weight = float(request.form['weight'])
        unit = request.form['unit']

        if unit == "metric":
            height_cm = float(request.form['height'])
            height_m = height_cm / 100
            bmi = weight / (height_m ** 2)

        elif unit == "imperial":
            feet = float(request.form['feet'])
            inches = float(request.form['inches'])
            height_in = (feet * 12) + inches
            bmi = (weight / (height_in ** 2)) * 703

        bmi = round(bmi, 2)
        category, message = get_bmi_category(bmi)

        return render_template("result.html",
                               bmi=bmi,
                               category=category,
                               message=message)
    

    except:
        return render_template("index.html", error="Please enter valid numbers.")

@app.route('/tips/<category>')
def tips(category):
    category = category.lower()

    tips_data = {
        "underweight": [
            "Increase calorie intake with nutritious foods.",
            "Add more proteins like eggs, chicken, and legumes.",
            "Eat balanced snacks between meals.",
            "Do strength training to build muscle mass."
        ],
        "normal": [
            "Maintain a balanced diet.",
            "Exercise at least 4–5 times a week.",
            "Stay hydrated and sleep 7–8 hours.",
            "Avoid junk food and high-sugar drinks."
        ],
        "overweight": [
            "Reduce refined sugar and processed foods.",
            "Increase walking, running, or cycling activities.",
            "Control portion sizes.",
            "Drink water before meals to reduce overeating."
        ],
        "obese": [
            "Start with light cardio and gradually increase intensity.",
            "Avoid high-fat and fried foods.",
            "Consult a nutritionist for a personalized diet plan.",
            "Track your calorie intake daily."
        ]
    }

    if category not in tips_data:
        return "Invalid category", 404

    return render_template("tips.html",
                           category=category.capitalize(),
                           tips=tips_data[category])

# -------------------------------------
# Run App
# -------------------------------------
if __name__ == "__main__":
    app.run(debug=True)
