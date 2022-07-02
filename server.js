const WebSocket = require('ws');
server = require("express");
app = server();
require("ejs");
app.set("view ejgine", "ejs");
const wss = new WebSocket.Server({ port: 8999 });
CalcScreenBuffer="";
CalcClientMessages="";
const ModeratorClients = new Map();
const FakeCalcClients = new Map();

app.get('/', (req, res) => {
    res.render("./moderator.ejs");
})
wss.on('connection', (ws) => {
    console.log("new connection");

    ws.on('message', (messageAsString) => {
        const message = JSON.parse(messageAsString);
        console.log(message);
        console.log(message.type);
        switch (message.type) {
            case 'registerme':
                clients.set(message.id, ws);
                break
        }
    });

});