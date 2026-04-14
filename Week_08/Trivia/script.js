

document.addEventListener('DOMContentLoaded', function() {

    // --- LA BONNE RÉPONSE ---
    let bonneReponse = document.querySelector('#correct');

    bonneReponse.addEventListener('click', function() {
        bonneReponse.style.backgroundColor = 'green';
        document.querySelector('#feedback').innerHTML = 'Correct !';
    });


    // --- LES MAUVAISES RÉPONSES ---
    // Si tu as plusieurs boutons, le plus simple pour débuter est de leur donner des ID (ex: #faux1, #faux2)
    let mauvaiseReponse = document.querySelector('#incorrect');

    mauvaiseReponse.addEventListener('click', function() {
        mauvaiseReponse.style.backgroundColor = 'red';
        document.querySelector('#feedback').innerHTML = 'Incorrect...';
    });

}); // La parenthèse de fin du DOMContentLoaded est ICI
