package com.taskrabbit.zendesk;

import java.lang.String;

import zendesk.chat.JwtAuthenticator;

public class ZDKJWTAuth implements JwtAuthenticator {
    private static final String TAG = "[ZDKJWTAuth]";

    private String token;

    public void setToken(final String token) {
        this.token = token;
    }

    @Override
    public void getToken(JwtCompletion jwtCompletion) {
        jwtCompletion.onTokenLoaded(token);
    }
}
