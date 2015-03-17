#ifndef NETWORK_ENTITY_H
#define NETWORK_ENTITY_H

#include <set>

namespace Networking
{
    class NetworkEntityMultiplexer;
    class Session;
    class Message;

    class NetworkEntity
    {
    friend class Session;
    friend class NetworkEntityMultiplexer;
    public:
        /**
         * Constructs a new NetworkEntity.
         *
         * @param mux the NetworkEntityMultiplexer that this entity is to
         *            receive messages from and send messages to.
         * @param id the id used when multiplexing and demiltiplexing
         * @param type denotes which sub class of NetworkEntity this entity is
         */
        NetworkEntity( int id, int type );

        /**
         * Destructs a NetwrokEntity.
         */
        ~NetworkEntity();

        /**
         * Send an update to the other side
         *
         * @param message message used when calling onUpdate on the other side
         */
        void
        update( Message message );

        /**
         * Meant to be overwritten by user to handle an incoming update
         *
         * @param message message sent from the other side
         */
        virtual void
        onUpdate( Message message );

        /**
         * Method used to register a session so the entity can send and receive
         * to and from the session.
         *
         * @param session session to register with this entity
         * @param message message used when calling onRegister on the other side
         */
        void
        registerSession( Session * session, Message message );

        /**
         * Meant to be overwritten by user. Called when the associated entity on
         * the other side calls the register method. MUST CALL silentRegister();
         *
         * @param session session that has been registered to the entity
         * @param message message that sent from the other side
         */
        virtual void
        onRegister( int type, Session * session, Message message );

        /**
         * Unregisters the session from the entity so it will no longer be able
         * to send or receive updates.
         *
         * @param session session to unregister from this entity
         * @param message message used when calling onUnregister
         *                on the other side
         */
        void
        unregisterSession( Session * session, Message message );

        /**
         * Meant to be overwritten by the user. Called when the associated
         * entity on the other side calls the unregister method.
         * MUST CALL silentUnregister();
         *
         * @param session session that has been unregistered from the entity
         * @param message message that sent from the other side
         */
        virtual void
        onUnregister( Session * session, Message message );
    private:
        /**
         * The id of the entity. Used for multiplexig purposes.
         */
        int id;

        /**
         * An int representing a sub class of NetworkEntity.
         * Used for instantiation.
         */
        int type;

        /**
         * The multiplexer that this entity sends to and receives from.
         */
        NetworkEntityMultiplexer* mux;

        /**
         * The set containing all the sessions registerd with this entity
         */
        std::set< Session * > registeredSessions;

        /**
         * Invoked after NetworkEntityMultiplexer::onRegister() callback
         * is invoked
         *
         * @param session session to be registered with this entity
         */
        void
        silentRegister( Session* session );

        /**
         * Invoked before NetworkEntity::onUnregister() callback is invoked
         *
         * @param session session to be unregistered from this entity
         */
        void
        silentUnregister( Session* session );
    };
}

#endif