from django.shortcuts import render
from django.contrib import messages
from django.contrib.auth import authenticate, login, logout
from django.http import HttpResponseRedirect, HttpResponse
from django.urls import reverse
# Create your views here.

def index(request):
    if request.method == 'POST':
        username = request.POST.get('username')
        password = request.POST.get('password')
        user = authenticate(username=username, password=password)
        if user:
            if request.user.is_superuser:
                return HttpResponseRedirect('/admin/')
            else:
                print("not admin")
                # non-admin login TO-DO
        else:
            print("Someone tried to login and failed.")
            print("They used username: {} and password: {}".format(username,password))
            messages.error(request,'Incorrect Username or Password')
    return render(request,'mainapp/index.html')
