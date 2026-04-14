

import os

from cs50 import SQL
from flask import Flask, flash, jsonify, redirect, render_template, request, session

# Configure application
app = Flask(__name__)

# Ensure templates are auto-reloaded
app.config["TEMPLATES_AUTO_RELOAD"] = True

# Configure CS50 Library to use SQLite database
db = SQL("sqlite:///birthdays.db")


@app.after_request
def after_request(response):
    """Ensure responses aren't cached"""
    response.headers["Cache-Control"] = "no-cache, no-store, must-revalidate"
    response.headers["Expires"] = 0
    response.headers["Pragma"] = "no-cache"
    return response


@app.route("/", methods=["GET", "POST"])
def index():
    if request.method == "POST":

        # 1. Récupération des données du formulaire
        name = request.form.get("name")
        month = request.form.get("month")
        day = request.form.get("day")

        # 2. Validation des données (On vérifie AVANT d'insérer)
        if not name or not month or not day:
            return redirect("/")

        try:
            month = int(month)
            day = int(day)
        except ValueError:
            return redirect("/")

        if month < 1 or month > 12 or day < 1 or day > 31:
            return redirect("/")

        # 3. Insertion dans la base de données
        db.execute("INSERT INTO birthdays (name, month, day) VALUES(?, ?, ?)", name, month, day)

        # 4. Redirection vers l'accueil pour rafraîchir la liste
        return redirect("/")

    else:
        # 1. On récupère TOUS les anniversaires de la base de données
        # On les stocke dans une variable nommée "birthdays"
        birthdays = db.execute("SELECT * FROM birthdays")

        # 2. On affiche la page et on envoie la liste à l'index.html
        return render_template("index.html", birthdays=birthdays)
