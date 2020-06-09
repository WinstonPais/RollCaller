/* eslint-disable linebreak-style */
hljs.initHighlightingOnLoad();

var HC_SETTINGS = {
  css: {
    activeClass: 'is-active',
    hiddenClass: 'is-hidden'
  }
};

var tagsToRemove = ['topic:covid-19-relief'];

var Utils = {
  isHomepage: function() {
    return $('[data-home-page]').length > 0;
  },
  isNewRequestPage: function() {
    return $('.new-request-page').length > 0;
  },
  isMyRequestsPage: function() {
    return $('.my-activities-page').length > 0;
  },
  removeTagsWeDontWant: function() {
    $('.nesty-panel').on('DOMNodeInserted', function(e){
      for(var i in tagsToRemove) {
        var item = document.getElementById(tagsToRemove[i]);
       	item.parentNode.removeChild(item);
      }
    });
  },
};

function getParameterByName(name, url) {
	    if (!url) url = window.location.href;
	    name = name.replace(/[\[\]]/g, "\\$&");
	    var regex = new RegExp("[?&]" + name + "(=([^&#]*)|&|#|$)"),
	        results = regex.exec(url);
	    if (!results) return null;
	    if (!results[2]) return '';
	    return decodeURIComponent(results[2].replace(/\+/g, " "));
	}
	// Give the parameter a variable name
	var messageKind = getParameterByName('kind');

$(document).ready(function() {
  if(Utils.isNewRequestPage()) {
    var params = Object.fromEntries(new URLSearchParams(location.search));
    if (params.topic) {
      document.getElementById('request_custom_fields_360027363314').value = params.topic
      
      if (params.topic != 'topic:covid-19-relief') {
    		// Utils.removeTagsWeDontWant()
      } else {
        // $('#request_subject').val('I’d like to put my account on hold due to Covid-19')
      }
    } else {
      // Utils.removeTagsWeDontWant()
    }
  }
  
  // if(Utils.isMyRequestsPage()) {
  //   window.location = "https://support.buffer.com/hc/en-us/";
  // }
  
  $('.login').text('Sign in via Buffer')
  
  //User menu dropdown and breadcrumb: change "My activities" to "My requests"
  $('#user-menu a[href="/hc/en-us/requests"]').text('My requests');
  $('.breadcrumbs li a[href="/hc/en-us/requests"]').text('My requests');

  var $topbar = $('[data-topbar]');
  var $heroUnit = $('[data-hero-unit]');
  var $topSearchBar = $('.topbar__search-bar');
  var $topSearchBarQuery = $topSearchBar.find('#query');
  var $topSearchBarBtn = $('.topbar__btn-search');
  
  if (HelpCenter.user.role!=='anonymous' && (HelpCenter.user.tags.indexOf('can-see-contact-form') > -1)) {
  	$("div.paid_user").show();
  } else {
    $("div.free_user").show();
  }
  
  if (messageKind && messageKind == 'error') {
    var errorMessage = getParameterByName('message');
    document.getElementById("alertMessage").textContent="Error: " + decodeURIComponent(errorMessage);
    document.getElementById("alert").style.display="inline-block";
  } else if (messageKind && messageKind == 'info') {
    var infoMessage = getParameterByName('message');
    document.getElementById("alertMessage").textContent=decodeURIComponent(infoMessage);
    document.getElementById("alert").style.backgroundColor="#e97284";
    document.getElementById("alert").style.display="inline-block";

    setTimeout(function() {
        $('#alert').fadeOut(400);
    }, 3000);
  }

  if (Utils.isHomepage()) {
    $topbar.addClass('topbar--large');
    $heroUnit.removeClass(HC_SETTINGS.css.hiddenClass);
    $('[data-footer-submit-ticket]').removeClass(HC_SETTINGS.css.hiddenClass);
  } else {
    $topbar.addClass('topbar--small');
  }

  $topbar.removeClass(HC_SETTINGS.css.hiddenClass);

  $('[data-toggle-menu]').click(function() {
    $(this).toggleClass(HC_SETTINGS.css.activeClass);
    $('[data-menu]').toggle();
  });

  // Social share popups
  $('.share a').click(function(e) {
    e.preventDefault();
    window.open(this.href, '', 'height = 500, width = 500');
  });

  // Toggle the share dropdown in communities
  $('.share-label').on('click', function(e) {
    e.stopPropagation();
    var isSelected = this.getAttribute('aria-selected') === 'true';
    this.setAttribute('aria-selected', !isSelected);
    $('.share-label')
      .not(this)
      .attr('aria-selected', 'false');
  });

  $(document).on('click', function() {
    $('.share-label').attr('aria-selected', 'false');
  });

  // Submit search on select change
  $('#request-status-select, #request-organization-select').on(
    'change',
    function() {
      search();
    }
  );

  // Submit search on input enter
  $('#quick-search').on('keypress', function(e) {
    if (e.which === 13) {
      search();
    }
  });

  function search() {
    window.location.search = $.param({
      query: $('#quick-search').val(),
      status: $('#request-status-select').val(),
      organization_id: $('#request-organization-select').val()
    });
  }

  $('.image-with-lightbox').magnificPopup({
    type: 'image',
    closeOnContentClick: true,
    closeBtnInside: false,
    fixedContentPos: true,
    mainClass: 'mfp-with-zoom', // class to remove default margin from left and right side
    image: {
      verticalFit: true
    },
    zoom: {
      enabled: true,
      duration: 300 // don't foget to change the duration also in CSS
    }
  });

  $('.image-with-video-icon').magnificPopup({
    disableOn: 700,
    type: 'iframe',
    mainClass: 'mfp-fade',
    removalDelay: 160,
    preloader: false,
    fixedContentPos: false
  });

  $('.accordion__item-title').on('click', function() {
    var $title = $(this);
    $title.toggleClass('accordion__item-title--active');
    $title
      .parents('.accordion__item')
      .find('.accordion__item-content')
      .slideToggle();
  });

  $('.tabs-link').click(function(e) {
    e.preventDefault();
    var $link = $(this);
    var tabIndex = $link.index();
    var $tab = $link
      .parents('.tabs')
      .find('.tab')
      .eq(tabIndex);
    $link
      .addClass(HC_SETTINGS.css.activeClass)
      .siblings()
      .removeClass(HC_SETTINGS.css.activeClass);
    $tab
      .removeClass(HC_SETTINGS.css.hiddenClass)
      .siblings('.tab')
      .addClass(HC_SETTINGS.css.hiddenClass);
  });

  $topSearchBarBtn.click(function() {
    $(this).addClass(HC_SETTINGS.css.hiddenClass);
    $topSearchBar.removeClass(HC_SETTINGS.css.hiddenClass);
    $topSearchBarQuery.focus();
  });

  $(document).mouseup(function(e) {
    if (!$topSearchBarQuery.is(e.target)) {
      $topSearchBar.addClass(HC_SETTINGS.css.hiddenClass);
      $topSearchBarBtn.removeClass(HC_SETTINGS.css.hiddenClass);
    }
  });

  // Fix animated icons
  $('.fa-spin').empty();

  $('img.custom-block__image').each(function() {
    var $img = $(this);
    var imgID = $img.attr('id');
    var imgClass = $img.attr('class');
    var imgURL = $img.attr('src') + '?reset';

    $.get(
      imgURL,
      function(data) {
        // Get the SVG tag, ignore the rest
        var $svg = $(data).find('svg');

        // Add replaced image's ID to the new SVG
        if (typeof imgID !== 'undefined') {
          $svg = $svg.attr('id', imgID);
        }
        // Add replaced image's classes to the new SVG
        if (typeof imgClass !== 'undefined') {
          $svg = $svg.attr('class', imgClass + ' replaced-svg');
        }

        // Remove any invalid XML tags as per http://validator.w3.org
        $svg = $svg.removeAttr('xmlns:a');

        // Replace image with new SVG
        $img.replaceWith($svg);
      },
      'xml'
    );
  });

  //Change the color of header's background
  var $currentCategoryId = $('.category-page').attr('data-category-id');
  var $breadcrumbItem = $('.breadcrumbs li:nth-child(2) a');
  var $parentCategory =
    $('.breadcrumbs').length && $breadcrumbItem.length
      ? $breadcrumbItem
          .attr('href')
          .match(/[0-9]+/)
          .toString()
      : '0';

  if (
    $('.new-request-page').length > 0 ||
    $currentCategoryId === $bufferSuiteCategoryId ||
    $parentCategory === $bufferSuiteCategoryId
  ) {
    $topbar.addClass('topbar--blue');
  }
  if (
    $currentCategoryId === $bufferPublishCategoryId ||
    $parentCategory === $bufferPublishCategoryId
  ) {
    $topbar.addClass('topbar--light-blue');
  }
  if (
    $currentCategoryId === $bufferReplyCategoryId ||
    $parentCategory === $bufferReplyCategoryId
  ) {
    $topbar.addClass('topbar--orange');
  }
});
