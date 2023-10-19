// Строгий режим
"use strict"

//==========================================================================
//?Burger

const iconMenu = document.querySelector('.menu__icon');
const menuBody = document.querySelector('.menu__body');
if (iconMenu) {
	iconMenu.addEventListener("click", function (e) {
		document.body.classList.toggle('_lock');
		iconMenu.classList.toggle('_active');
		menuBody.classList.toggle('_active');
	});
}

//==========================================================================
//?Search

const searchBtn = document.querySelector(".search__search-icon");
const cancelBtn = document.querySelector(".search__cancel-icon");
const form = document.querySelector(".search__form");

cancelBtn.onclick = () => {
	searchBtn.classList.remove("hide");
	cancelBtn.classList.remove("show");
	form.classList.remove("active");
}
searchBtn.onclick = () => {
	form.classList.add("active");
	searchBtn.classList.add("hide");
	cancelBtn.classList.add("show");
}

//==========================================================================

