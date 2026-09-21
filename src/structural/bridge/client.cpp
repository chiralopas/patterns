/**
 * The Problem: Lets say we have some objects(abstractions) which depends upon
 * other objects(to provide something concrete) but there can be multiple objects
 * on both sides. This will result in class explosion as below, which is bad.
 *
 * Bridge Pattern: the intent of bridge pattern is to decouple an abstraction
 * from its implementations so they can vary independently.
 *
 * Note: we use adapter when we have a problem of incompatible interfaces, but we
 * use bridge when we want to avoid that problem to ever happen.
 */

#include <iostream>
#include "view.h"

#define LONG_ARTIST 1
#define CLASSIC_BOOK 0
#define SHORT_ALBUM 0


void print_view(IView& view)
{
    std::cout << view.show() << "\n";
}

int main()
{
#if LONG_ARTIST
    ArtistResource artist;
    LongView long_view(artist);
    print_view(long_view);
#endif

#if CLASSIC_BOOK
    BookResource book;
    ClassicView classic_view(book);
    print_view(classic_view);
#endif

#if SHORT_ALBUM
    AlbumResource album;
    ShortView short_view(album);
    print_view(short_view);
#endif

    return 0;
}
